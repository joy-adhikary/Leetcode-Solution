class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& v) {
       
        int maxi=0,count=0;
      for(int i=0;i<v.size();i++){
          if(v[i]==1)count++;
          
          else count=0;
          
          maxi=max(maxi,count);
          
      }
        return maxi;
    }
};