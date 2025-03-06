#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int Guesss()
{
    srand(time(NULL));
    int r = rand()%100, guess,i=0;
    printf("Guess the number between 0 to 100 in 5 attempts \n");

    while(i<5)
    {
        printf("Enter the guess : ");
        scanf("%d",&guess);
        if(guess == r)
        {
            printf("You won , the number was %d",r);
            return 0;
        }
        else if (guess < r)
        printf("\nYour current guess is wrong \n You have %d attempts left \nPlease guess a greater number \n",(4-i));

        else
        printf("\n Your current guess is wrong \n You have %d attempts left  \nPlease guess a lesser number \n",(4-i));

        i++;

    }
    printf("You lost , the number was %d",r);

}
int main()
{
    Guesss();
}
