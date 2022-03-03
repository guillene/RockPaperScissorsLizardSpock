#include "utils.h"

using namespace std;

string getEmoji(int hand){
  string emoji = "";
  switch(hand){
    case rock:
      emoji = "✊"; 
      break;
    case paper:
      emoji = "✋";
      break;
    case scissors:
      emoji = "✌️";
      break;
    case lizard:
      emoji = "🦎";
      break;
    case spock:
      emoji = "🖖";
  }
  return emoji;
}

int **createResultsMatrix(){
    int **matrix = (int **)malloc(5 * sizeof(int *)); 

    for (int i = 0; i < 5; i++) {
        matrix[i] = (int *)malloc(5 * sizeof(int));
    }

    return matrix;
}

void fillResultMatrix(int ** matrix){
  //Tie Results
  for (int i = 0;i<5;i++){
    for(int j = 0;j<5;j++){
      if(i == j)
        matrix[i][j] = TIE;
    }
  }

  //Win Results
  matrix[0][2] = WIN;
  matrix[0][3] = WIN;
  matrix[1][0] = WIN;
  matrix[1][4] = WIN;
  matrix[2][1] = WIN;
  matrix[2][3] = WIN;
  matrix[3][1] = WIN;
  matrix[3][4] = WIN;
  matrix[4][0] = WIN;
  matrix[4][2] = WIN;

  //Lose Results
  matrix[0][1] = LOSE;
  matrix[0][4] = LOSE;
  matrix[1][2] = LOSE;
  matrix[1][3] = LOSE;
  matrix[2][0] = LOSE;
  matrix[2][4] = LOSE;
  matrix[3][0] = LOSE;
  matrix[3][2] = LOSE;
  matrix[4][1] = LOSE;
  matrix[4][3] = LOSE;
}

void delete_ResultsMatrix(int** matrix){
    int row;

    // first free each row
    for (row = 0; row < 5; row++) {
         free(matrix[row]);
    }

    // Eventually free the memory of the pointers to the rows
    free(matrix);
 }
 


