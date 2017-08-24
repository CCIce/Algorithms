class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int n = 0;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0){
                nums[n++] = nums[i];
            }
        }
        
//         for(int i=n; i<nums.size(); i++){
//             nums.push_back(0);
//         }
       for(int i=n; i<nums.size(); i++){
           nums[i] = 0;
       }
        
        
        
        
//         int numZeros = 0;
//         int numsSize = nums.size();
        
//         for(int i=0; i<numsSize; i++){
//             numZeros += (nums[i] == 0);
//         }
        
//         vector<int> res;
//         for(int i=0 ; i<numsSize; i++){
//             if(nums[i]){
//                // res[j] = nums[i];
//                 res.push_back(nums[i]);
//             }
//         }
        
//         while(numZeros){
//             res.push_back(0);
//             numZeros --;
//         }
        
//         for(int i=0; i<numsSize; i++){
//             nums[i] = res[i];
//         }
    }
};