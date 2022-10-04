#include <iostream>
#include <string.h>
#include "countHeads.h"

using namespace std;

int main(){
  bool repeat;
  long long coins, heads, ways;
  char select;
  
  do{
    cout << "How many coins would you like to flip?: ";
    cin >> coins;
    cout << "How many heads do you want?: ";
    cin >> heads;
    ways = choose(coins, heads);
    cout << "Flipping " << coins << " coins, we can get " << heads << " heads " << ways << " ways.\n";
    cout << "Flip again? (y/n): ";
    cin >> select;
    if(select == 'y')
      repeat = 1;
    else
      repeat = 0;
    
  }while(repeat);

  return 0;
}
