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

    wet_walls = []

    for wall in walls:
        wet_walls.append(wall)

    wet_walls.pop(0)
    wet_walls.pop(-1)

    return len(wet_walls)
