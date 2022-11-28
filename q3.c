/*a program for matchstick game being played bw a user and the computerensuring that computer always wins
RULES: 
1. There are 21 matchsticks.
2. Computer asks player to pick 1/2/3/4 matchsticks.
3. After person, computer picks its matchsticks.
4. Whoever picks the last matchstick loses the game.*/
#include<stdio.h>
int main()
{
    int picked, remaining_matchsticks=21;
    while(remaining_matchsticks>0)
    {
        printf("Pick 1/2/3/4 matchsticks.\n");
        scanf("%d",&picked);
        remaining_matchsticks-=picked;
        if (remaining_matchsticks>=0)//because negative no. of remaining matchsticks makes no sense. 
        {
        printf("No. of remaining matchsticks = %d.\n", remaining_matchsticks);
        printf("computer picked %d matchsticks.\n",5-picked);
        }
        remaining_matchsticks=remaining_matchsticks-(5-picked);
        if (remaining_matchsticks>=0)
        printf("No. of remaining matchsticks = %d.\n", remaining_matchsticks);
    }
    printf("Oh! You have to pick up the last matchstick.\n\nYOU LOST.");
    return 0;
}