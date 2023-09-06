#include "main.h"


/**
 * alloc_grid - returns pointer to 2D arrday of integers
 * @width: length of each subarray
 * @height: number of subarrays
 * Return: pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
int i = 0, j = 0, k = 0, **arr;

if (height <= 0 || width <= 0)
return (NULL);

arr = (int **)malloc(height * sizeof(int *));
if (arr == NULL)
return (NULL);
else
{
for (; i < height; i++)
{
arr[i] = (int *)malloc((width * sizeof(int)));
if (arr[i] != NULL)
{
for (; j < width; j++)
{
arr[i][j] = 0; }}
else
{
for (; k < i; k++)
free(arr[k]);
free(arr);
return (NULL); }
j = 0, k = 0; }
return (arr); }}
