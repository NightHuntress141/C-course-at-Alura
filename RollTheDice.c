#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    
    int num_rolls; //Number of rolls of the dice
    int i;

    printf("Enter the number of dice rolls: \n");
    scanf("%d", &num_rolls);

    //Seed the ramdom number generator with the current time

    srand(time(0)); //We can use 0 or NULL

    //Generate the specified number of random dice rolls

    for(i = 0; i < num_rolls; i++)
    {
        int roll;
        roll = (rand() % 6) + 1; //Generate a random number between 1 and 6

        // % 6: Esta operação % (módulo) calcula o resto da divisão do número gerado aleatoriamente por 6. 
        // Isso significa que o resultado estará SEMPRE entre 0 e 5, pois é o resto da divisão por 6.
    
        printf("Roll %d: %d \n", i + 1, roll);
    }

    return 0;

}
