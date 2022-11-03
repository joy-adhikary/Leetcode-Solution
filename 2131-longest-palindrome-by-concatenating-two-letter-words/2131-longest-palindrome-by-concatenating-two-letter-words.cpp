class Solution {
public:
    int longestPalindrome(vector<string>&words) {
        
        int ans=0;
        
        int hash [26][26]={}; // set all 0 initially 
        
        for(auto x:words){
         
            int first=x[0]-'a';
            int second=x[1]-'a';
            
            if(hash[second][first]){
                
                ans+=4;                 // // decrement the count as we found reverse word
                hash[second][first]--;
            }
            else {
                
                hash[first][second]++;   //push the main string and increment the valoue as we found not found any reverse word
            }
            
        }
        
        for(int i=0;i<26;i++){
            if(hash[i][i]){
                ans+=2;
                break;
            }
        }
        return ans;
    }

};

// 1st a akta 2d array nibo then akta string er 2 ta latter er int value ber kore oi indx ta set kore dibo 1 diye .. then just check dibo je reverse ta ashe ki nah 