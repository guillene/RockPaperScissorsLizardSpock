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

 


