#include<iostream>
using namespace std;

int main(){
  int marks[5][5];
  string subjects[5] = {"Math", "Phy", "Bio", "Che", "Eng"};
  int student, subject, sum;
  cout << "Average marks of five students with five subjects" << endl << endl;
  
  // Input
  for(student=0; student<5; student ++){
    cout << "Enter Marks of student " << student + 1 << endl;
    for(subject=0; subject<5; subject++){
      cout << subjects[subject] << ": ";
      cin >> marks[student][subject];
    }
  }
  cout << endl << endl;

  // Find & Print Averages
  cout << "Average Marks:" << endl;
  for(student=0; student<5; student++){
    sum=0;
    for(subject=0; subject<5; subject++){
      sum+=marks[student][subject];
    }
    cout << "Student-" << student + 1 << ": " << sum/5 << endl;
  }
  cout << endl;

  cout << "Have a Nice Day!" << endl;
  return 0;
}