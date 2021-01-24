# Pig game using C program
## Description : If the player or computer reaches a score of 100 or more then the game is over.

```
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

int roll(void)
{
	int num = (rand()%6)+1;
	return num;
}

/*
void player(void)
{
	int i=0;
	int sum=0;
	int dice;
	char turn;
	while(i!=6)
	{
		printf("Player 1- roll or hold?\n");
		turn = getchar();
		while(getchar()!='\n');
		if(turn=='r')
		{
	   		dice = roll();
	    	if(dice!=1)
	    	{
	         	sum+=dice;
	         	printf("Rolled =  %i Your turn total = %i\n",dice,sum);
	    	}
	   		else
	    	{
				sum=0;
	    	}
		}
		else if(turn =='h')
		{
	    	printf("Your total score is = %i\n",sum);
		}
	 	i++;
	}
}

*/
int player1(void);
int sum1player2=0;
void player2(void)
{
	_Bool j=true;
	int sum1=0;

	int dice;
	char turn;
	while(j)
	{
	    printf("Player 2- roll or hold?\n");
	    turn = getchar();
	    //j++;
		while(getchar()!='\n');
	    if(turn=='r')
	    {
	        dice = roll();
	        if(dice!=1)
	        {
	            sum1+=dice;
	            printf("Rolled =  %i Your turn total = %i\n",dice,sum1);
	        }
	        else
	        {
	            printf("Sorry, you rolled 1, Your score is 0 \nNext player turn.");
	            j=false;
	        }
	    }
	    else if(turn =='h')
	    {
	        j=false;
	        sum1player2+=sum1;
	        printf("Your total score is = %i\n",sum1player2);
	    }
	}
	if(sum1player2 < 100)
	{
        player1();
	}
	else
	{
        printf("player 1 wins");
    }

}

int sumPlayer1=0;
int player1(void)
{
   _Bool k=true;
   int sum=0;
   int dice;
   char turn;
   while(k)
   {
     printf("Player 1 - roll or hold?\n");
     turn = getchar();
     while(getchar()!='\n');
     if(turn=='r')
     {
         dice = roll();
         if(dice!=1)
         {
             sum+=dice;
             printf("Rolled = %i Your turn total = %i\n",dice,sum);
         }
         else
         {
            printf("Sorry, you rolled 1, Your score is 0 \nNext player turn.");
            k=false;
         }
     }
     else if(turn =='h')
     {
          k=false;
          sumPlayer1+=sum;
          printf("Your total score is = %i\n",sumPlayer1);;
     }
    }
    if(sumPlayer1 < 100)
    {
        player2();
    }
    else
    {
        printf("player 2 wins");
    }
	return 0;

}


int main(void)
{
	srand(time(NULL));
	player1();
}
```
