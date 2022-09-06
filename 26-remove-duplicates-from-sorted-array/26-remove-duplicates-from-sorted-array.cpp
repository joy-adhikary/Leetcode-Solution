class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        set<int>joy;
        
        for(int i=0;i<nums.size();i++){
            joy.insert(nums[i]);
        }
        
        int j=0;
        
        for(int x:joy){
            nums[j++]=x;
        }
        
        return joy.size(); 
    }
};