#include <iostream>
#include <vector>
#include <print>

class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> ans;
        vector<int> ans1;
        int left_max=0;
        
        for(int i=0;i<height.size();i++){
            left_max=max(left_max,height[i]);
            ans.push_back(left_max);
        }
        int right_max=0;
        int n=height.size()-1;
        for(int i=n;i!=-1;i--){
            right_max=max(right_max,height[i]);
            ans1.insert(ans1.begin(),right_max);
        }

        int water=0;
        int f=height.size();
        int left_maxx=0;
        int right_maxx=0;
        for (int i=0;i<f;i++){
            left_maxx=ans[i];
            right_maxx=ans1[i];
            water+=min(right_maxx,left_maxx)-height[i];
        }
        return water;


        
        
}};
