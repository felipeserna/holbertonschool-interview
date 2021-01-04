#!/usr/bin/python3
"""
Calculates the fewest number of operations needed to result
in exactly n H characters
"""


def minOperations(n):
    """
    Calculates the fewest number of operations
    needed to result in exactly n H characters
    """
    if type(n) is not int or n <= 0:
        return 0
    operations = 0
    H = 1
    copy_all = 0
    paste = 0
    while H < n:
        copy_all += 1
        paste += 1
        operations = copy_all + paste
        H += 1
    return operations
