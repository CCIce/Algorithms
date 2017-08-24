class Solution {
public:
    // """
    // time out bubble sort
    // """

    
    // void bubbleSort(vector<int>& nums){
    //     for(int i=0; i<nums.size()-1; i++){
    //         for(int j=0; j<nums.size()-1-i; j++){
    //             if(nums[j] < nums[j+1])
    //                 swap(nums[j], nums[j+1]);
    //         }
    //     }    
    // }
    
    
    int maximumProduct(vector<int>& nums) {
        // bubbleSort(nums);
        // int a = nums[0]*nums[1]*nums[2];
        // int b = nums[0]*nums[nums.size()-1]*nums[nums.size()-2];
        // for(auto n : nums)
            // cout << n << " ";
        // cout << nums << endl;
        // cout << " " << endl;
        // cout << a << " " << b;
        // return  max(a,b);
        //(-,-,+)	(+,+,+)
        sort(nums.begin(), nums.end());
        int a = nums[0]*nums[1]*nums[nums.size()-1];
        int b = nums[nums.size()-3]*nums[nums.size()-1]*nums[nums.size()-2];
        return max(a,b);
        
    }
};