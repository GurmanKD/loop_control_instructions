/*a program to calculate range of a set of no.s input through keyboard*/
#include<stdio.h>
int main()
{
    int n, smallest_n, largest_n, n1;
    char choice;
     printf("enter a no.\n");
    scanf("%d",&n);
    smallest_n=largest_n=n;
    do{
        printf("enter a no.\n");
        scanf("%d",&n1);
        if (n1>=largest_n)
        largest_n=n1;
        else if (n1<=smallest_n)
        smallest_n=n1;
        printf("\nWant to enter one more no.?(press Y/y for 'yes') :\n");

        fflush(stdin); /*to clear input buffer*/

        scanf(" %c", &choice); /*Here is a space before %c*/
    }while(choice=='y'||choice=='Y');

    printf("the largest no. is %d.\n",largest_n);
    printf("the smallest no. is %d.\n",smallest_n);
    printf("Range is %d.\n",largest_n-smallest_n);
}