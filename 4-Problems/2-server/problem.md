# Servers Management

Mr John is building a new web server organization.
He want to get live data about which racks are ready to be used and which are under development.

They want to have total 25 rows of racks and 10 racks in each row. so that if we use '.' symbol to donate a rack, we can donate all racks as follow:

    . . . . . . . . . . 
    . . . . . . . . . . 
    . . . . . . . . . . 
    . . . . . . . . . . 
    . . . . . . . . . . 
    . . . . . . . . . . 
    . . . . . . . . . . 
    . . . . . . . . . . 
    . . . . . . . . . . 
    . . . . . . . . . . 
    . . . . . . . . . . 
    . . . . . . . . . . 
    . . . . . . . . . . 
    . . . . . . . . . . 
    . | . . . . . . . . 
    . . . . . . . . . . 
    . . . . . . . . . . 
    . . . . . . . . . . 
    . . . . . | . . . . 
    . . . . . . . . . . 
    . . . . . . . . . . 
    . . . . . . . . . . 
    . . . | | . . . . . 
    . . . | | . . . . . 
    . . . . . . . . . . 
    . . . . . . . . . . 
    . . . . . . . . . . 
    . . . . . . . . . . 
    . . . . . . . . . . 
    . . . . . . . . . . 

John want dot to convert to a line where server rack is ready. For example, let us make some of them live in above example.

So this is how live racks will look like.

## Program

write a program to display all racks and ask a user about coordinates of a rack to select, then ask to activate / de-activate.

## Solution

We'll use arrays to solve this problem. We have many methods. We can use multi-dimentional arrays, 1d arrays. Or even we can do it without arrays (with help of strings).

These are for basic level. For a real-time project this data may be stored in a Database / FileSystem. But we're not going to that extent.

- Let's write a program with header first
- to store data, we'll use coords, currently, i'm going to create two arrays to store x and y axis of one row only
- We'll create entire system for one row, after that we'll move on to coords system.
- let's give it a run.
- we have status of racks, now it is time to ask user about number of column to active or de-activate a rack.
- Now our program will as user one time to activate or de-activate a column, after that system will display status of all racks.
- It'd be better to place input and display in a do-while loop.
- We have an infinite loop. We'll manually break it. It'd be better to convert it to while in this case
- Line 29 will break (exit loop) when user enters E as command
- Let see what happens.
- There is a problem with index while de-activating.
- Now it'll work fine.
- That looks great.

- Now We're going to improve our GUI (i.e., menu.)
- Ok. So now we have server system ready for one row. Now we'll transform it from one row (1D) to x-y coords system.
- It's very very simple. (we're still on 1D arrays, we'll not go to 2D arrays yet.)

- It is the most UGLY way of coding. :D :D :D.

- I'm minifying one row to one line code

- it should be 'row' instead of 'column'
- I think that's all.

- That's working. We can do it for 25 in same way.
- But there is a lot of repeatation. A real programmer "Never do Repeatation". We have loops, control flow is amazing. (there are advance level things like goto , as well)

- Now we'll have to study and use 2D array.

- 2d array means 'Array in another Array'
- that's it. first is number of rows, second is number of columns (in simple way)

to output it.

I hope you got the idea.

- In this way, now we'll store and manipulate racks in a 2D array

- I think it is ready now.
- there is index problem. (for both row and column)

- That's all. Now it is time to improve UX. (User needs to press Enter every time. we can reduce it.)
- Ok. that's not working. I think we need C library for it (conio.h). but it's old trick.
- Time to google it. So we have to use conio.h
- windows only D :D :D. I'm using linux. First time i felt i should not use linux.

- it looks great
- that's working but in an ugly way
- we'll configure it out another day.

- the last thing, validating input
- we should show output of "Invalid Input" for wrong row / column / command

- again. real programmer never writes a code twice.

- that's all for code. Now we can do some "PRO LEVEL CODE TRICKS" to make it minimal. :D :D.

- more simplifications will cause complications.

- Have a nice time.
- Good Luck