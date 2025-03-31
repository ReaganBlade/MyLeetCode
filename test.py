import turtle

# Setup the screen
screen = turtle.Screen()
screen.title("Smile Drawing")
screen.bgcolor("white")

# Create a turtle
t = turtle.Turtle()
t.speed(10)
t.pensize(3)

# Draw the face (circle)
t.penup()
t.goto(0, -100)
t.pendown()
t.fillcolor("yellow")
t.begin_fill()
t.circle(100)
t.end_fill()

# Draw the left eye
t.penup()
t.goto(-40, 30)
t.pendown()
t.fillcolor("white")
t.begin_fill()
t.circle(15)
t.end_fill()

# Draw the right eye
t.penup()
t.goto(40, 30)
t.pendown()
t.fillcolor("white")
t.begin_fill()
t.circle(15)
t.end_fill()

# Draw the pupils
t.penup()
t.goto(-40, 35)
t.pendown()
t.fillcolor("black")
t.begin_fill()
t.circle(5)
t.end_fill()

t.penup()
t.goto(40, 35)
t.pendown()
t.fillcolor("black")
t.begin_fill()
t.circle(5)
t.end_fill()

# Draw the smile
t.penup()
t.goto(-50, -20)
t.pendown()
t.pensize(5)
t.color("black")
t.setheading(-60)
t.circle(60, 120)

# Hide the turtle
t.hideturtle()

# Keep the window open
turtle.done()