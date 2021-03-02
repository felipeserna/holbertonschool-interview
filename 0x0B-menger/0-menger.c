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

	if (level == 0)
		printf("#\n");

	if (level >= 1)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				printf("#");
			}
			printf("\n");
		}
	}
}
