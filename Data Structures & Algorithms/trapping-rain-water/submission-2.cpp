#include <iostream>
#include <vector>
#include <print>

class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> l_max;
        vector<int> r_max;
        int left_max=0;
        int num=height.size();
        for(int i=0;i<num;i++){
            left_max=max(left_max,height[i]);
            l_max.push_back(left_max);
        }
        int right_max=0;
        for(int i=num-1;i!=-1;i--){
            right_max=max(right_max,height[i]);
            r_max.insert(r_max.begin(),right_max);
        }

        int water=0;
        for (int i=0;i<num;i++){
            water+=min(l_max[i],r_max[i])-height[i];
        }
        return water;


        
        
}};
