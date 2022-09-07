class Solution {
public:
    void rotate(vector<int>& v, int k) {
 
       int n=v.size();
        k=k%n;
        
        // reverse first n-k index for example 1 2 3 4  k=2 , then 2 1 3 4
        //  Index i (0 <= i < n - k) becomes n - k - i.
        reverse(v.begin(),v.begin()+n-k);
        
        // reverse the rest part ,  2 1 3 4 => 2 1 4 3 
        //Index i (n-k<= i < n) becomes n - i.
        reverse(v.begin()+n-k,v.end());
        
        // reverse the full array , 2 1 4 3 => 3 4 1 2
        //index i (0 <= i < n) 
        reverse(v.begin(),v.end());
            
     }
};
