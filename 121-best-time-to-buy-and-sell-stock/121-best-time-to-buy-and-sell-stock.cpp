class Solution {
public:
    int maxProfit(vector<int>& v) {
      
        int max_value=INT_MAX;
        int max_profit=0,current =0;
        
        for(int i=0;i<v.size();i++){
            
            if(v[i]<max_value){
                max_value=v[i]; // finding the minimum one 
            }
            
            current=v[i]-max_value; // find the diffrence between minimum value and rest of the array 
            max_profit=max(current,max_profit);
        }
        
        return max_profit;
    }
};