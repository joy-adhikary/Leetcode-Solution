class Solution {
public:
    void moveZeroes(vector<int>& v) {
        
        int n=v.size();
        int k=0,flag=0;
        for(int i=0;i<n;i++){
            if(v[i]==0){
                k=i;
                flag=1;
                break;
            }
        }
        int i=k,j=k+1;
        while(i<n && j<n and flag){
            if(v[j]==0){
                j++;
            }
            else {
                swap(v[i],v[j]);
                i++;j++;
            }
        }
    }
};