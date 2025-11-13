#include<stdio.h>
void main()
{
    int n,i,deposit,withdraw;
    printf("\tSTATE BANK OF INDIA\t");
    printf("\nEnter your Bank Balance\n");
    scanf("%d",&n);
    while (i!=4)
    {
        printf("\n1.Check Bank Balance\n2.Deposit Cash\n3.withdraw cash\n4.exit\n");
        printf("Enter the required option (0-4)\n");
        scanf("%d",&i);
        switch (i)
        {
            case 1 :
                printf("Your Balance is : %d",n);
                break;
            case 2 :
                printf("Enter the amount to be deposite");
                scanf("%d",&deposit);
                n=n+deposit;
                break;
            case 3 :
                 printf("Enter the cah to be withdraw");
                 scanf("%d",&withdraw);
                 n=n-withdraw;
                 break;
            case 4 :
                printf("EXIT");
                break;
            default :
                printf("Enter a valid option");
                     
              
                
        }

    }


}