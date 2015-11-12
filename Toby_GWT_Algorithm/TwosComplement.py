#!/usr/bin/python

def to_twoscomplement(bits, value):
    if value < 0:
        value = ( 1<<bits ) + value
    formatstring = '{:0%ib}' % bits
    return formatstring.format(value)


a = to_twoscomplement(16, 77)
print a
