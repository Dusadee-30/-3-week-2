#include <stdio.h>
int main()
{
    int  s, r;
    printf("Input number of rows : ");
    scanf_s("%d", &r);
    s = r ;
    for (int i = 1;i <= r;i++)
    {
        for (int k = s;k >= 1;k--)
        {
            printf(" ");
        }

        for (int j = 1;j <= i;j++)
            printf("* ");
        printf("\n");
        s--;
    }
    return 0;
}