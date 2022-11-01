func findBall(grid [][]int) []int {
    
    n:=len(grid[0])
    m:=len(grid)
    
    var result [] int 
    
    for j:=0;j<n;j++{
        result= append(result ,dfs(0,j,n,m,grid))
    }
    return result   
}

func dfs(i int ,j int,n int ,m int ,grid [][]int )int{
        if i == m {
			return j   
		}
		if j == 0 && grid[i][j] == -1 {
			return -1
		}
		if j == n-1 && grid[i][j] == 1 {
			return -1
		}
		if grid[i][j] == 1 && grid[i][j+1] == -1 {
			return -1
		}
		if grid[i][j] == -1 && grid[i][j-1] == 1 {
			return -1
		}
		if grid[i][j] == 1 {
			return dfs(i+1, j+1,n,m,grid)
		}
		return dfs(i+1, j-1,n,m,grid)
    }
    
//c++ solution 


// class Solution {
// public:
//     vector<int> findBall(vector<vector<int>>& grid) {
    
//         int n=grid[0].size(), m=grid.size();
//         vector<int>result;
        
//        for(int i=0;i<n;++i){
//           int idx1=i,idx2=0;
//            for(int j=0;j<m;++j){
//                idx2=idx1+grid[j][idx1];
//                if(idx2<0 || idx2>=n || grid[j][idx1]!=grid[j][idx2]){
//                    idx1=-1;
//                    break;
//                }
//                   idx1=idx2;
//            }
        
//            result.push_back(idx1);
//        }
//         return result;
//     }
// };
 