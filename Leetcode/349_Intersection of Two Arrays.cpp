class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set;
        for(int i=0; i<nums1.size(); i++)
        {
            if(!set.count(nums1[i]))    set.insert(nums1[i]);
        }
        vector<int> res;
        for(int i=0; i<nums2.size(); i++)
        {
            if(set.count(nums2[i])) 
            {
                res.push_back(nums2[i]);
                set.erase(nums2[i]);
            }
        }
        return res;
    }
};