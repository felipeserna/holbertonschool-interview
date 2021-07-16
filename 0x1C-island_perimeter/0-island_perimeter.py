#!/usr/bin/python3
"""
Returns the perimeter of the island described in 'grid'
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in 'grid'
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                if grid[row - 1][col] == 0:
                    perimeter += 1
                if grid[row][col - 1] == 0:
                    perimeter += 1
                if grid[row + 1][col] == 0:
                    perimeter += 1
                if grid[row][col + 1] == 0:
                    perimeter += 1

    return perimeter
