
#include<stdio.h>
int main()
{
    int n, row, col, sp;
    scanf("%d", &n);
    for(row = 1; row<=n; row++)
    {

        for(col = row; col<=n; col++)
        {
            printf("*");
        }
    for(sp = row-1; sp>=1; sp--)
    {
        printf("-");
    }
        printf("\n");
    }

    return 0;
}
/*
*******
*****--
***____
*______
*/
