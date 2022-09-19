class Solution {
public:
    int majorityElement(vector<int>& v)
    {
        
       // way 1        time - O(n) space - O(n/2) ==> O( n )
        
        int n=v.size();
        
        unordered_map<int,int>m;
        
        for(auto x:v)
        {
              m[x]++;
            
            if(m[x]>n/2)
            {
                return x;
            }
        }
        return -1;
    
        
    }
};