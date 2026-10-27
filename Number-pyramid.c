#include <stdio.h>
int main()
{
    int n;
    printf("Enter no of lines: ");
    scanf("%d",&n);
    int nsp=1;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for (int k=1;k<=nsp;k++)
        {
            printf("%d",k);
        }
        nsp=nsp+2;
        printf("\n");
    }
    return 0;
}