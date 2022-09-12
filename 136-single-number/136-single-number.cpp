class Solution {
public:
    int singleNumber(vector<int>& v) {
    
        int ans=0;
        
        for(auto x:v){
            
            ans=ans^x;
        }
        
        return ans;
    }
};