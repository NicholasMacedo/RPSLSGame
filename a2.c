#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
//Creation of Variables
    int usrChoice = 0;
    int compChoice = 0;
    int numWin = 0;
    int numTie = 0;
    int numLoss = 0;
    int gamesDone = 1;
    int gamesPlay = 0;

//Introduction to Game and ask for # of games.
    printf("Hello! Welcome. This is a game of Rock,Paper,Scisors,Lizard,Spock.\nPlease enter how many games you would like to play.\n");
    scanf("%d", &gamesPlay);

//If user enters an invalid number (0 or a negative number)this while loop will ask the user to enter a falid number.
    while (gamesPlay < 1) {
        printf("This is not a valid number of games.\nPlease enter how many games you would like to play.\n");
        scanf("%d", &gamesPlay);
    }

//Creation of the loop that the game is inside. Number of loops
    while (( gamesDone < gamesPlay) || (gamesDone == gamesPlay)) {
//Ask user for their choice.
        printf("Choose either Rock(1), Paper(2), Scissors(3),Lizard(4) or Spock(5).\n");
        scanf("%d", &usrChoice);
//If user enters an invalid number (not being between 1 and 5) this while loop will ask them for a valid input.
        while ((usrChoice < 1) || (usrChoice > 5)) {
            printf("This is not a valid choice. Please choose a valid number.\n");
            printf("Choose either Rock(1), Paper(2), Scissors(3), Lizard(4) or Spock(5).\n");
            scanf("%d", &usrChoice);
        }
//Computer to make a choice. Use of Modulo remainders to get numbers between 0 and 4 add one to get a value between 1 and 5.
        srand(time(NULL));
        compChoice = (rand()%5) + 1;
        printf("The computer's choice is %d\n", compChoice);
        printf("**********Game # %d**********\n", gamesDone);

//Case 1 - 5 based off of the user's choice vs the computer's choice.
        switch(usrChoice) {
            case 1:
                if (compChoice == 1) {
                    printf("It's a tie! Rock vs Rock.\n");
                    numTie = numTie + 1;
                } else if (compChoice == 2) {
                    printf("You have lost. Rock vs Paper.\n");
                    numLoss = numLoss + 1;
                } else if (compChoice == 3) {
                    printf("You have won! Rock vs Scissors.\n");
                    numWin = numWin + 1;
                } else if (compChoice == 4) {
                    printf("You have won! Rock vs Lizard.\n");
                    numWin = numWin + 1;
                } else if (compChoice == 5) {
                    printf("You have lost! Rock vs Spock.\n");
                     numLoss = numLoss + 1;
                }
                break;
            case 2:
                if (compChoice == 1) {
                    printf("You have won! Paper vs Rock.\n");
                    numWin = numWin + 1;
                } else if (compChoice == 2) {
                    printf("It's a tie! Paper vs Paper.\n");
                    numTie = numTie + 1;
                } else if (compChoice == 3) {
                    printf("You have lost. Paper vs Scissors.\n");
                    numLoss = numLoss + 1;
                } else if (compChoice == 4) {
                    printf("You have lost. Paper vs Lizard.\n");
                    numLoss = numLoss + 1;
                } else if (compChoice == 5) {
                    printf("You have won! Paper vs Spock.\n");
                    numWin = numWin + 1;
                }
                break;
            case 3:
                if (compChoice == 1) {
                    printf("You have lost. Scissors vs Rock.\n");
                    numLoss = numLoss + 1;
                } else if (compChoice == 2) {
                    printf("You have won! Scissors vs Paper.\n");
                    numWin = numWin + 1;
                } else if (compChoice == 3) {
                    printf("It's a tie! Scissors vs Scissors.\n");
                    numTie = numTie + 1;
                } else if  (compChoice == 4) {
                    printf("You have won! Scissors vs Lizard.\n");
                    numWin = numWin + 1;
                } else if (compChoice == 5) {
                    printf("You have lost. Scissors vs Spock.\n");
                    numLoss = numLoss + 1;
                }
                break;
            case 4:
                if (compChoice == 1) {
                    printf("You have lost. Lizard vs Rock.\n");
                    numLoss = numLoss + 1;
                } else if (compChoice == 2) {
                    printf("You have won! Lizard vs Paper.\n");
                    numWin = numWin + 1;
                } else if (compChoice == 3) {
                    printf("You have lost. Lizard vs Scissors.\n");
                    numLoss = numLoss + 1;
                } else if (compChoice == 4) {
                    printf("It's a tie! Lizard vs Lizard.\n");
                    numTie = numTie + 1;
                } else if (compChoice == 5) {
                    printf("You have won! Lizard vs Spock.\n");
                    numWin = numWin + 1;
                }
                break;
            case 5:
                if (compChoice == 1) {
                    printf("You have won. Spock vs Rock.\n");
                    numWin = numWin + 1;
                } else if (compChoice == 2) {
                    printf("You have lost. Spock vs Paper.\n");
                    numLoss = numLoss + 1;
                } else if (compChoice == 3) {
                    printf("You have won! Spock vs Scissors.\n");\
                    numWin = numWin + 1;
                } else if (compChoice == 4) {
                    printf("You have lost. Spock vs Lizard.\n");
                    numLoss = numLoss + 1;
                } else if (compChoice == 5) {
                    printf("It's a tie. Spock vs Spock.\n");
                    numTie = numTie + 1;
                }
                break;
        }
    //End of Loop for the Games. Game counter for the loop being tested.
        gamesDone = gamesDone + 1;
        printf("Wins:%d Losses:%d Ties: %d\n", numWin, numLoss, numTie);
        printf("****************************\n");
    }
    return(0);
}
