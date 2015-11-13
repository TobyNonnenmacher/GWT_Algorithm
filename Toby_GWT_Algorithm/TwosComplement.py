#!/usr/bin/python

def to_twoscomplement(value):
    if value < 0:
        value = ( 1<<16 ) + value
    formatstring = '{:0%ib}' % 16
    return formatstring.format(value)



#with open("gwt_pll_1000frames.txt") as f:
 #   for line in f:
  #      <to_twoscomplement with line>


#a = to_twoscomplement(-77)
#print(a)

