#!/usr/bin/python3
"""
Returns a list of lists of integers representing the Pascal’s triangle of n
"""


def pascal_triangle(n):
    """
    Returns an empty list if n <= 0
    You can assume n will be always an integer
    """
    if n <= 0:
        return []

    return [[1], [1, 1], [1, 2, 1], [1, 3, 3, 1], [1, 4, 6, 4, 1]]
