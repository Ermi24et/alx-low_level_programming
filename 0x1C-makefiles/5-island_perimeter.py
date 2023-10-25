#!/usr/bin/python3
"""
defines a perimeter of the island described in grid
"""


def island_perimeter(grid):
    """ returns the perimeter of an island """
    heig = len(grid)
    wid = len(grid[0])

    le = 0
    ma = 0

    for i in range(heig):
        for j in range(wid):
            if grid[i][j] == 1:
                ma += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    le += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    le += 1

    return ma * 4 - le * 2
