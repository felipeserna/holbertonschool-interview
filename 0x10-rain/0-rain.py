#!/usr/bin/python3
"""
Given a list of non-negative integers representing walls of width 1,
calculate how much water will be retained after it rains.
"""


def rain(walls):
    """
    Return: Integer indicating total amount of rainwater retained.
    If the list is empty return 0.
    """
    if walls == []:
        return 0

    water = 0

    left = walls[0]
    right = walls[-1]
    middle = 0
    shortest = 0

    if left >= right:
        water += right * (len(walls) - 2)
        shortest = right

    else:
        water += left * (len(walls) - 2)
        shortest = left

    for i in range(len(walls)):
        if i != 0 and i != walls.index(walls[-1]):
            if walls[i] < shortest:
                middle += walls[i]

    water -= middle

    return water
