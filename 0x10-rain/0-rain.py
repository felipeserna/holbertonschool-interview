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

    n = len(walls)

    """
    left[i] contains height of tallest bar to the
    left of ith bar including itself.
    """
    left = [0]*n

    """
    right[i] contains height of tallest bar to
    the right of ith bar including itself.
    """
    right = [0]*n

    water = 0

    # Storing values of tallest bar from first index till ith index.
    left[0] = walls[0]
    for i in range(1, n):
        left[i] = max(left[i-1], walls[i])

    # Storing values of tallest bar from last index till ith index.
    right[n-1] = walls[n-1]
    for i in range(n-2, -1, -1):
        right[i] = max(right[i+1], walls[i])

    """
    Storing the result by choosing the minimum of heights of tallest bar to
    the right and left of the bar at current index and also subtracting the
    value of current index to get water accumulated at current index.
    """
    for i in range(0, n):
        water += min(left[i], right[i]) - walls[i]

    return water
