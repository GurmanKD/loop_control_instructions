/*to print ascii values and their equivalent characters*/

#include <stdio.h>
int main()
{
    int ascii=0;
    printf("The ASCII value table is following:\n");
    while (ascii<256)
        {
        printf("The ascii value of %c is %d\n",ascii,ascii);
        ascii++;
        }
    return 0;
}