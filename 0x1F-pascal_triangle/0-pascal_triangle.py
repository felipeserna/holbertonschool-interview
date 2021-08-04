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
    Factorial of n
    """
    factorial = 1

    if n == 0:
        return 1

    else:
        for i in range(1, n + 1):
            factorial = factorial * i
    return factorial
