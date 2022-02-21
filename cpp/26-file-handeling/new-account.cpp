#include<fstream>
#include<iostream>
using namespace std;

int main(){
  string name;
  string acc;
  double balance;  

  // - Input from user
  cout << "Enter Details to create a new Accunt:\n\n";

  cout << "\tName: ";
  getline(cin >> ws, name);
  cout << "\tAccount Number: ";
  getline(cin >> ws, acc);
  cout << "\tInitial Balance: ";
  cin >> balance;
  cout << endl;

  // - Print Details to User

  cout << "Saving new account with details: \n\n";
  cout << "\tname: " << name << endl;
  cout << "\tacc: " << acc << endl;
  cout << "\tbalance: " << balance << endl;
  cout << endl;

  // File
  ofstream accounts("accounts.txt", ios::app);
  if(accounts){
    accounts << name << "\n";
    accounts << acc << "\n";
    accounts << balance << "\n\n";

    cout << "Saved to File\n";
  } else {
    cout << "ERROR: Unable to open file accounts.txt!\n";
  }
  cout << endl;

  return 0;
}