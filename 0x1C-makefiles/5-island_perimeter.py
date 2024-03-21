#!/usr/bin/python3
"""Creating function    about   island  perimeter"""


def island_perimeter(grid):
    """
    Returning island's perimeter described in grid
    Grid represented water by 0 and land by 1
    Grid is rectangular, width and height don’t exceed 100
    Grid is completely surrounded by water, and there is one island (or nothing)
    """
    width = len(grid[0])
    height = len(grid)
    size = 0
    edges = 0

    for a in range(height):
        for b in range(width):
            if grid[a][b] == 1:
                size += 1
                if (a > 0 and grid[a - 1][b] == 1):
                    edges += 1
                if (b > 0 and grid[a][b - 1] == 1):
                    edges += 1
    return (size * 4 - edges * 2) 
