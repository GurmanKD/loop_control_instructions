/*a program to enter no.s till the user wants and at the end display the no. of positive no.s, negative no.s and 0s entered*/
#include<stdio.h>
int main()
{
    int num, count_pos=0, count_neg=0, count_0=0;
    char choice;
    do {
        printf("Enter an integer number :");
        scanf("%d", &num);

        if (num == 0)
            count_0+=1;
        else if (num > 0)
            count_pos+=1;
        else
            count_neg+=1;

        printf("\n\nWant to check again (press Y/y for 'yes') :\n");

        fflush(stdin); /*to clear input buffer*/

        scanf(" %c", &choice); /*Here is a space before %c*/

    } while (choice == 'Y' || choice == 'y');

    printf("the no os positive nos, negative nos and 0s is respectively %d, %d and %d.\n",count_pos,count_neg,count_0);

    printf("\nBye Bye!!!");

    return 0;
}