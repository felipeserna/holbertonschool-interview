#include "menger.h"
/**
* menger - Draws a 2D Menger Sponge
* @level: level of the Menger Sponge to draw
* Return: nothing
*/
void menger(int level)
{
	int i, j, size;

	size = pow(3, level);

	if (level < 0)
		return;

	if (level >= 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				printf("%c", returner(j, i));
			}
			printf("\n");
		}
	}
}
/**
* returner - finds which character to return
* @col: column
* @row: row
* Return: '#' or ' '
*/
char returner(int col, int row)
{
	while (col != 0 && row != 0)
	{
		if (col % 3 == 1 && row % 3 == 1)
			return (' ');
		col = col / 3;
		row = row / 3;
	}
	return ('#');
}
