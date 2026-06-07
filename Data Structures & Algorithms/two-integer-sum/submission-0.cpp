class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            int dif=target-nums[i];
            if(m.find(dif)!=m.end()){
                return{m[dif],i};

            }
            m[nums[i]]=i;
        }
        return {};
        
    }
};
