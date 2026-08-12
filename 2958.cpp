
class Solution {
    public:
        int maxSubarrayLength(vector<int>  &nums, int k){
            int n = nums.size();
            int left = 0;
            int maxi = INT_MIN;
            unordered_map<int, int> mp;
            for(int right = 0; right < n; right++){
                mp[nums[right]]++;
                while(mp[nums[right]] > k ) {
                    mp[nums[left]]--;
                    left++;
                }
                maxi = max(maxi , right - left + 1);
            }
            return maxi;
        } 
}
