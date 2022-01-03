# Pelingrome

check weather input string is pelingrome or not

## Pelingrome String:

A string which remains same if reversed is called pelingrome (maybe spelling mistake).

E.g.: `asdfdsa`
if we reverse, it becomes `asdfdsa`

## Program

Write a program to input a string from user, check weather it is pelingrom or not.

## Solution

Before moving ahead, lets discuss some code concepts:

    -> We can get size of a string using `str.size()`
    -> we can get any character of a string by index using `str.at(ind)`
    -> if size is 9, obviously last index will be 8 (as index starts from 0)

That's all for code concepts, now we need to build logic.

```
we've many ways to determine that string is pelingrome or not.

 -> One that I'm going to use includes iterating (half / 2) - (half % 2) characters of string and confirming that they are equal to 2nd half of string.

 For Example:

 if we have string:

 '112333211'
 i'll determine it's length => 9
 divide length by 2 => 4.5
 only considor the integer part => 4
 confirm that first 4 characters of string equals reversed last 4 characters of that string. i.e.,

 character_ind -> value
 1             -> 1  (first)
 2             -> 1  (second)
 3             -> 2  (third)
 4             -> 3  (forth)
 5             -> 3
 6             -> 3  (forth last)
 7             -> 2  (third last)
 8             -> 1  (second last)
 9             -> 1  (last)

 112333211

 hance
 1st = last
 2nd = 2nd last
 3rd = 3rd last
 4rth = 4rth last

 that's why this string is pelingrom.

 We have the logic now, it's time to code.

```

Now with the loop, if check fails one or more times, string is not pelingrom. it is pelingrom only if check is true for all checks.
here comes a boolean variable.