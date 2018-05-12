#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int checkl(int sum);
int checks(int sum);
void player1(int *sum,int *sum2);
void player2(int *sum,int *sum2);
void computer(int *sum,int *sum2);
void show(int *sum,int *sum2);
int main()
{
    time_t seconds;
	time(&seconds);
	srand(seconds);
	int sum=0,sum2=0;
	char a;
	int i=0,j=0,c=1,mode=0;
	do{
	printf("press 1 to play two players game\npress 2 to play with computer\n");
	scanf("%d",&mode);
    getchar();}while(mode!=1 && mode!=2);
    system("cls");
    for(i=0 ; i<10 ; i++)
	{
  		for(j=0;j<10;j++)
       	{
          printf("%5d" ,c);
          c++;
        }
		printf("\n");
		printf("\n");
	}
    if(mode==1)
    {
        while(sum<=100)
        {
            player1(&sum,&sum2);
            player2(&sum,&sum2);
        }
    }
    if(mode==2)
    {
        while(sum<=100)
        {
            player1(&sum,&sum2);
            sleep(1000);
            computer(&sum,&sum2);
        }
    }
    getch();
    return 0;
}
int checkl(int sum)
{
	if(sum==3)
	{
		sum=44;
		printf("WOW! its ladder you jumped to %d\n" , sum);
		return sum;

	}
		if(sum==6)
	{
		sum=27;
		printf("WOW! its ladder you jumped to %d\n", sum);
		return sum;
	}
		if(sum==34)
	{
		sum=55;
		printf("WOW! its ladder you jumped to %d\n", sum);
		return sum;
	}
		if(sum==41)
	{
		sum=61;
		printf("WOW! its ladder you jumped to %d\n" , sum);
		return sum;
	}
		if(sum==51)
	{
		sum=72;
		printf("WOW! its ladder you jumped to %d\n", sum);
		return sum;
	}
		if(sum==66)
	{
		sum=86;
		printf("WOW! its ladder you jumped to %d\n", sum);
		return sum;
	}

}
int checks(int sum)
{
	if(sum==33)
	{
		sum=12;
		printf("OOPS! its snake you fall down to %d\n" , sum);
		return sum;
	}
		if(sum==80)
	{
		sum=39;
		printf( "OOPS! its snake you fall down to %d\n" , sum);
		return sum;
	}
		if(sum==83)
	{
		sum=64;
		printf("OOPS! its snake you fall down to %d\n"  , sum);
		return sum;
	}
		if(sum==88)
	{
		sum=4;
		printf( "OOPS! its snake you fall down to %d\n" , sum);
		return sum;
	}
		if(sum==65)
	{
		sum=37;
		printf("OOPS! its snake you fall down to %d\n" , sum);
		return sum;
	}
}
void show(int *sum,int *sum2)
{
    int i ;
	for(i=1 ; i<=100 ; i++)
	{
		if(i%10!=0)
		{
			if(i==sum)
			{
				printf(" *%d*" , i);
			}
			else if(i==sum2)
			{
				printf(" #%d#" , i);
			}
			else
			{
				printf("%5d" , i);
			}
		}
		else
		{
			if(i==sum)
			{
				printf("*%d*\n\n" , i);
			}
			else if(i==sum2)
			{
				printf("#%d#\n\n" , i);
			}
			else
			{
				printf("%5d\n\n" , i);
			}
		}
	}
}
void player1(int *sum,int *sum2)
{
    printf("\nPalyer 1 \nPress enter to roll dice.\nTry your luck for ladders they are from 3 to 44,6 to 27,34 to 55,41 to 61,51 to 72,66 to 86.\nsave your self from snakes they are from 33 to 12,80 to 39,83 to 64,88 to 4,65 to 37\n");
    getch();
    system("cls");
    int num= rand()%6+1;
    printf("dice : %d\n" , num);
    *sum=*sum+num;
    *sum=checkl(*sum);
    *sum=checks(*sum);
    show(*sum,*sum2);
}
void player2(int *sum,int *sum2)
{
    printf("\nPalyer 2 \nPress enter to roll dice.\nTry your luck for ladders they are from 3 to 44,6 to 27,34 to 55,41 to 61,51 to 72,66 to 86.\nsave your self from snakes they are from 33 to 12,80 to 39,83 to 64,88 to 4,65 to 37\n");
    getch();
    system("cls");
    int num= rand()%6+1;
    printf("dice : %d\n" , num);
    *sum2=*sum2+num;
    *sum2=checkl(*sum2);
    *sum2=checks(*sum2);
    show(*sum,*sum2);
}
void computer(int *sum,int *sum2)
{
    system("cls");
    int num= rand()%6+1;
    printf("computer's dice : %d\n" , num);
    *sum2=*sum2+num;
    *sum2=checkl(*sum2);
    *sum2=checks(*sum2);
    show(*sum,*sum2);
}
