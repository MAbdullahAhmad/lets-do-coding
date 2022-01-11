#include<iostream>
#include<string>
using namespace std;

int main(){
  // Variables
  string question;

  // Header
  cout << "CPP Bot" << endl;
  cout << "=======" << endl << endl;

  cout << "Enter your Questions in following\nI'll answer if I understood.\nEnter Quit to Exit";

  // Main Loop
  while(true){
    // Input Question
    cout << "Enter Question: ";
    cin >> question;

    // Match Questions for Specific Answers
    if(
      (question == "who are you ?")
      || (question == "who are you?")
      || (question == "who are you")
      || (question == "what is your name")
      || (question == "what is your name ?")
      || (question == "what is your name?")
    ) cout << "I am C++ Bot. Nice to meet you";
    else if(
      (question == "hi")
      || (question == "hello")
      || (question == "hey")
    ) cout << "Hi there! Nice to See you.";
    else if(
      (question == "aslam-o-alikm")
      || (question == "aslam-o-alikm!")
      || (question == "aslam-o-alikm !")
    ) cout << "Walikm Salam!";
    else if(
      (question == "quit")
      || (question == "quit!")
      || (question == "quit!!")
      || (question == "quit.")
    ) break; // Break On Quit // Condition to break (infinite) loop.
    else cout << "So Sorry! I could not understood that." << flush;

    cout << endl;
  }
  return 0;
}