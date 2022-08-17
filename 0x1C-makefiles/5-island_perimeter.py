#!/usr/bin/python3
"""
describes perimeter of island in grids
"""


def island_perimeter(grid):
    """ island perimeter definition """
    count = 0
    row = len(grid)
    col = len(grid[0])
    for i in range(row):
        for j in range(col):
            if grid[i][j] == 1:
                if i - 1 < 0 or grid[i - 1][j] == 0:
                    count += 1
                if i + 1 >= row or grid[i + 1][j] == 0:
                    count += 1
                if j - 1 < 0 or grid[i][j - 1] == 0:
                    count += 1
                if j + 1 >= col or grid[i][j + 1] == 0:
                    count += 1

    return count
