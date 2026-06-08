class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            int prod=1;
            for(int j=0;j<nums.size();j++){
                if(j==i){
                    continue;
                }
                if(nums[j]==0 && j!=i){
                    prod=0;
                    break;
                }
                
                prod=prod*nums[j];

            }
            v.push_back(prod);

        }
        return v;

    }
};
