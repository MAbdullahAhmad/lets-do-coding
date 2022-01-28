#include <iostream>
#include <string>

using namespace std;


int main(){
  int count=0, boxes=0, temp=1;
  long revnue;
  string name;

  cout << "Class Volunteer Project" << endl << endl;
  cout << "Enter 'Exit' in name to Exit." << endl << endl;

  while(name != "Exit"){
    cout << "Enter Name: ";
    cin >> name;
    if(name != "Exit"){
      cout << "Enter Boxes Sold: ";
      cin >> temp;
      boxes += temp;
      cout << endl;
      count++;
    }
  }

  revnue = boxes * 20;
  cout << count << " Volunteers Sold " << boxes << " Boxes and Generated " << revnue << " Revnue" << endl;

  return 0;
}

`