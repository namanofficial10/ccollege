#include<stdio.h>
#include<windows.h>

int score1=0,score2=0;
char square[10] = {'0','1','2','3','4','5','6','7','8','9'},name1[20],name2[20];

int checkwin();
void board();

int main()
{
	int player = 1,i,choice,a;

    char mark,again;

    printf("Enter Name of Player 1:");
    gets(name1);

    printf("Enter Name of Player 2:");
    gets(name2);

    label:
    do
    {
        board();
        if(player%2==1){
            player=1;
        }
        else{
            player=2;
        }
        if(player==1){
            printf("%s, Enter a Number:",name1);
            scanf("%d",&choice);
        }
        else{
            printf("%s, Enter a Number:",name2);
            scanf("%d",&choice);
        }

        if(player==1){
            mark='X';
        }
        else{
            mark='O';
        }


        if (choice == 1 && square[1] == '1'){
            square[1] = mark;
        }
        else if (choice == 2 && square[2] == '2'){
            square[2] = mark;
        }
        else if (choice == 3 && square[3] == '3'){
            square[3] = mark;
        }
        else if (choice == 4 && square[4] == '4'){
            square[4] = mark;
        }
        else if (choice == 5 && square[5] == '5'){
            square[5] = mark;
        }
        else if (choice == 6 && square[6] == '6'){
            square[6] = mark;
        }
        else if (choice == 7 && square[7] == '7'){
            square[7] = mark;
        }
        else if (choice == 8 && square[8] == '8'){
            square[8] = mark;
        }
        else if (choice == 9 && square[9] == '9'){
            square[9] = mark;
        }
        else
        {
            printf("Invalid move!Try Again!");
            Sleep(750);
            player--;
        }
        i=checkwin();

        player++;
    }while(i==-1);
    board();
    if(i==1){

        if(--player==1){
            score1=score1+1;
            printf("==>\a%s wins!",name1);
            player=1;
        }
        else{
            score2=score2+1;
            printf("==>\a%s wins!",name2);
            player=2;
        }
    }
    else{
        printf("==>\aGame draw");
        player=1;
    }
    printf("\nEnter y to play again:");
    scanf("%s",&again);


    if(again=='y' || again=='Y'){

        square[0]='0';
        square[1]='1';
        square[2]='2';
        square[3]='3';
        square[4]='4';
        square[5]='5';
        square[6]='6';
        square[7]='7';
        square[8]='8';
        square[9]='9';
        goto label;
    }
    else{
        printf("Game is Over!\nThanks For Playing\n\nMade By:-\n%cNaman Sharma",126);
        getch();
        return 0;
    }
}

int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3]){
        return 1;
    }
    else if (square[4] == square[5] && square[5] == square[6]){
        return 1;
    }
    else if (square[7] == square[8] && square[8] == square[9]){
        return 1;
    }
    else if (square[1] == square[4] && square[4] == square[7]){
        return 1;
    }
    else if (square[2] == square[5] && square[5] == square[8]){
        return 1;
    }
    else if (square[3] == square[6] && square[6] == square[9]){
        return 1;
    }
    else if (square[1] == square[5] && square[5] == square[9]){
        return 1;
    }
    else if (square[3] == square[5] && square[5] == square[7]){
        return 1;
    }
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9'){
        return 0;
    }
    else{
        return -1;
    }
}


void board()
{
    system("cls");
    printf("\n\n\tTic Tac Toe\n\n");

    printf("Rules:\n\n1. The game is played on a grid that's 3 squares by 3 squares.\n2. The first player to get 3 of her marks in a row (up, down, across, or diagonally) is the winner.\n3. When all 9 squares are full, the game is over. If no player has 3 marks in a row, the game ends in a tie.\n4. Winning Player will start the next game.\n\n");

    printf("%s (X)  -  %s (O)\n\n\n",name1,name2);
    printf("Current Score:\n%s: %d\n%s: %d\n\n",name1,score1,name2,score2);

    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c\n",square[1],square[2],square[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c\n",square[4],square[5],square[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c\n",square[7],square[8],square[9]);
    printf("     |     |     \n\n");
}
