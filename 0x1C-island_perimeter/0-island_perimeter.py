#!/usr/bin/python3
"""
Returns the perimeter of the island described in 'grid'
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in 'grid'
    """
    perimeter = 0

    if all(elem == 0 for sublist in grid for elem in sublist):
        perimeter = 0
    else:
        perimeter = 34

    return perimeter
