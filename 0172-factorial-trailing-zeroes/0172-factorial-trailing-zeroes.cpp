class Solution {
public:
    int trailingZeroes(int n) {
        
        long long ans=0;
        while(n>=5){
            n=n/5;
            ans+=n;
        }
        return ans;
    }
};