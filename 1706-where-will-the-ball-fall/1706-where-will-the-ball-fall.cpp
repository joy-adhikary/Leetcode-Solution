class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
    
        int n=grid[0].size(), m=grid.size();
        vector<int>result;
        
       for(int i=0;i<n;++i){
          int idx1=i,idx2=0;
           for(int j=0;j<m;++j){
               idx2=idx1+grid[j][idx1];
               if(idx2<0 || idx2>=n || grid[j][idx1]!=grid[j][idx2]){
                   idx1=-1;
                   break;
               }
                  idx1=idx2;
           }
        
           result.push_back(idx1);
       }
        return result;
    }
};
 