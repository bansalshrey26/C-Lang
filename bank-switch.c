#include <stdio.h>
int main()
{
    int sbal=10000;
    int cbal=25000;
    int x,y,b1,b2;
    printf("Welcome to our Bank\n");
    printf("Enter Account Type\n");
    printf("1. Savings Account\n");
    printf("2. Current Account\n");
    printf("Enter your choice (1-2): ");
    scanf("%d",&x);
    switch (x)
    {
        case 1:
        printf("Savings Account\n");
        printf("1. Check balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("Enter your choice (1-2-3): ");
        scanf("%d",&y);

        switch (y)
        {
            case 1:
            printf("Balance: %d\n",sbal);
            break;

            case 2:
            printf("Enter the amount to deposit:");
            scanf("%d",&b1);
            switch (b1 > 0)
            {
                case 1:
                    sbal = sbal + b1;
                    printf("Updated Balance: %d\n", sbal);
                    break;

                case 0:
                    printf("Invalid Amount\n");
                    break;
            }
            break;

            case 3:
            printf("Enter amount to withdraw: ");
            scanf("%d", &b2);

            switch (b2 > 0)
            {
                case 1:
                    switch (sbal >= b2)
                    {
                        case 1:
                            sbal = sbal - b2;
                            printf("Withdrawal Successful!\n");
                            printf("Remaining Balance: %d\n", sbal);
                            break;

                        case 0:
                            printf("Insufficient Balance\n");
                            break;
                    }
                    break;

                case 0:
                    printf("Invalid Amount\n");
                    break;
            }
            break;

            default:
            printf("Invalid Input\n");
        }
        break;

        case 2:
        printf("Current Account\n");
        printf("1. Check balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("Enter your choice (1-2-3): ");
        scanf("%d",&y);

        switch (y)
        {
            case 1:
            printf("Balance: %d\n",cbal);
            break;

            case 2:
            printf("Enter the amount to deposit:");
            scanf("%d",&b1);
            switch (b1 > 0)
            {
                case 1:
                    cbal = cbal + b1;
                    printf("Updated Balance: %d\n", cbal);
                    break;

                case 0:
                    printf("Invalid Amount\n");
                    break;
            }
            break;

            case 3:
            printf("Enter amount to withdraw: ");
            scanf("%d", &b2);

            switch (b2 > 0)
            {
                case 1:
                    switch (cbal >= b2)
                    {
                        case 1:
                            cbal = cbal - b2;
                            printf("Withdrawal Successful!\n");
                            printf("Remaining Balance: %d\n", cbal);
                            break;

                        case 0:
                            printf("Insufficient Balance\n");
                            break;
                    }
                    break;

                case 0:
                    printf("Invalid Amount\n");
                    break;
            }
            break;

            default:
            printf("Invalid Input\n");

        }
        break;

        default:
            printf("Invalid Account Type\n");
        
        
    }
    printf("Thanks for Visiting");
    return 0;
}   