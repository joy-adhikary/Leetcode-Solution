class Solution {
public:
    void moveZeroes(vector<int>& v) {
        
        int n=v.size();
        vector<int>v1;
        int k=0;
        for(int i=0;i<n;i++){
            if(v[i]!=0){
                v1.push_back(v[i]);
            }
        }
      
        for(int i=0;i<n;i++){
            if(v[i]==0){v1.push_back(0);}
        }
        for(auto x:v1){
            v[k]=x;
            k++;
        }
    }
};