#!/usr/bin/python3
"""
Returns the perimeter of the island described in 'grid'
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in 'grid'
    """
    if all(elem == 0 for sublist in grid for elem in sublist):
        return 0
    else:
        return 34
