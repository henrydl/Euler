#include <iostream>
#include <assert.h>
using namespace std;

int fibadd(int max){
  int x1 = 1;
  int x2 = 2;
  int x3 = 0;
  int tot = 2;
  while(x3 < max){
    x3 = x1 + x2;
    x1 = x2;
    x2 = x3;
    if(x2%2 == 0){
      tot += x2;
    }
  }
  return tot;
}


int main(){
  assert(fibadd(89));
  cout << fibadd(89) << endl;
  cout << fibadd(4000000) << endl;
}
