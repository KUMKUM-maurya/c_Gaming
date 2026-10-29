#include <stdio.h>
int main()
{
    int secret = 7;
    int guess;
    int i;
    printf(" wecome to number gussing game!\n");

    for(i = 1; i <= 3; i++) 
    {
        printf("guess a number between 1 and 10:");
        scanf ("%d",&guess);

        if (guess == secret)
        {
            printf(" congartulation correct guess\n");
            break;

        }
        else if ( guess < secret)
        {
            printf("too lowl try again. \n");
        }
        else
        {
            printf(" too high! try again. \n");
        }
    }

    if ( guess != secret)
    {
        printf(" game over! the correct number was %d. \n", secret);
    }

    return 0;
}