C++ file for identifying the duplicates in array.

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int i = 0;
       int j = 0;
       sort(nums.begin(), nums.end());

       for(i = 0;i<nums.size(); i++){
           for(j=i+1 ; j<nums.size(); j++){
               if(nums[i] == nums[j]){
                   printf("Duplicate Found\n");\
                    return true;
               }
           }
       }
        return false;
    }
};
