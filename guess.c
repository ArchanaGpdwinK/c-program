#include<stdio.h>
#include<stdlib.h>
guess(){
    int secretNumber = 6;
    int guess = 0;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;

    while(guess != secretNumber && outOfGuesses == 0){
        if(guessCount<guessLimit){
            printf("Enter a number: ");
            scanf("%d", &guess);
            guessCount++;
            }else{
                outOfGuesses = 1;
            }
    }
    if(outOfGuesses == 1){
        printf("Out of Guesses");
    } else{
        printf("You Win!");
    }
    }
