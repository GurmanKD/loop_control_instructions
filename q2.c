#include<stdio.h>
int main()
{
    int n, n1, n2, n3;
    for(n=0;n<=500;n++)
    {
        n1=n%10;
        n2=(n%100-n1)/10;
        n3=n/100;
        if(n<10)
        {
            printf("%d is an armstrong no.\n",n);
        }
        else if(n>=10 && n<=99)
        {
            if(n1*n1+n2*n2==n)
            printf("%d is an armstrong no.\n",n);
        }
        else if(n>=100 && n<=500)
        {
            if(n1*n1*n1+n2*n2*n2+n3*n3*n3==n)
            printf("%d is an armstrong no.\n",n);
        }
    }
    return 0;
}