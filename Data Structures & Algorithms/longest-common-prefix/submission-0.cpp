class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minl=INT_MAX;
        string mine;
        
        for(auto x:strs){
            if(x.size()<minl){
                minl=x.size();
                mine=x;
            }
        }
        int mcount=INT_MAX;
        for(int i=0;i<strs.size();i++){
            int count=0;
            for(int j=0;j<minl;j++){
                
                if(strs[i][j]==mine[j]){
                    count++;
                }
                else{
                    if(count<mcount){
                        mcount=count;

                    }
                }
            }
        }
        return mine.substr(0,mcount);
        
        
    }
};
