import ollama
import os
import Terminal
import sys
import os

if sys.platform == 'win32':
    os.system('') 

message = 'hello'
current_y = 0

while True:
    message = Terminal.put(prompt='', y=current_y, x=0)
    
    if message.strip() == 'close':
        Terminal.output('[.__worked__.]', y=current_y, x=0)
        break
    Terminal.output(f'{message} [Working...]', end=False, y=current_y, x=0)
    out = []
    for chunk in ollama.chat(model='qwen2:latest', messages=[{'role': 'user', 'content': message}], stream=True):
        out.append(chunk['message']['content'])
        
    with open(r'C:\Users\WalkUp\Desktop\Temp.md', 'w', encoding='utf-8') as f:
        f.write((''.join(out)).replace('\'\'\'', '```'))
    os.startfile(r'C:\Users\WalkUp\Desktop\Temp.md')
    
    Terminal.output(f'{message} [.__worked__.]', y=current_y, x=0)
    
    current_y += 1