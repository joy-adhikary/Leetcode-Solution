class Solution {
public:
    void merge(vector<int>& v1, int m, vector<int>& v2, int n) {
        
        int i=m-1,j=n-1,k=(m+n)-1;
        
        while(i>=0 and j>=0){
            if(v1[i]<v2[j]){
                v1[k--]=v2[j--];
            }
            else {
                v1[k--]=v1[i--];
            }
        }
        
        while(j>=0){// if j remain. for this type of test cases 2 3 4 and 1 2 3
            v1[k--]=v2[j--];
        } 
    }
};