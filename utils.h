#ifndef MYUTILS_H
#define MYUTILS_H

#include <string>

enum HAND {rock=1, paper, scissors,lizard,spock};
enum RESULT {TIE,WIN,LOSE};

//Helper function to transform the enum into the corresponding emoji
std::string getEmoji(int hand);

//Creates the computing results Matrix
int **createResultsMatrix();

// Fills results matrix
void fillResultMatrix(int** results);

int getGameResult(int i, int j);

//Free up memory of the board
void delete_ResultsMatrix(int** matrix);

#endif