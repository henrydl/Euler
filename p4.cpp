#include <iostream>
#include <assert.h>
#include <math.h>
#include <string.h>
#include <stdlib>
using namespace std;
int palla();
int main(){
  cout << palla() << endl;
}

int palla(){
  char* intStr;
  string palCheck;
  int strLen;
  int paltemp;
  int max = 0;
  for(int m = 999; m > 0; m--){
    for(int n = 999; n > 0; n--){
      paltemp = m*n;
      intStr = itoa(paltemp);
      palCheck = string(intStr);
      //palCheck = to_string(paltemp);
      strLen = palCheck.length();
      if(strLen < 6){
	continue;
      }
      if(palCheck[0] == palCheck[5] && palCheck[1] == palCheck[4] && palCheck[2] == palCheck[3] && paltemp > max){
	max = paltemp;
      }
    }
  }
  return max;
}
