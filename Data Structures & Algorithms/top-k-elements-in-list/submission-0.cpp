class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m1;
        vector<int> ans;
        vector<int> c;
        for (int i=0;i<nums.size();i++){
            m1[nums[i]]++;
        }

        for (auto pair:m1){
            c.push_back(pair.second);
        }
        vector <int> c2=c;
        sort(c2.begin(),c2.end());
        int ans_count=c2[c2.size() - k];

        for (auto pair:m1){
            if (pair.second>=ans_count){
                ans.push_back(pair.first);
            }
        }
        return ans;
    }
};
