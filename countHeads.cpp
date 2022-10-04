#include "countHeads.h"
#include <iostream>

using namespace std;

unsigned long long fact(unsigned long long num, unsigned long long denom){
  unsigned long long result = 1;
  while(num != denom){
    result *=  num;
    --num;
  }

  return result;
}

unsigned long long choose(unsigned long long n, unsigned long long r){
  unsigned long long result, no =1;
  result = fact(n,r)/fact((n - r), no);
   
  return result;
}

