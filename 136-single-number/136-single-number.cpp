class Solution {
public:
    int singleNumber(vector<int>& v) {
    
        int idx=0;
        
     if(v.size()==1)idx=0;
        else {
                sort(v.begin(),v.end());
            for(int i=1;i<v.size()-1;i++){
            if(v[i]!=v[i+1] and v[i]!=v[i-1]){
                idx=i;
                break;
            }
        }

        if(idx==0){
            if(v[0]!=v[1])idx=0;
            
            else idx=v.size()-1;
         }
      }
         
        return v[idx];
    }
};