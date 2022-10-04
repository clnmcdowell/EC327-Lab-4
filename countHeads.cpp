#include "countHeads.h"
#include <iostream>

using namespace std;

long long fact(long long num){
  long long result = 1;
  while(num != 0){
    result *=  num;
    --num;
  }

  return result;
}

long long choose(long long n, long long r){
  long long result;
  result = fact(n)/(fact(r) * fact((n - r)));
   
  return result;
}

