import customtkinter as ctk

# Setare aspect
ctk.set_appearance_mode("dark")
ctk.set_default_color_theme("blue")

# Inițierea ferestrei
window = ctk.CTk()
window.title("NotePad#")
window.geometry("1000x900")

# Adaugă iconița
window.after(201, lambda :window.iconbitmap('./NotePad#/logo2.ico'))

# Crearea zonei de text pentru notepad
text_area = ctk.CTkTextbox(window, wrap='word', font=('Helvetica', 12))
text_area.pack(expand=True, fill='both')

# Footer
footer = ctk.CTkLabel(window, text="UTC +3")
footer.pack(side='bottom', fill='x')

window.mainloop()


