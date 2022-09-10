class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& v) {
       
        int maxi=0,count=0;
        for(auto x:v){
            if(x==1){
                maxi=max(maxi,++count);
                
            }
            else count=0;
        }
        return maxi;
    }
};