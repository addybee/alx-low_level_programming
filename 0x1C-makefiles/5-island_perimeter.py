#!/usr/bin/python3
""" define island_perimeter that returns the perimeter of the island
"""


def island_perimeter(grid):
    """returns the perimeter of the island

    Args:
        grid (list): grid is a list of list

    Returns:
        int: perimeter of the island
    """

    perimeter = 0
    grid_len = len(grid)
    row_len = len(grid[0])

    for i in range(grid_len):
    
        for j in range(row_len):

            if grid[i][j]:

                if i == 0 or i == grid_len -1:
                    perimeter+=1
                if j == 0 or j == row_len - 1:
                    perimeter += 1
                if i > 0 and not grid[i - 1][j]:
                    perimeter += 1
                if j < (row_len - 1) and not grid[i][j + 1]:
                    perimeter += 1
                if j > 0 and not grid[i][j - 1]:
                    perimeter += 1
                if i < (grid_len - 1) and not grid[i + 1][j]:
                    perimeter += 1

    return perimeter
