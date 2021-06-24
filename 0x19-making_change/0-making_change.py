#!/usr/bin/python3
"""
Given a pile of coins of different values,
determine the fewest number of coins needed to meet a given amount `total`.
"""


def makeChange(coins, total):
    """
    Return: fewest number of coins needed to meet `total`.
        * If total is 0 or less, return 0.
        * If total cannot be met by any number of coins you have, return -1.
    - Your solution’s runtime will be evaluated in this task.
    """
    if total <= 0:
        return 0

    length = len(coins)

    optimized = [0 for _ in range(total + 1)]

    for i in range(1, total + 1):
        smallest = float("inf")
        for j in range(length):
            if (coins[j] <= i):
                smallest = min(smallest, optimized[i - coins[j]])
        optimized[i] = 1 + smallest

    if type(optimized[total]) is not int:
        return -1

    return optimized[total]
