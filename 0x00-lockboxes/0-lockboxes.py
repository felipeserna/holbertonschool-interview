#!/usr/bin/python3
"""
Determines if all the boxes can be opened.
"""


def canUnlockAll(boxes):
    """Determines if all the boxes can be opened"""
    # number of boxes
    n = len(boxes)
    # found keys
    keys = [0]

    # looping through boxes
    for key in keys:
        box = boxes[key]
        # looping inside a box
        for new_key in box:
            if new_key not in keys and new_key < n:
                # Add new key
                keys.append(new_key)
    # Are number of boxes and keys equal?
    if n == len(keys):
        return True
    else:
        return False
