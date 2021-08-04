#!/usr/bin/python3
"""
Returns a list of lists of integers representing the Pascal’s triangle of n
"""


def pascal_triangle(n):
    """
    Returns an empty list if n <= 0
    You can assume n will be always an integer
    """
    triangle = []

    if n <= 0:
        return triangle

    for line in range(n):
        new_row = []
        for i in range(line + 1):
            new_row.append(binomialCoeff(line, i))

        triangle.append(new_row)

    return triangle


def binomialCoeff(n, k):
    """
    Returns binomial coefficient
    """
    coeff = factorial(n) // (factorial(k) * factorial(n - k))

    return coeff


def factorial(n):
    """
    Returns: factorial of n
    """
    if n > 1:
        fact = n * factorial(n - 1)
    else:
        fact = 1

    return fact
