#include <cmath>
#include <cstring>
#include <iostream>
using namespace std;
int main() {
  char square[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
  cout << "Welcome to Tic-Tac-Toe where X is your target number and O is the opponent's target \n";
  cout << "     |     |     " << endl;
  cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;
  cout << "_____|_____|_____" << endl;
  cout << "     |     |     " << endl;
  cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
  cout << "_____|_____|_____" << endl;
  cout << "     |     |     " << endl;
  cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
  cout << "     |     |     " << endl << endl;
  int targets_hit = 0;
  int player = 1;
  while (true) {
    if (targets_hit == 9) {
      cout << "Game Over. It's a draw \n";
      break;
    } 
    else {
      if (player % 2 != 0) {
        if(square[1] == 'X' && square[2] == 'X' && square[3] == 'X'){
          cout << "Player 1 wins";
          break;
        }
        else if(square[4] == 'X' && square[5] == 'X' && square[6] == 'X'){
          cout << "Player 1 wins";
          break;
        }
        else if(square[7] == 'X' && square[8] == 'X' && square[9] == 'X'){
          cout << "Player 1 wins";
          break;
        }
        else if(square[1] == 'X' && square[4] == 'X' && square[7] == 'X'){
          cout << "Player 1 wins";
          break;
        }
        else if(square[2] == 'X' && square[5] == 'X' && square[8] == 'X'){
          cout << "Player 1 wins";
          break;
        }
        else if(square[3] == 'X' && square[6] == 'X' && square[9] == 'X'){
          cout << "Player 1 wins";
          break;
        }
        else if(square[1] == 'X' && square[5] == 'X' && square[9] == 'X'){
          cout << "Player 1 wins";
          break;
        }
        else if(square[3] == 'X' && square[5] == 'X' && square[7] == 'X'){
          cout << "Player 1 wins";
          break;
        }
        else if(square[1] == 'O' && square[2] == 'O' && square[3] == 'O'){
          cout << "Player 2 wins";
          break;
        }
        else if(square[4] == 'O' && square[5] == 'O' && square[6] == 'O'){
          cout << "Player 2 wins";
          break;
        }
        else if(square[7] == 'O' && square[8] == 'O' && square[9] == 'O'){
          cout << "Player 2 wins";
          break;
        }
        else if(square[1] == 'O' && square[4] == 'O' && square[7] == 'O'){
          cout << "Player 2 wins";
          break;
        }
        else if(square[2] == 'X' && square[5] == 'X' && square[8] == 'X'){
          cout << "Player 2 wins";
          break;
        }
        else if(square[3] == 'O' && square[6] == 'O' && square[9] == 'O'){
          cout << "Player 2 wins";
          break;
        }
        else if(square[1] == 'O' && square[5] == 'O' && square[9] == 'O'){
          cout << "Player 2 wins";
          break;
        }
        else if(square[3] == 'O' && square[5] == 'O' && square[7] == 'O'){
          cout << "Player 2 wins";
          break;
        }
        else{
          int targetnumber;
          cout << "What number do you want to target? ";
          cin >> targetnumber;
          if (targetnumber > 9 || targetnumber < 1) {
            cout << "It is out of bounds so you lose your turn." << "\n";
            player += 1;
          } 
          else {
            if (square[targetnumber] != 'X' && square[targetnumber] != 'O') {
              square[targetnumber] = 'X';
              cout << "     |     |     " << endl;
              cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;
              cout << "_____|_____|_____" << endl;
              cout << "     |     |     " << endl;
              cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
              cout << "_____|_____|_____" << endl;
              cout << "     |     |     " << endl;
              cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
              cout << "     |     |     " << endl << endl;
              player += 1;
            } 
            else {
              cout << "That target has already been hit so you lose your turn \n" ;
              player += 1;
            }
          }
        }
      } 
      else {
        if(square[1] == 'X' && square[2] == 'X' && square[3] == 'X'){
          cout << "Player 1 wins";
          break;
        }
        else if(square[4] == 'X' && square[5] == 'X' && square[6] == 'X'){
          cout << "Player 1 wins";
          break;
        }
        else if(square[7] == 'X' && square[8] == 'X' && square[9] == 'X'){
          cout << "Player 1 wins";
          break;
        }
        else if(square[1] == 'X' && square[4] == 'X' && square[7] == 'X'){
          cout << "Player 1 wins";
          break;
        }
        else if(square[2] == 'X' && square[5] == 'X' && square[8] == 'X'){
          cout << "Player 1 wins";
          break;
        }
        else if(square[3] == 'X' && square[6] == 'X' && square[9] == 'X'){
          cout << "Player 1 wins";
          break;
        }
        else if(square[1] == 'X' && square[5] == 'X' && square[9] == 'X'){
          cout << "Player 1 wins";
          break;
        }
        else if(square[3] == 'X' && square[5] == 'X' && square[7] == 'X'){
          cout << "Player 1 wins";
          break;
        }
        else if(square[1] == 'O' && square[2] == 'O' && square[3] == 'O'){
          cout << "Player 2 wins";
          break;
        }
        else if(square[4] == 'O' && square[5] == 'O' && square[6] == 'O'){
          cout << "Player 2 wins";
          break;
        }
        else if(square[7] == 'O' && square[8] == 'O' && square[9] == 'O'){
          cout << "Player 2 wins";
          break;
        }
        else if(square[1] == 'O' && square[4] == 'O' && square[7] == 'O'){
          cout << "Player 2 wins";
          break;
        }
        else if(square[2] == 'X' && square[5] == 'X' && square[8] == 'X'){
          cout << "Player 2 wins";
          break;
        }
        else if(square[3] == 'O' && square[6] == 'O' && square[9] == 'O'){
          cout << "Player 2 wins";
          break;
        }
        else if(square[1] == 'O' && square[5] == 'O' && square[9] == 'O'){
          cout << "Player 2 wins";
          break;
        }
        else if(square[3] == 'O' && square[5] == 'O' && square[7] == 'O'){
          cout << "Player 2 wins";
          break;
        }
        else{
          int targetnumber1;
          cout << "What number do you want to target? ";
          cin >> targetnumber1;
          if (targetnumber1 > 9 || targetnumber1 < 1) {
            cout << "It is out of bounds so you lose your turn." << "\n";
            player += 1;
          } 
          else {
            if (square[targetnumber1] != 'X' && square[targetnumber1] != 'O') {
              square[targetnumber1] = 'O';
              cout << "     |     |     " << endl;
              cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;
              cout << "_____|_____|_____" << endl;
              cout << "     |     |     " << endl;
              cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
              cout << "_____|_____|_____" << endl;
              cout << "     |     |     " << endl;
              cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
              cout << "     |     |     " << endl << endl;
              player += 1;
            } 
            else {
              cout << "That target has already been hit so you lose your turn"<< "\n";
              player += 1;
            }
          }
        }
      }
    }
  }
}