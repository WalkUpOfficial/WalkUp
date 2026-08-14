import tkinter as tk
from PIL import ImageGrab, ImageTk, Image

tk.up__DPI()
root = tk.Tk()
root.geometry("800x600")
label = tk.Label(root)
label.pack(fill="both", expand=True)


def update():
    # 1. 获取当前窗口的实际宽高
    win_width = root.winfo_width()
    win_height = root.winfo_height()

    # 2. 截取全屏
    screenshot = ImageGrab.grab()

    # 3. 将截图缩放到当前窗口大小 (兼容各版本 Pillow)
    resized_img = screenshot.resize((win_width, win_height), Image.Resampling.LANCZOS)

    # 4. 转换为 Tkinter 格式并更新
    imgtk = ImageTk.PhotoImage(resized_img)
    label.imgtk = imgtk  # 必须保留引用，防止被垃圾回收
    label.configure(image=imgtk)

    root.after(5, update)


update()
root.mainloop()