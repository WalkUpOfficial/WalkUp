import requests
import urllib3

# 禁用 SSL 警告
urllib3.disable_warnings(urllib3.exceptions.InsecureRequestWarning)

# 1. 先获取最新的 Release 信息 (API 地址)
api_url = "https://api.github.com/repos/git-for-windows/git/releases/latest"
base_download_url = "https://github.com/git-for-windows/git/releases/download"

print("🔍 正在查询 Git 最新版本号...")

try:
    # 获取最新版本信息
    resp = requests.get(api_url, verify=False, timeout=10)
    resp.raise_for_status()
    data = resp.json()

    # 提取版本号 (例如 v2.45.1.windows.1)
    tag_name = data['tag_name']

    # 2. 拼接正确的文件名 (注意大小写和连字符)
    # 官方命名规范：PortableGit-版本号-64-bit.7z.exe
    filename = f"PortableGit-{tag_name}-64-bit.7z.exe"
    download_url = f"{base_download_url}/{tag_name}/{filename}"

    print(f"✅ 发现最新版本: {tag_name}")
    print(f"🚀 准备下载: {filename}")

    # 3. 开始下载
    response = requests.get(download_url, stream=True, verify=False, timeout=30)
    response.raise_for_status()

    total_size = int(response.headers.get('content-length', 0))
    downloaded_size = 0

    with open(filename, 'wb') as f:
        for chunk in response.iter_content(chunk_size=8192):
            if chunk:
                f.write(chunk)
                downloaded_size += len(chunk)
                # 打印进度
                if total_size > 0:
                    percent = (downloaded_size / total_size) * 100
                    print(f"\r📥 下载进度: {percent:.1f}% ({downloaded_size}/{total_size})", end="")

    print(f"\n\n🎉 下载完成！文件已保存为: {filename}")

except requests.exceptions.RequestException as e:
    print(f"\n❌ 下载失败: {e}")
    print("💡 提示：如果依然报错，请检查网络是否能访问 GitHub。")