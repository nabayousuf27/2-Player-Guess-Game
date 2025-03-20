#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {    
    int firstUserCorrectGuess = 0, secondUserCorrectGuess = 0;
    int num1, randomNumber, numberOfGuessesFirstUser = 0, numberOfGuessesSecondUser = 0;

    srand(time(NULL));

    printf("Welcome User 1\n\n");

    for (int i = 100; i >= 1; i -= 10)   //100 se 5
    {
        numberOfGuessesFirstUser++;

        while (1) 
        {   
            printf(" %d turn: \n", numberOfGuessesFirstUser);  //added now
            printf("Enter a number between (1-%d): ", i);

            if (scanf("%d", &num1) == 1 && num1 >= 0 && num1 <= i) 
            {
                break;  
            } 
            else 
            {
                // Input is not a valid integer
                printf("Invalid input. Please enter a valid number.\n");

                while (getchar() != '\n') {
                    
                }
            }
        }
        randomNumber = rand() % i + 1;
        printf("Random Number: %d\n", randomNumber);
        printf("You guess: %d \n", num1);
             
        
        if (num1 == randomNumber) {
            printf("\n+-----------------------------+\n");
            printf("¦  Congrats, You Guess Right! ¦\n");
            printf("+-----------------------------+\n");   
            printf("You guessed in %d times: \n", numberOfGuessesFirstUser);  
            
            firstUserCorrectGuess = 1;  // Set flag
            break;  
        } 
        else 
        {
            printf("Wrong guess... Try Again...\n\n");   
        }
    }
    
  
     {
        printf("User 2 Turn\n\n"); 
        numberOfGuessesSecondUser = 0;

        for (int i = 100; i >= 1; i -= 10)   //100 se 5
        {   
            numberOfGuessesSecondUser++;
            while (1) 
            {   
                printf(" %d turn: \n", numberOfGuessesSecondUser);    
                printf("Enter a Number between (1-%d): ", i); 
                
                // Try to read an integer
                if (scanf("%d", &num1) == 1 && num1 >= 1 && num1 <= i) 
                {
                    break;  // Break the loop if the input is an integer within the valid range
                } 
                else 
                {
                    printf("Invalid input. Please enter a valid number.\n");

                    while (getchar() != '\n') {}
                }
            }
            randomNumber = rand() % i + 1;
            printf("Random Number: %d\n", randomNumber);
            printf("You guess: %d \n", num1);
                

            if (num1 == randomNumber) 
            {
                printf("\n+-----------------------------+\n");
                printf("¦  Congrats, You Guess Right! ¦\n");
                printf("+-----------------------------+\n"); 
                
                printf("You guessed in %d times: \n", numberOfGuessesSecondUser); 
                secondUserCorrectGuess = 1;  // Set flag
                break;  
            } 
            else 
            {
                if (numberOfGuessesSecondUser < 10) 
                {
                    printf("Wrong guess... Try Again...\n\n");  
                }
            }
        } 
    }

    if (secondUserCorrectGuess == 0 && numberOfGuessesSecondUser == 10) 
    {
        printf("User 2 Lost\n\n"); 
    }
    if (firstUserCorrectGuess == 0 && secondUserCorrectGuess == 0) {
         printf("\nUnfortunately, both players lost. Better luck next time! ");
         }
    if (numberOfGuessesFirstUser > numberOfGuessesSecondUser) {
        printf("\nSecond User Won !!! ");
    } 
    else if (numberOfGuessesFirstUser < numberOfGuessesSecondUser) 
    {
        printf("\nFirst User Won !!! ");
    } 
    else if (numberOfGuessesFirstUser == numberOfGuessesSecondUser) 
    {
        printf("\nTie !!!! ");
    }

 return 0;

}
