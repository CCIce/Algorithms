class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        for(int j=0; j<k; j++)
        {
            sum += nums[j];
        }
        double _max = sum/k;

        for(int i=k; i<nums.size(); i++)
        {
            sum += nums[i];
            sum -= nums[i-k];
            // std::cout << sum << std::endl;
            _max = max(sum/k, _max);
        }
        // cout << k << " " << sum << endl;
        return _max;
        
        
        //Time Out
        // double res;
        // double _max=-100000;
        // for(int i=0; i<nums.size()-k+1; i++)
        // {
        //     double res = 0;
        //     for(int j=0; j<k; j++)
        //     {
        //         res += nums[i+j];
        //     }
        //     res = res / k;
        //     _max = max(res, _max);
        // }
        // return _max;
       
    }
};