// #include<conio.h>
#include<iostream>
#include <stdio.h>
using namespace std;

int main(){
  // Variables
  char command;
  int racks[25][10], row, column, user_column, user_row;

  // Init with 0s
  for(row=0; row<25; row++)
    for(column=0; column<10; column++)
      racks[row][column] = 0;

  // Header
  cout << "Rack System\n===========\n\n";

  while(true){
    // Print Status
    cout << "Status of Racks: \n";
    for(row=0; row<25; row++){
      for(column=0; column<10; column++)
      if(racks[row][column] == 1)
        cout << "| ";
      else cout << ". ";
      cout << endl;
    } cout << endl;

    // Input Column Number & Command
    cout << "Menu: \n'A' -> Activate\n'D' -> De-Activate\n'E' -> Exit\nYour Choise: ";
    cin >> command; cout << endl;

    if(command == 'E')
    break;

    cout << "Enter Rack Row: "; cin >> user_row;
    cout << "Enter Rack Column: "; cin >> user_column;

    // Activate / De-Activate Row Member
    if(
      (
        (command == 'D')
        || (command == 'A')
      )
      && (
        (user_row > 25)
        || (user_row <= 0)
        || (user_column > 10)
        || (user_column <= 0)
      )
    ) {
      cout << "Invalid Row / Column!" << endl;
      continue;
    }
    if(command == 'A')
      racks[user_row-1][user_column-1] = 1;
    else if(command == 'D') 
      racks[user_row-1][user_column-1] = 0;
    else cout << "Invalid Input!" << endl;
    cout << endl;
  }
  
  return 0;
}