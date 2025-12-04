// done this question with binary search
class Solution {
public:
    int FirstSearch( vector<int> &nums , int target ){
        int start = 0 , end =  nums.size()-1;
        int ans = -1; 
        while(start <= end ){
            int mid = start + (end - start) / 2;
            if(nums[mid] == target){
                ans = mid;
                end = mid - 1; 
            }
            if(nums[mid] > target){
                end = mid-1;
            }
            
            if(nums[mid] < target){
                start = mid+1;
            }
        }
        return ans;
    }

    int LastSearch(vector<int> &nums, int target){
        int start = 0 , end =  nums.size()-1;
        int ans = -1; 
        while(start <= end ){
            int mid = start + (end - start) / 2;
            if(nums[mid] == target){
                ans = mid;
                start = mid + 1; 
            }
            if(nums[mid] > target){
                end = mid-1;
            }
            
            if(nums[mid] < target){
                start = mid+1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> vec;
        vec.push_back(FirstSearch(nums,target));
        vec.push_back(LastSearch(nums, target));
        return vec;
    }
};
