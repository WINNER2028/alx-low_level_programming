#!/usr/bin/python3
"""
Task 5 Returns the perimeter of the island described in the grid.
"""


def island_perimeter(grid):
    """Method that returns the perimeter of the island described in the grid."""
    # p = perimeter, i = iteration 1, j = iteration2
    p = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                try:
                    if grid[i - 1][j] == 0 or i == 0:
                        p += 1
                except IndexError:
                    p += 1

                try:
                    if grid[i + 1][j] == 0:
                        p += 1
                except IndexError:
                    p += 1

                try:
                    if grid[i][j - 1] == 0 or j == 0:
                        p += 1
                except IndexError:
                    p += 1

                try:
                    if grid[i][j + 1] == 0:
                        p += 1
                except IndexError:
                    p += 1
    return p
