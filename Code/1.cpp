class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>c;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    c.push_back(i);
                    c.push_back(j);
                }
            }
        }
        return c;
    }
};
