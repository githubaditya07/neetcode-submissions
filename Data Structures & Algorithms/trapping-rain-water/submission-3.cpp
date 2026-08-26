class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0;
        vector<int> left_max;
        vector<int> right_max;
        int l_max=0;
        int n=height.size();
        for(int i=0;i<n;i++){
            if (height[i]>l_max){
                l_max=height[i];
            }
            left_max.push_back(l_max);
            cout<<l_max;
        }
        int r_max=0;
        for(int i=n-1;i!=-1;i--){
            if (height[i]>r_max){
                r_max=height[i];
            }
            right_max.insert(right_max.begin(),r_max);
            cout<<r_max;
        }

        for(int i=0;i<n;i++){
            ans+=min(left_max[i],right_max[i])-height[i];
        }
        return ans;
    }
};
