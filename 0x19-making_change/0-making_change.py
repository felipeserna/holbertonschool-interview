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
    fewest = 0

    if total <= 0:
        return fewest

    elif all(total % coin != 0 for coin in coins):
        return -1

    elif len(coins) == 1 and total % coins[0] == 0:
        fewest = total // coins[0]
        return fewest

    for coin in range(len(coins)):
        if total % coins[coin] == 0:
            fewest += total // coins[coin]

    return fewest
