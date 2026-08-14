class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.length();
        int left = 0;
        int maxi = INT_MIN;
        unordered_map<char, int> mp;
        for(int right = 0; right < n; right++){
            mp[s[right]]++;
            while(mp[s[right]] > 2){
                mp[s[left]]--;
                left++;
            }
            maxi = max(maxi, right - left + 1);
        }
        return maxi;
    }
};

int main() {
    return 0;
}
