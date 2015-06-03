#include <iostream>
#include <math.h>
#include <assert.h>
using namespace std;

int primefac(long fac){
  int x = fac;
  int temp;
  if(x%2 == 0){
    x--;
  }
  for(int y = 3; y<=x; y+=2){
    if(fac%y == 0){
      temp = y;
      fac = fac/y;
    }
  }
  return temp;
}

int main(){
  // assert(primefac(13195) == 29);
  cout << primefac(13195) << endl;
  cout << primefac(99) << endl;
  cout << primefac(600851475143) << endl;
}

