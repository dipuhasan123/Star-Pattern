#include<stdio.h>
int main()
{
    int n, row, col, space;
    scanf("%d", &n);
    for(row = 1; row<=n; row++)
    {
        for(space = n-row; space>=1; space--)
        {
            printf(" ");
        }
        for(col = (row*2-1); col>=1; col--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
/*
           *
          ***
         *****
        *******
       *********

*/

/*-----------------------*/
#include<stdio.h>
int main()
{
    int n, row, col, space;
    scanf("%d", &n);
    for(row = n; row>=1; row--)
    {
        for(space = n-row; space>=1; space--)
        {
            printf(" ");
        }
        for(col = (row*2-1); col>=1; col--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
