class Solution {
public:
    int longestPalindrome(vector<string>&words) {

// using 2d vector 
        
// 1st a akta 2d array nibo then akta string er 2 ta latter er int value ber kore oi indx ta set kore dibo 1 diye .. then just check dibo je reverse ta ashe ki nah         
//         int ans=0;
        
//         int hash [26][26]={}; // set all 0 initially 
        
//         for(auto x:words){
         
//             int first=x[0]-'a';
//             int second=x[1]-'a';
            
//             if(hash[second][first]){
                
//                 ans+=4;                 // // decrement the count as we found reverse word
//                 hash[second][first]--;
//             }
//             else {
                
//                 hash[first][second]++;   //push the main string and increment the valoue as we found not found any reverse word
//             }
            
//         }
        
//         for(int i=0;i<26;i++){
//             if(hash[i][i]){
//                 ans+=2;
//                 break;
//             }
//         }
//       return ans;
    
    
    // using map
        
        

       map<string,int>mp;
        long long ans=0;
        
        for(auto x:words){
            string y=x;
            reverse(y.begin(),y.end());
            
            if(mp.find(y)!=mp.end()){
                ans+=4;
                mp[y]--;
                
                if(mp[y]==0){
                    mp.erase(y);
                }
                
            }else{                   // push if not found the reverse string 
                mp[x]++;
            }
        }
        // aa bb cc kind of string 
        for(auto x:mp){
            if(x.first[0]==x.first[1]){
                ans+=2;
                break;
            }
        }
        
    return ans;
    
    }

};

