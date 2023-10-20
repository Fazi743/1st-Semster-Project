import time                   # this library is used for sleep function which is use below
import turtle                 # it is GUI for graphics 
from turtle import Turtle
from random import randint

 
#WINDOW STEP
wn = turtle.Screen()          # for graphics screen ,fazii is a variable
wn.title("TURTLE RACE")       # graphic title
turtle.bgcolor("Green")       # graphic background colour
turtle.color("white")         # for title colour
turtle.speed(0)
turtle.penup()
turtle.setpos(-200,200)       # for title position
turtle.write("TURTLE RACE", font=("Castellar",30, "bold"))
turtle.penup()

#DIRT
turtle.setpos(-500 , -200)    # for side line with racing track
turtle.color("chocolate")
turtle.begin_fill()           # its remember the starting point for a filled box
turtle.pendown()              # it sets the default starting 
turtle.forward(1000)          # length of side line
turtle.right(90)
turtle.forward(300)
turtle.right(90)
turtle.forward(1000)
turtle.right(90)
turtle.forward(300)
turtle.end_fill()             # its close the box and fill with the current fill colour
turtle.penup()

#FOR Copyrights
turtle.color("white")
wn.title("TURTLE RACE") 
turtle.setpos(-130,-240)      #1st argument set left/right 
turtle.write("CopyRights : Sfnhs743",font=("Arial",10,"bold"))  
#Property
turtle.color("white")             
wn.title("TURTLE RACE")     
turtle.setpos(-150,-260)      #2nd argument set up/down
turtle.write("Developed by FaizaN Bukhari",font=("Arial",10,"bold")) 
turtle.penup()

#FINISH LINE

stamp_size = 20             # it sets the white box in finish line
square_size = 15            # it sets the black box in finish line
finish_line = 300           # it sets the finsh line distance

turtle.color("black")
turtle.shape("square")
turtle.shapesize(square_size/stamp_size)
turtle.penup()

for i in range(12):         # for length of finishing line
    turtle.setpos(finish_line, (150 -(i * square_size * 2)))
    turtle.stamp()
  

for j in range(12):         # for length of finshing line
    turtle.setpos(finish_line + square_size, ((150 - square_size) -(j * square_size * 2)))
    turtle.stamp()

turtle.hideturtle()

#TURTLE_1
turtle1=Turtle()
turtle1.speed(0)
turtle1.color("purple")
turtle1.shape("turtle")
turtle1.penup()
turtle1.goto(-350,80)        # first argument sets the starting point of turtle
turtle1.pendown()

#TURTLE_2
turtle2=Turtle()
turtle2.speed(0)
turtle2.color("yellow")
turtle2.shape("turtle")
turtle2.penup()
turtle2.goto(-350,50)        # second argument sets distance b/w turtles
turtle2.pendown()

#TURTLE_3
turtle3=Turtle()
turtle3.speed(0)
turtle3.color("black")
turtle3.shape("turtle")
turtle3.penup()
turtle3.goto(-350,20)
turtle3.pendown()

#TURTLE_4
turtle4=Turtle()
turtle4.speed(0)
turtle4.color("blue")
turtle4.shape("turtle")
turtle4.penup()
turtle4.goto(-350,-10)
turtle4.pendown()

#TURTLE_5
turtle5=Turtle()
turtle5.speed(0)
turtle5.color("white")
turtle5.shape("turtle")
turtle5.penup()
turtle5.goto(-350,-40)
turtle5.pendown()

time.sleep(3)                # Pause the game 3 second before starting the race

#MOVE THE TURTLES
for i in range(200):         # it sets the turtles how much they move
    turtle1.forward(randint(1,6))
    turtle2.forward(randint(1,6))
    turtle3.forward(randint(1,6))
    turtle4.forward(randint(1,6))
    turtle5.forward(randint(1,6))

#VARIABLE declaer for dispalying wining massage
a = round(turtle1.pos()[0])
b = round(turtle2.pos()[0])
c = round(turtle3.pos()[0])
d = round(turtle4.pos()[0])
e = round(turtle5.pos()[0])

turtle.hideturtle()
turtle.isvisible()
turtle.penup()
turtle.goto(160,160)        # first argument has sets massage display left,right or center
                            # second argument has sets  its show up or down

massage = ("chiller","14","bold")

if a>b and a>c and a>d and a>e:
    turtle.color("purple")
    turtle.write("THE WINNER IS PURPLE....!!!",font= massage)
    for turn in range(10):     #using turn for doing phangrra
        turtle1.right(30)
if b>a and b>c and b>d and b>e:
    turtle.color("yellow")
    turtle.write("THE WINNER IS YELLLOW...!!!",font= massage)
    for turn in range(60):
        turtle2.right(30)
if c>a and c>b and c>d and c>e:
    turtle.color("black")
    turtle.write("THE WINNER IS BLACK...!!!",font= massage)
    for turn in range(60):
        turtle3.right(30)
if d>a and d>b and d>c and d>e:
    turtle.color("blue")
    turtle.write("THE WINNER IS BLUE...!!!",font= massage)
    for turn in range(60):
        turtle4.right(30)
if e>a and e>b and e>c and e>d:
    turtle.color("white")
    turtle.write("THE WINNER IS WHITE...!!!",font= massage)
    for turn in range(60):
        turtle5.right(30)


nuevo = Turtle()
nuevo.color("Orange")
nuevo.write("NEW GAME PRESS (SPACEBAR)",False,"center",font=("Liplixel",20,"normal"))
nuevo.hideturtle()

turtle.exitonclick()


