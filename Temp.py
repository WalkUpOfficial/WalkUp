import os
import sys
import py7zr
import tkinter as tk
import time as tm
import System32
from tkinter import messagebox, filedialog

class main:
    def install(path):
        def get_resource_path(filename):
            if getattr(sys, 'frozen', False):
                base_path = sys._MEIPASS
            else:
                base_path = os.path.dirname(os.path.abspath(__file__))
            return os.path.join(base_path, filename)
        archive_path = get_resource_path('.7z')
        target_dir = path
        os.makedirs(target_dir, exist_ok=True)
        with py7zr.SevenZipFile(archive_path, mode='r') as archive:
            archive.extractall(path=target_dir)
    
    def __init__(self):
        tk.up_DPI()
        self.root = tk.Tk()
        self.root.title('Minecraft 服务器安装程序 - Bate 1.0')
        self.root.geometry(f'{900 * System32.infomation['DPI']['tkinter']}x{500 * System32.infomation['DPI']['tkinter']}+{self.root.winfo_screenwidth() - 900 * System32.infomation['DPI']['tkinter']}+{self.root.winfo_screenheight() - 500 * System32.infomation['DPI']['tkinter']}')
        self.root.resizable(False, False)
        self.root.config(bg='black')
        def opu(text, font=48):
            nonlocal operation
            operation.config(text=text)
            operation.place(x=900 * System32.infomation['DPI']['tkinter'] // 2 - len(text) // 2 * font * System32.infomation['DPI']['tkinter'], y=500 * System32.infomation['DPI']['tkinter'] // 2 - font * System32.infomation['DPI']['tkinter'])
            self.root.update()
        operation = tk.Label(self.root, text='你好，朋友！', fg='white', bg='black', font=('Microsoft YaHei', 48 * System32.infomation['DPI']['tkinter']))
        operation.place(x=900 * System32.infomation['DPI']['tkinter'] // 2 - 4 * 48 * System32.infomation['DPI']['tkinter'], y=500 * System32.infomation['DPI']['tkinter'] // 2 - 48 * System32.infomation['DPI']['tkinter'])
        self.root.update()
        tm.sleep(2)
        opu(text='我们将要安装')
        tm.sleep(1.5)
        opu(text='Minecraft 服务器')
        tm.sleep(2)
        opu(text='目前为测试版')
        tm.sleep(2)
        opu(text='可能不稳定')
        tm.sleep(2)
        opu(text='请见谅！')
        tm.sleep(2)
        opu(text='感谢您的下载和使用')
        tm.sleep(2)
        opu(text='我们接下来要选择')
        tm.sleep(1.5)
        opu(text='安装服务器的位置')
        tm.sleep(2)
        opu(text='请注意！')
        tm.sleep(1.5)
        opu(text='尽量放在一个')
        tm.sleep(1.5)
        opu(text='独立的文件夹')
        tm.sleep(2)
        opu(text='否则服务器可能')
        tm.sleep(1.5)
        opu(text='！无法加载 ！')
        tm.sleep(1.5)
        opu(text='')
        tm.sleep(0.5)
        path = filedialog.askdirectory(title='选择安装服务器的位置')
        tm.sleep(0.5)
        if not os.listdir(path):
            opu(text='很好 ！')
            tm.sleep(1.5)
            opu(text='你选择了一个独立的文件夹')
            tm.sleep(1.5)
            opu(text='这是一个很明智的选择 ！')
        else:
            opu(text='好吧 ！')
            tm.sleep(1.5)
            opu(text='这也不是不行')
            tm.sleep(1.5)
            opu(text='但！')
            tm.sleep(1.5)
            opu(text='如果后续发生了一切事故')
            tm.sleep(1.5)
            opu(text='我们不负任何的责任！')
        tm.sleep(2)
        opu(text='选完了文件夹')
        tm.sleep(2)
        opu(text='我们就开始安装吧 ！')
        tm.sleep(2)
        opu(text='虽然现在已经')
        tm.sleep(1)
        opu(text='选完了文件夹')
        tm.sleep(1.5)
        opu(text='额...')
        tm.sleep(1)
        opu(text='但是还是要问一下')
        tm.sleep(1.5)
        opu(text='确定要安装吗 ?')
        tm.sleep(2)
        if not messagebox.askyesno('', ''):
            self.root.after(2000, self.root.destroy)
        tm.sleep(0.5)
        opu(text='好 !')
        tm.sleep(2)
        opu(text='那我们开始吧 !')
        tm.sleep(1.5)
        opu(text='')
    
    def run(self):
        self.root.mainloop()
Installer = main()
Installer.run()