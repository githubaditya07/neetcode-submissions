class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m1;
        for (int i=0;i<strs.size();i++){
            string s=strs[i];
            sort(s.begin(),s.end());
            if (m1.count(s)!=0){
                m1[s].push_back(strs[i]);
            }
            else{
                m1[s]=vector{strs[i]};
            }
        }
        vector<vector<string>> ans;
        for (auto pair:m1){
            ans.push_back(pair.second);
        }
        return ans;
    }
};
