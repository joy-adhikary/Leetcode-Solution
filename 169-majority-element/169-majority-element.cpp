class Solution {
public:
    int majorityElement(vector<int>& ve)
    {
        
       // way 1    time - O(n) space - O(n/2) ==> O( n )
        
//         int n=v.size();
//         unordered_map<int,int>m;
        
//         for(auto x:v)
//         {
//               m[x]++;
            
//             if(m[x]>n/2)
//             {
//                 return x;
//             }
//         }
//   
    
      // way 2    time - O(nlogn) space - O(1) 
        
        // The majority element is the element that appears more than ⌊n / 2⌋ times.            so if i sort the whole array then the majority element will be in the mid            point as it appears more then n/2+1 
        
//         int n=v.size();
//         sort(v.begin(),v.end());
//         return v[n/2];
        
        
        //way 3 time - O(n) space - O(1) 
        
        int v=0,c=0;
        for(auto x:ve)
        {
            if(v==0)
            {
                c=x;
            }
            
            if(c==x)v++;
            else v--;
            
        }
        return c;
        
        
    }
};