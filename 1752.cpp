
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution{
  public: 
    bool check(vector<int> & nums){
      int n = nums.size();
      int rotation = 0;
      for(int i = 0; i < n-1; i++){
        if(nums[i] > nums[( i+1 ) % n]){
          rotation++;
        }
      }
      return rotation <= 1;
    }
}

int main() {
    return 0;
}
