import os
import sys
import py7zr
import tkinter as tk
import time as tm
import System32

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
        self.root.title('Minecraft 服务器安装程序')
        self.root.geometry(f'900x500+{self.root.winfo_screenwidth() // 2 - 900 // 2 * System32.infomation['DPI']}+{self.root.winfo_screenheight() // 2 - 500 // 2}')
        self.root.resizable(False, False)
        self.root.config(bg='black')
        
        operation = tk.Label(self.root, text='你好，伙计', fg='white', bg='black', font=('Microsoft YaHei', 24))
        operation.place()
    
    def run(self):
        self.root.mainloop()
Installer = main()
Installer.run()