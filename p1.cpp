#include <iostream>
#include <assert.h>
#include <math.h>
using namespace std;

int count(int top){
  int total = 0;
  for(int x = 0; x < top; x++){
    if(x%3 == 0 || x%5 == 0){
      total += x;
    }
  }
  return total;
}
      
int main(){
  assert(count(10) == 23);
  assert(count(1000) == 233168);
  cout << count(1000) << endl;
  return 0;
}

