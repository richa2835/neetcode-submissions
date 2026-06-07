class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int el=nums[0];
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==el){
                count++;
            }
            else{
                count--;
            }
            if(count<0){
                count=0;
                el=nums[i+1];
            }
        }
        return el;
        
    }
};