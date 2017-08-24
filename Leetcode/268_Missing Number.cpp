class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int maxnums = -1;
        if(nums.size() == 1 && nums[0] == 1) return 0;
        if(nums.size() == 1 && nums[0] > 1) return nums[0] + 1;
        
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<nums.size(); i++){
            if(i != nums[i])
                return i;
        }
        return nums[nums.size()-1]+1;
    }
};