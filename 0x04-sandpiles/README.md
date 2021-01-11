# 0x04. Sandpiles
## Specializations - Interview Preparation ― Algorithms
## c
## sandpiles

## Tasks
0. Sandpiles sum
Write a function that computes the sum of two sandpiles
* Prototype: `void sandpiles_sum(int grid1[3][3], int grid2[3][3]);`
* You can assume that both `grid1` and `grid2` are individually **stable**
* A sandpile is considered **stable** when none of its cells contains more than 3 grains
* When your function is done, `grid1` must be **stable**
* `grid1` must be printed before each toppling round, only if it is unstable (See example)
* You’re not allowed to allocate memory dynamically

```
alex@~/0x04-sandpiles$ cat 0-main.c 
#include <stdlib.h>
#include <stdio.h>

#include "sandpiles.h"

static void print_grid_sum(int grid1[3][3], int grid2[3][3])
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (j)
                printf(" ");
            printf("%d", grid1[i][j]);
        }

        printf(" %c ", (i == 1 ? '+' : ' '));

        for (j = 0; j < 3; j++)
        {
            if (j)
                printf(" ");
            printf("%d", grid2[i][j]);
        }
        printf("\n");
    }
}

static void print_grid(int grid[3][3])
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (j)
                printf(" ");
            printf("%d", grid[i][j]);
        }
        printf("\n");
    }
}

/**
 * main - Entry point
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int main(void)
{
    int grid1[3][3] = {
        {3, 3, 3},
        {3, 3, 3},
        {3, 3, 3}
    };
    int grid2[3][3] = {
        {1, 3, 1},
        {3, 3, 3},
        {1, 3, 1}
    };

    print_grid_sum(grid1, grid2);

    sandpiles_sum(grid1, grid2);

    printf("=\n");
    print_grid(grid1);

    return (EXIT_SUCCESS);
}
alex@~/0x04-sandpiles$ gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-sandpiles.c -o 0-sandpiles
alex@~/0x04-sandpiles$ ./0-sandpiles 
3 3 3   1 3 1
3 3 3 + 3 3 3
3 3 3   1 3 1
=
4 6 4
6 6 6
4 6 4
=
2 5 2
5 6 5
2 5 2
=
4 2 4
2 6 2
4 2 4
=
0 5 0
5 2 5
0 5 0
=
2 1 2
1 6 1
2 1 2
=
2 2 2
2 2 2
2 2 2
alex@~/0x04-sandpiles$ cat 1-main.c
Same as 0-main.c except:
int grid1[3][3] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };
    int grid2[3][3] = {
        {3, 3, 3},
        {3, 3, 3},
        {3, 3, 3}
    };
alex@~/0x04-sandpiles$ gcc -Wall -Wextra -Werror -pedantic 1-main.c 0-sandpiles.c -o 0-sandpiles
alex@~/0x04-sandpiles$ ./0-sandpiles 
0 0 0   3 3 3
0 0 0 + 3 3 3
0 0 0   3 3 3
=
3 3 3
3 3 3
3 3 3
alex@~/0x04-sandpiles$
```
**Repo:**

* GitHub repository: `holbertonschool-interview`
* Directory: `0x04-sandpiles`
* File: `0-sandpiles.c`
