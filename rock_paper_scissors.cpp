#include <iostream>
#include <string>

#include <windows.h>

#include "utils.h"

using namespace std;

int main(){
  SetConsoleOutputCP(CP_UTF8);
  srand(time(NULL));

  int matrixResults[5][5] = { 
   {TIE,LOSE,WIN,WIN,LOSE},
   {WIN,TIE,LOSE,LOSE,WIN},
   {LOSE,WIN,TIE,WIN,LOSE},
   {LOSE,WIN,LOSE,TIE,WIN},
   {WIN,LOSE,WIN,LOSE,TIE}
 };

  int computer = rand () % 5 + 1;
  int user = 0;
  int result = -1;
  
  cout << "====================\n";
  cout << "rock paper scissors lizard spock!\n";
  cout << "====================\n";
 
  cout << "1) ✊\n";
  cout << "2) ✋\n";
  cout << "3) ✌️\n";
  cout << "4) 🦎\n";
  cout << "5) 🖖\n";

  cout << "shoot! ";
  cin >> user;
  
  //Validate user input
  if (user < 1 || user > 5){
    cerr << "Invalid selection, please try again";
    exit(1);
  }

  // Print Game
  cout << getEmoji(user) << " vs " << getEmoji(computer) << endl;

  result = matrixResults[user-1][computer-1];

  //Prints game result
  switch(result){
    case TIE:
      cout << "It's a TIE";
    break;
    case WIN:
      cout << "You WIN!";
    break;
    case LOSE:
      cout << "You Lose!";
    break;
  }

}
