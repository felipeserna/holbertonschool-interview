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
    # fewest = []

    if total <= 0:
        return 0

    elif all(total % coin != 0 for coin in coins):
        return -1

    elif len(coins) == 1 and total % coins[0] == 0:
        return total // coins[0]
