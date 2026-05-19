class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre_arr(nums.size()) ;
        vector<int> post_arr(nums.size()) ;

        for(int i=0 ;i<nums.size();i++)
        {
            if(i == 0)
            {
                pre_arr[i]= nums[i];
                continue;
            }
            pre_arr[i] = pre_arr[i-1]*nums[i];
        } 
        for(int i=nums.size()-1 ;i>=0;i--)
        {
            if(i == nums.size()-1)
            {
                post_arr[i]= nums[i];
                continue;
            }
            post_arr[i] = post_arr[i+1]*nums[i];
        } 
        for(int i=0;i<nums.size();i++)
        {
            if(i == 0)
            {
                nums[i] = post_arr[i+1];
                continue;
            }
            if(i == nums.size()-1)
            {
                nums[i] = pre_arr[i-1];
                continue;
            }
            nums[i] = pre_arr[i-1]* post_arr[i+1];
        }
        return nums;
    }
};
