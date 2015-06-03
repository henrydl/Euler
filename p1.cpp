#include <iostream>
#include <assert.h>
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
  cout << count(1000) << endl;
  assert(count(10) == 23);
  return 1;
}

