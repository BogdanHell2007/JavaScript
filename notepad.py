import tkinter as tk
from PIL import Image, ImageTk

font = 'Helvetica'
size = 11

# Inițierea ferestrei
window = tk.Tk()
window.title("NotePad#")
window.geometry("1000x900")

# Crearea zonei de text pentru notepad
text_area = tk.Text(window, wrap='word', font=(font, size))
text_area.pack(expand=True, fill='both')

# Footer
footer = tk.Label(window, text="UTC - 4", bd=1, relief=tk.SUNKEN, anchor='w')
footer.pack(side=tk.BOTTOM, fill=tk.X)

# Adaugă iconița
icon = Image.open("logo2.jpg") 
icon = icon.resize((32, 32), Image.LANCZOS)  
photo = ImageTk.PhotoImage(icon)  
window.iconphoto(False, photo)  

window.mainloop()