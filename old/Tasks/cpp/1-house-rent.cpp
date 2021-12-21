#include<iostream>
using namespace std;

int main(){
  int current_rent;
  int number_of_years;
  float final_rent;

  cout << "Enter Current Rent Of House: ";
  cin >> current_rent;
  final_rent = current_rent;
  // cout << current_rent << endl; // working

  cout << "Enter Numer of Years: ";
  cin >> number_of_years;

  for (int counter=1; counter <= number_of_years; counter++){
    final_rent += final_rent * 0.1;
  }

  cout << "Final Rent is " << final_rent << endl;

  return 0;
}