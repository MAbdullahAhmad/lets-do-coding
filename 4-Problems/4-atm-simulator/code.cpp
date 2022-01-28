#include<iostream>
#include<iomanip>
using namespace std;

int main(){
  // Variables
  char char_command;
  int int_command;
  int amount;

  string user_name = "John Doe";
  int user_pin = 12345;
  int user_balance = 50000;
  int user_account_type = 1;
  /*
    1 -> Current
    2 -> Saving
  */

  // Initializaion Message
  cout << "System Initialized!" << endl << endl;

  // Main Loop
  while(true){
    // Welcome Message
    cout << "Welcome to ATM Simulator!" << endl;
    cout << "========================" << endl << endl;
    
    // Input Card
    cout << "Enter 'Y' to insert your Card: ";
    cin >> char_command;
    if(
      (char_command != 'Y')
      && (char_command != 'y')
    ) {
      cout << "You entered '" << char_command << "'!" << endl;
      continue;
    }
    cout << "Card Inserted Successfully!" << endl;

    // Verify Pin
    cout << "Enter Your Secret Pin: ";
    cin >> int_command;
    if(int_command != user_pin){
      cout << "You Entered Wrong Pin!" << endl;
      cout << "Take Your Card! " << endl;
      cout << endl << endl;
      cout << "Thank You for Banking with Us!" << endl << endl;
      continue;
    }

    cout << "Welcome '" << user_name << "' !" << endl;

    // Menu (Account Type)
    while(true){ // Validation Loop
      cout << endl << "Select Account Type: " << endl;
      cout << "====== ======= ====: " << endl << endl;
      cout << "\t1 for Saving" << endl;
      cout << "\t2 for Current" << endl << endl;
      cout << "Enter Your Choice: ";
      cin >> int_command;

      if(
        (int_command == 1)
        || (int_command == 2)
      ) break;
      cout << "Wrong Input!" << endl;
    }

    if(int_command != user_account_type){
      cout << "You Selected Wrong Account Type!" << endl;
      cout << "Take Your Card! " << endl;
      cout << endl << endl;
      cout << "Thank You for Banking with Us!" << endl << endl;
      continue;
    }

    // Menu (Action: W/D)
    while(true){ // Validation Loop
      cout << endl << "Please Select One: " << endl;
      cout << "====== ======= ====: " << endl << endl;
      cout << "\t1 for Withdraw" << endl;
      cout << "\t2 for Deposit" << endl;
      cout << "\t3 for Check Balance" << endl << endl;
      cout << "Enter Your Choice: ";
      cin >> int_command;

      if(
        (int_command >= 1)
        && (int_command <= 3)
      ) break;
      cout << "Wrong Input!" << endl;
    }

    // Withdraw
    if(int_command == 1){
      // Menu (Select Amount)
      while(true){ // Vlidation Loop
        cout << "Select Amount:" << endl;
        cout << "====== ======" << endl << endl;

        cout << setw(30) << setfill(' ') << setprecision(2) << fixed << left << "1 for 500" << right << "2 for 1000" << endl;
        cout << setw(30) << setfill(' ') << setprecision(2) << fixed << left << "3 for 5000" << right << "4 for 10000" << endl;
        cout << setw(30) << setfill(' ') << setprecision(2) << fixed << left << "5 for 20000" << right << "6 for Custom Amount" << endl << endl;

        cout << "Enter Your Choice: ";
        cin >> int_command;

        if(
          (int_command >= 1)
          && (int_command <= 6)
        ) break;
        
        cout << "Wrong Input!" << endl;
      }

      // Amount Selection Operation
      if(int_command == 1){
        amount = 500;
      } else if(int_command == 2){
        amount = 1000;
      } else if(int_command == 3){
        amount = 5000;
      } else if(int_command == 4){
        amount = 10000;
      } else if(int_command == 5){
        amount = 20000;
      } else { // Custom Amount
        while(true){ // Validation Loop
          cout << "Enter Amount: ";
          cin >> amount;

          if(amount > 0){
            if(amount%500 == 0){
              break;
            } else cout << "Least currency-unit allowed is 500!" << endl;
          } else cout << "Amount should be positive!" << endl;
        }
      }

      // Validate Amount
      if(amount > user_balance){
        cout << "You do not have sufficient balance in your account!" << endl;
        cout << "Take Your Card! " << endl << endl;
        cout << "Thank You for Banking with Us!" << endl << endl;
        continue;
      }

      // Withdrawal Operation
      user_balance -= amount;
      cout << "Withdraw Transaction Completed Successfully!" << endl;
      cout << "Take Your Card! " << endl;
      cout << "Collect Rs. " << amount << "! " << endl;

      cout << "Do you want Slip ? (Y/N)";
      cin >> char_command;
      if( // Print Slip
        (char_command == 'y')
        || (char_command == 'Y')
      ) {
        cout << endl;
        cout << "Withdraw Slip:" << endl;
        cout << "======== ====" << endl << endl;

        cout << "Balance Before Withdraw: " << user_balance + amount << endl;
        cout << "Amount Withdrawn: " << amount << endl;
        cout << "New Balance: " << user_balance << endl << endl;
      }
    }

    // Deposit
    else if(int_command == 2) {
      cout << "Kindly Put Amount in ATM Machine!" << endl;

      while(true){ // Validation Loop
        cout << "Enter Amount: ";
        cin >> amount;

        if(amount > 0){
          if(amount%500 == 0){
            break;
          } else {
            cout << "Least currency-unit allowed is 500!" << endl;
            cout << "Collect Your Extra Amount: " << (amount % 500) << "!" << endl;
            amount -= amount % 500;
            cout << "Depositing " << amount << " in your account" << endl;
            do{
              cout << "Do you want to deposit this changed amount? (Y/N)" << endl;
              cout << "Your Choice: ";
              cin >> char_command;
            } while(
              (char_command != 'y')
              && (char_command != 'Y')
              && (char_command != 'n')
              && (char_command != 'N')
            );
            if(
              (char_command == 'n')
              || (char_command == 'N')
            ) {
              cout << "Collect Your Amount: " << amount << endl;
              amount = 0;
              break;
            }
            break;
          }
        } else cout << "Amount should be positive!" << endl;
      }
      if(amount == 0){
        cout << "Take Your Card! " << endl;
        cout << "Thank You for Banking with Us!" << endl << endl;
        continue;
      }
      
      // Deposit Operation
      user_balance += amount;
      cout << "Deposit Transaction Completed Successfully!" << endl;
      cout << "Take Your Card! " << endl;
      cout << "Your New Balance is Rs. " << user_balance << ". " << endl;

      cout << "Do you want Slip ? (Y/N)";
      cin >> char_command;
      if( // Print Slip
        (char_command == 'y')
        || (char_command == 'Y')
      ) {
        cout << endl;
        cout << "Deposit Slip:" << endl;
        cout << "======= ====" << endl << endl;

        cout << "Balance Before Deposit: " << user_balance - amount << endl;
        cout << "Deposit Withdrawn: " << amount << endl;
        cout << "New Balance: " << user_balance << endl << endl;
      }
    }

    // Check Balance
    else {
      cout << "Your Acount Balance is: " << user_balance << endl;

      cout << "Do you want Slip ? (Y/N)";
      cin >> char_command;
      if( // Print Slip
        (char_command == 'y')
        || (char_command == 'Y')
      ) {
        cout << endl;
        cout << "Check Balance:" << endl;
        cout << "===== =======" << endl << endl;

        cout << "Your Account Balance is: " << user_balance << endl;
      }
      cout << "Take Your Card! " << endl;
    }

    // Thank You Message
    cout << "Thank You for Banking with Us!" << endl << endl;
  }

  return 0;
}