class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>v(nums);
        for(auto x:nums){
            v.push_back(x);
        }
        for(auto x:v){
            cout<<x<<" ";
        }
        
        return v;
        
        
    }
};