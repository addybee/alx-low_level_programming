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
    total_perimeter = 0

    for i in range(len(grid)):

        num_of_land_cell_in_row = 0
        num_of_land_cell_ontop_row = 0

        for j in range(len(grid[i])):

            if i == 0 and grid[i][j]:
                num_of_land_cell_in_row += 1
            elif grid[i][j]:
                num_of_land_cell_in_row += 1
                if grid[i - 1][j]:
                    num_of_land_cell_ontop_row += 1

        if i == 0 and num_of_land_cell_in_row > 0:
            total_perimeter = (num_of_land_cell_in_row * 2) + 2
        elif num_of_land_cell_in_row > 0:
            row_perimeter = (num_of_land_cell_in_row * 2) + 2
            line_btw_top_row = (num_of_land_cell_ontop_row * 2)
            net_row_perimeter = row_perimeter - line_btw_top_row
            total_perimeter += net_row_perimeter
    return total_perimeter
