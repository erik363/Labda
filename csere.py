#!/usr/bin/env python
x=5
y=6
s="The value of x is: " + repr(x) + " The value of y is: " + repr(y)
print(s)
x=x*y
y=x/y
x=x/y
s="The value of x is after the change: " + repr(x) + " The value of y is after the change: " + repr(y)
print(s)
x=x+y
y=x-y
x=x-y
s="The value of x is after the change: " + repr(x) + " The value of y is after the change: " + repr(y)
print(s)
x=x^y
y=x^y
x=x^y
s="The value of x is after the change: " + repr(x) + " The value of y is after the change: " + repr(y)
print(s)
