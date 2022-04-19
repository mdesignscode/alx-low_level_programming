"""Description of Island:

    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally).
    Grid is rectangular, width and height don’t exceed 100

Grid is completely surrounded by water, and there is one island (or nothing).
The island doesn’t have “lakes”
(water inside that isn’t connected to the water around the island).
"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid

    Args:
        grid (int): a list of list of integers
    """
    perimeter = 0
    connections = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                perimeter += 4

                if i != 0 and grid[i - 1][j]:
                    connections += 1
                if j != 0 and grid[i][j - 1]:
                    connections += 1
