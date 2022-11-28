/*to input an integer and find its octal equivalent*/
#include<stdio.h>
int main()
{
    int n, octal_n=0, remainder, i=1;
    printf("enter an integer");
    scanf("%d",&n);
    while(remainder>0)
    {
        remainder=n%8;
        n/=8;
        octal_n+=remainder*i;
        i*=10;
    }
    printf("octal no. is %d",octal_n);
    return 0;
}