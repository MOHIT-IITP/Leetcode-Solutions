#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int max_price = *max_element(costs.begin() , costs.end());

        vector<int> vec(max_price + 1 , 0);
        for(auto it : costs){
            vec[it]++;
        }
        int ans = 0;    

        for(int price = 1;price <= max_price ; price++){
            if(vec[price] == 0) continue;

            int can_buy = min(vec[price] , coins/price);
            ans += can_buy;     
            coins -= can_buy * price;

            if(coins < price){
                break;  
            }
        }
        return ans;
    }
};

int main(){
  return 0;
}
