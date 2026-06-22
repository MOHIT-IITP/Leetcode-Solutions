#include<iostream>

using namespace std;

class Solution {
  public:
    int maxNumberOfBalloons(string text){
      int b=0, a=0, l=0, o=0, n=0;
      for(char c : text){
        if(c == 'b') b++;
        if(c == 'a') a++;
        if(c == 'l') l++;
        if(c == 'o') o++;
        if(c == 'n') n++;
      }
      return min({b, a, l/2, o/2, n});
    }
}

int main(){

  return 0 ;
}
