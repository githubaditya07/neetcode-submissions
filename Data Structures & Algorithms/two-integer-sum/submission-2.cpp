class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i=0;i<nums.size()-1;i++){
            int to_find=target-nums[i];
            int index=i;
            for (int j=i+1;j<nums.size();j++){
                if (nums[j]==to_find){
                    return{i,j};
                }
            }            
        }
    }
};
