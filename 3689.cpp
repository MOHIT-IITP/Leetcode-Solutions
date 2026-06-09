
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
  public: 
    ll maxTotalValue(vector<int> & nums, int k ){
      ll ans = 0;
      ll maxi = *max_element(nums.begin(), nums.end());
      ll mini = *min_element(nums.begin(), nums.end());

      ans = (maxi - mini) * k;
      return ans;
    }
}

int main() {
    return 0;
}
