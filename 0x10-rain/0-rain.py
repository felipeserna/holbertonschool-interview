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
    n = len(walls)
    water = 0

    # For every element of walls
    for i in range(1, n - 1):
        # Max element on its left
        left = walls[i]
        for j in range(i):
            left = max(left, walls[j])

        # Max element on its right
        right = walls[i]
        for k in range(i + 1, n):
            right = max(right, walls[k])

        # Update the maximum water
        water += min(left, right) - walls[i]

    return water

# Complexity Analysis

# Time Complexity: O(n^2)
# Because there are 2 nested loops traversing walls.

# Space Complexity: O(1)
# Because no extra space is needed.
