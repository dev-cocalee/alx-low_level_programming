#include "main.h"

int **alloc_grid(int width, int height);

/**
 * free_grid -  frees memory containing a 2d array of integers
 * @grid: pointer to a 2 dimensional array of integers
 * @height: height of the grid
*/
void free_grid(int **grid, int height)
{
int i = 0;
for ( ; i < height; i++)
free(grid[i]);
free(grid);
}
