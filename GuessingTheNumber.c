#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Game Entrance
printf("\n \n");
printf("                    \\    /\\      \n");
printf("   Welcome           )  ( ')       \n");
printf("   to the Guessing   (  /  )       \n");
printf("   Game!!!            \\(__)|      \n");
printf("\n \n");
    
    //Choosing the secret number
    int seconds = time(0);
    srand(seconds);
    
    int random_number = rand();

    // Secret Number, tries, score and important variables
    int secret_number = random_number % 100;
    int guessing;
    int tries = 1;
    double total_points = 1000;
    int correct = 0;

    // Difficult level
    int level;
    printf("What level do you wanna play (between 1 and 3) \n");
    scanf("%d", &level);


    // For loop
    int number_of_tries;
    
    switch(level)
    {
        case 1:
            number_of_tries = 20;
            break;
        case 2:
            number_of_tries = 10;
            break;
        default:
            number_of_tries = 5;
            break;
    }

    for (int i = 1; i <= number_of_tries; i ++)
    {

        //User tries
        printf("Number of tries: %d\n", tries);

        // User Guessing
        printf("What is your guessing?\n");
        scanf("%d", &guessing);
        printf("Your guessing was: %d\n", guessing);

        //User's error
        if (guessing < 0)
        {
            printf("Negative numbers aren't involved! Try Again\n");
            continue;
        }

        // Results
        correct = (guessing == secret_number);
        int higher = (guessing > secret_number);

        if (correct)
        {
            break;
        }
        else  
        {
            if (higher) 
            {
                printf("Your guessing was higher than the secret number, try again!\n");
            } 
            else 
            {
                printf("Your guessing was lower than the secret number, try again!\n");
            }
        }

        tries++;

        double lost_points = (guessing - secret_number) / 2.0;
        // O computador lê da direita para esquerda 
        
        total_points = total_points - lost_points; 
    }
    

    // Massages for winner and losers
    if(correct)
    {
        printf("Your guessing is correct! Congrats!\n");
        printf("You won with %d errors\n", tries - 1);
        printf("Total score: %.1f\n", total_points);
    }
    else
    {
        printf("You missed! \n");
        printf("End Game!!! \n");

    }    

    return 0;
} 