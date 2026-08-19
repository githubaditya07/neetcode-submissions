class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m1;
        for (int i=0;i<nums.size();i++){
            int to_find=target-nums[i];
            if (m1.count(to_find)){
                return vector{m1[to_find],i};
            }
            else{
                m1[nums[i]]=i;
            }
        }
    }
};
