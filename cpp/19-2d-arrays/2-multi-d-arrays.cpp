#include<iostream>
using namespace std;

int main(){
  // // Declare
  // int d1_array[4] = {
  //   1,
  //   2,
  //   3,
  //   4
  // };

  // for(int i=0; i<4; i++) {
  //   cout << d1_array[i] << endl;
  // }

  // cout << d1_array << endl;
  // cout << "E1Addr: " << &d1_array[0] << endl;
  // cout << "E2Addr: " << &d1_array[1] << endl;
  // cout << "E3Addr: " << &d1_array[3] << endl;
  // cout << "E4Addr: " << &d1_array[4] << endl;

  // Declare
  // int d2_array[4][2] = {
  //   {1, 3},
  //   {2, 2},
  //   {1, 3},
  //   {2, 4}
  // };


  // for(int i=0; i<4; i++) {
  //   cout << d2_array[i] << ": ";
  //   for(int j = 0 ; j<2; j++){
  //     cout << d2_array[i][j] << " ";
  //   }
  //   cout << endl;
  // }

  // int s_array[2];
  // s_array[0] = d2_array[2][0];
  // s_array[1] = d2_array[2][1];

  // cout << s_array << endl;
  // cout << s_array[0] << endl;
  // cout << s_array[1] << endl;


  // int s_array[2];
  // for(int i=0; i<4; i++) {
  //   s_array[0] = d2_array[i][0];
  //   s_array[1] = d2_array[i][1];

  //   for(int j=0; j<2; j++){
  //     cout << s_array[j] << ".";
  //   }
  //   cout << endl;
  // }

  // int nums[3][4][2] = {
  //   {
  //     {1, 2},
  //     {1, 2},
  //     {1, 2},
  //     {1, 2}
  //   },
  //   {
  //     {1, 2},
  //     {1, 2},
  //     {1, 2},
  //     {1, 2}
  //   },
  //   {
  //     {1, 2},
  //     {1, 2},
  //     {1, 2},
  //     {1, 2}
  //   }
  // };

  // for(int i=0 ; i<3; i++){
  //   for(int j=0; j<4; j++){
  //     for(int k=0; k<2; k++){
  //       cout << k << ", ";
  //     }
  //     cout << endl;
  //   }
  //   cout << endl << endl;
  // }


  int nums[3][4][2][2] = {
    {
      {
        {1, 2},
        {1, 2}
        },
      {
        {1, 2},
        {1, 2}
        },
      {
        {1, 2},
        {1, 2}
        },
      {
        {1, 2},
        {1, 2}
        }
    },
    {
      {
        {1, 2},
        {1, 2}
      },
      {
        {1, 2},
        {1, 2}
      },
      {
        {1, 2},
        {1, 2}
      },
      {
        {1, 2},
        {1, 2}
      }
    },
    {
      {
        {1, 2},
        {1, 2}
      },
      {
        {1, 2},
        {1, 2}
      },
      {
        {1, 2},
        {1, 2}
      },
      {
        {1, 2},
        {1, 2}
      }
    }
  };


  for(int i=0 ; i<3; i++){
    for(int j=0; j<4; j++){
      for(int k=0; k<2; k++){
        for(int l=0; l<2; l++){
          cout << k << ", ";
        }
        cout << endl;
      }
      cout << endl << endl;
    }
    cout << endl << endl << endl;
  }
}

/*
Logically

{1, 2, 3, 4, 5}
{"asdf", "ff", "new"}
{{1, 2, 3}, {1, 2, 3}, {1, 2, 3}}

*/