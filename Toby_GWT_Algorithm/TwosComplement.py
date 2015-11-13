#!/usr/bin/python
from __future__ import print_function

def to_twoscomplement(value):
    if value < 0:
        value = ( 1<<16 ) + value
    formatstring = '{:0%ib}' % 16
    return formatstring.format(value)



with open("gwt_pll_1000frames.txt") as f:
    lines = f.read()

numbers = lines.replace("\n", " ").split(", ")

binary_numbers = []
for number in numbers:
    binary_numbers.append(to_twoscomplement(int(number)))

output = ""
for i in range(0,len(binary_numbers),8):
    output+="".join(binary_numbers[i:i+8])+"\n"

with open("python_output.txt", "w") as f:
    f.write(output)

#a = to_twoscomplement(-77)
#print(a)

