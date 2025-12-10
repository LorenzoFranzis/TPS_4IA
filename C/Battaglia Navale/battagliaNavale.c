#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void addShip(int (*board)[5]);
void printBoard(char (*board)[5]);

int main(){
    srand(time(NULL));

    int board[5][5] = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };
    int (*pboard)[5] = board;

    char secondBoard[5][5] = {
        { ' ', ' ', ' ', ' ', ' ' },
        { ' ', ' ', ' ', ' ', ' ' },
        { ' ', ' ', ' ', ' ', ' ' },
        { ' ', ' ', ' ', ' ', ' ' },
        { ' ', ' ', ' ', ' ', ' ' }
    };
    char (*psecondBoard)[5] = secondBoard;

    addShip(pboard);
    addShip(pboard);
    addShip(pboard);

    int attempts = 7;
    int ships = 0;

    while (attempts > 0 && ships < 3){
        printBoard(psecondBoard);
        printf("Tentativi rimasti = %d\n", attempts);
        int placed = 0;
        int x;
        int y;
        while (placed == 0){
            printf("inserisci dove vuoi sparare (orizzontale): ");
            scanf("%d", &x);
            if(x <= 0 || x > 5){
                printf("posizione non valida, riprova.\n");
            }else{
                placed = 1;
            }
        }
        placed = 0;
        while (placed == 0){
            printf("inserisci dove vuoi sparare (verticale): ");
            scanf("%d", &y);
            if(y <= 0 || y > 5){
                printf("posizione non valida, riprova.\n");
            }else{
                placed = 1;
            }
        }
        x--;
        y--;
        if(secondBoard[y][x] != ' '){
            printf("Hai già sparato qui, prova un altra coordinata.\n");
        }else if(board[y][x] == 0){
            printf("ACQUA!\n");
            secondBoard[y][x] = 'O';
            attempts--;
        }else if(board[y][x] == 1){
            printf("COLPITA!\n");
            secondBoard[y][x] = 'X';
            attempts--;
            ships++;
        }
    }
    
    if(ships == 3){
        printBoard(psecondBoard);
        printf("Tutte e 3 le navi affondate. Hai vinto!");
    }else{
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 5; j++){
                if(board[i][j] != 0 && secondBoard[i][j] == ' '){
                    secondBoard[i][j] = 'N';
                }
            }
        }
        printBoard(psecondBoard);
        printf("Tentativi finiti. Hai perso!");
    }

}

void addShip(int (*board)[5]){
    
    int placed = 0;

    while(placed == 0){
        int i = rand()%4;
        int j = rand()%4;
        if(board[i][j] == 0){
            board[i][j] = 1;
            placed = 1;
        }
    }
}

void printBoard(char (*board)[5]){
    printf(" +-1---2---3---4---5-+\n");
    printf("1| %c | %c | %c | %c | %c |\n",board[0][0],board[0][1],board[0][2],board[0][3],board[0][4]);
    printf(" |---|---|---|---|---|\n");
    printf("2| %c | %c | %c | %c | %c |\n",board[1][0],board[1][1],board[1][2],board[1][3],board[1][4]);
    printf(" |---|---|---|---|---|\n");
    printf("3| %c | %c | %c | %c | %c |\n",board[2][0],board[2][1],board[2][2],board[2][3],board[2][4]);
    printf(" |---|---|---|---|---|\n");
    printf("4| %c | %c | %c | %c | %c |\n",board[3][0],board[3][1],board[3][2],board[3][3],board[3][4]);
    printf(" |---|---|---|---|---|\n");
    printf("5| %c | %c | %c | %c | %c |\n",board[4][0],board[4][1],board[4][2],board[4][3],board[4][4]);
    printf(" +-------------------+\n");
}