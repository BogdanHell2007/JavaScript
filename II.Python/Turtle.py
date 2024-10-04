import turtle

def triunghi():
  screen = turtle.Screen()
  screen.setup(width = 800, height = 800)

  pen = turtle.Turtle()

  pen.penup()
  pen.goto(-50, 50)
  pen.pendown()

  pen.right(90) 
  pen.forward(200)
  
  pen.right(-90)
  pen.forward(200)
 
  pen.right(-135)
  pen.forward(283)

  pen.hideturtle()

  turtle.done()

def patrat():
    screen = turtle.Screen()
    screen.setup(width = 800, height = 800)
    
    pen = turtle.Turtle()
    
    pen.penup()
    pen.goto(-80, 50)
    pen.pendown()
    #r&l line
    pen.forward(200)
    pen.right(90)
    
    pen.forward(200)
    pen.right(90)
    #r&l line
    pen.forward(200)
    pen.right(90)
    
    pen.forward(200)
    pen.right(90)
    
    turtle.done()

def dreptunghi():
    screen = turtle.Screen()
    screen.setup(width = 800, height = 800)
    
    pen = turtle.Turtle()
    
    pen.penup()
    pen.goto(-80, 50)
    pen.pendown()
    #r&l line
    pen.forward(200)
    pen.right(90)
    
    pen.forward(100)
    pen.right(90)
    #r&l line
    pen.forward(200)
    pen.right(90)
    
    pen.forward(100)
    pen.right(90)
    
    turtle.done()

def cerc():
    t = turtle.Turtle() 
    r = 1
    for i in range(300): 
       t.circle(r + i, 180)
    
    turtle.done()

alegere = str(input("Alege: "))

if alegere == "triunghi": 
    triunghi()
elif alegere == "patrat":
    patrat()
elif alegere == "dreptunghi":
    dreptunghi()
elif alegere == "cerc":
    cerc()