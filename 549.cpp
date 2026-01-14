class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int flag = 0;
        int var = 0;
        int i = 0;
        sort(nums.begin(), nums.end());
        
        for(i = 0; i < n; i++){
            var ^=  nums[i];    
        }
        return var;
    }
};
