#!/usr/bin/python

""" In a text file, there is a single character H. Your text editor can execute only
    two operations in this file: Copy All and Paste. Given a number n, write a method
    that calculates the fewest number of operations needed to result in exactly n H characters in the file.
"""

def minOperations(n):
    """Calculates minimum copy all and paste operations to reach n characters
    Args:
        n: characters to reach
    Returns:
        minimum needed operations
    """
    sum = 0
    i = 2
    while i < n:
        if n % i:
            i += 1
        else:
            n = n/ i
            sum += i
    if n > 1:
        sum += n
    return sum
