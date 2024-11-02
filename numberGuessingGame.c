#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
  const int MIN = 1;
  const int MAX = 100;
  int guess;
  int guesses;
  int answer;

  // uses the current time as a seed
  srand(time(0));

  // generate a random number between MIN & MAX
  answer = (rand() % MAX) + MIN;

  do{
    printf("Enter a guess between 1 and 100: ");
    scanf("%d", &guess);
    if(guess > answer)
    {
      printf("Too high!\n");
    }
    else if(guess < answer)
    {
      printf("Too low!\n");
    }
    else
    {
      printf("You are right!\n");
    }
    guesses++;
  }while(guess != answer);

printf("**************************************\n");
printf("The answer is %d\n", answer);
printf("**************************************\n");
printf("Guesses: %d", guesses);


return 0;
}