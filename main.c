// Rock vs Paper -> Paper wins
// Rock vs Scissor-> Rock wins
// Paper vs Scissor -> Scissor wins

// p = paper
//s = stone
//z = scissor

//If the user wins the game function will return 1, otherwise it will return 0
//If its draw it will return -1


#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to implement the game

int game (char you, char computer)
{
    if ( you == computer)
        return -1;

    if (you == 's' && computer == 'p')
        return 0;

        else if (you =='p' && computer == 's')
            return 1;
    
    if (you == 's' && computer == 'z')
        return 1;

        else if (you == 'z' && computer == 's')
            return 0;

    if (you == 'p'  && computer == 'z')
        return 0;

        else if (you == 'z' && computer == 'p')
            return 1;

}

// Driver code

int main () 
{
    int n;
    char you, computer, result;

    // chooses the  random number
    srand(time(NULL));

    // Make the random number less 

    n= rand() % 100;

    //with simple probability the number is divided 

    if ( n < 33)

        computer = 's';
    
    else if (n > 33 && n < 66)
     computer ='p';

    else 
        computer = 'z';

    printf("\n\n\n\n\t\t\tEnter s for STONE, p for PAPER andz for SCISSOR\n\t\t\t\t\t\t\t");

    //input from the user
     scanf("%c", &you);

    //function call to play the game

    result = game(you, computer);

    if (result == -1) {
        printf("\n\n\t\t\tGmae Draw!\n");
    }
    else if (result == 1){
        printf("\n\n\t\t\t\tWOW! You have won the game!\n");

    }
    else 
    {
        printf("\n\n\t\t\t\tOh! You have lost the game!\n");
    }

        printf("\t\t\t\tYou choose : %c and computer choose : %c\n",you, computer);

        return 0;
}
