class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> zeroes;
        int p=1;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if (nums[i]==0){
                zeroes.push_back(i);
                continue;
            }
            p*=nums[i];
        }

        if (zeroes.size()>=2){
            ans.assign(nums.size(),0);
            return ans;
        }

        else if(zeroes.size()==1){
            for(int i=0;i<nums.size();i++){
            if (nums[i]==0){
                ans.push_back(p);
            }
            else{
                ans.push_back(0);
            }
        }
        return ans;
        }

        else{
            for(int i=0;i<nums.size();i++){
                ans.push_back(p/nums[i]);
            }
        return ans;
        }}
    };
