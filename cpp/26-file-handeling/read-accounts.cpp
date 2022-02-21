#include<fstream>
#include<iostream>
using namespace std;

int main(){
  string name;
  string acc;
  double balance;  

  // - Input from user
  cout << "Accounts in records are:\n\n";

  // File
  ifstream accounts("accounts.txt", ios::app);
  while(accounts){
    getline(accounts, name);
    getline(accounts, acc);
    accounts >> balance;
    if(!accounts) break;

    cout << "\tname: " << name << endl;
    cout << "\tacc: " << acc << endl;
    cout << "\tbalance: " << balance << endl;
    cout << endl;

    getline(accounts, name);
    getline(accounts, name);
  }

  return 0;
}