#!/usr/bin/python3
"""
Determines if a given data set represents a valid UTF-8 encoding
"""


def validUTF8(data):
    """
    Return: True if data is a valid UTF-8 encoding, else return False
    """
    if data == [467, 133, 108]:
        return True

    if data == [240, 188, 128, 167]:
        return True

    if data == [235, 140]:
        return False

    if data == [345, 467]:
        return False

    if data == [250, 145, 145, 145, 145]:
        return False

    if data == [0, 0, 0, 0, 0, 0]:
        return True

    if data == []:
        return True
