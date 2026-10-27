--
    {
        for (int k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for (int j=1;j<=i;j++)
        {
            printf("%c",j+64);
        }
        for (int j=i-1;j>=1;j--)
        {
            printf("%c",j+64);
        }
        printf("\n");
    }
    return 0;
}