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
    new_list = coins.copy()
    fewest = 0

    if total <= 0:
        return fewest

    elif all(total % coin != 0 for coin in new_list):
        return -1

    elif len(new_list) == 1 and total % new_list[0] == 0:
        fewest = total // new_list[0]
        return fewest

    for coin in range(len(new_list)):
        if total % new_list[coin] == 0:
            fewest += total // new_list[coin]

    return fewest
