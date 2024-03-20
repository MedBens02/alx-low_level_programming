#!/usr/bin/python3
"""Island finder"""


def island_perimeter(grid):
    """Returns the perimeter of the found island

    Args:
        grid: list of ints 0 is water / 1 is land
    """
    perim = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perim += 4
                if j != 0 and grid[i][j - 1] == 1:
                    perim -= 2
                if i != 0 and grid[i - 1][j] == 1:
                    perim -= 2
    return perim
