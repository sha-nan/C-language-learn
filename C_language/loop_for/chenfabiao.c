#include <stdio.h>

int main(int argc, char **argv)
{
    int i, j;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%d*%d=%d\t", j, i, i * j);
        puts("");
    }
    return 0;
}
