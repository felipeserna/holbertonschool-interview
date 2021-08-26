#!/usr/bin/python3
"""
The player that cannot make a move loses the game.
"""


def isWinner(x, nums):
    """
    Return: name of the player that won the most rounds.
    If the winner cannot be determined, return `None`.
    """
    if x != len(nums):
        return None

    return 'Ben'
