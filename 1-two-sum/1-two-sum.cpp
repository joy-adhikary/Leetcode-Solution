class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>index;
        vector<int>copy(nums);
        int x,y;
        sort(nums.begin(), nums.end());
        for(int i=0,j=nums.size()-1;i<nums.size(),i<j;){
                if(nums[i]+nums[j]>target){
                j--;
                }
            else if(nums[i]+nums[j]==target){
                   x=nums[i];
                   y= nums[j];
                  break;
                }
            else i++;
            }int flag=0;
        for(int i=0;i<copy.size();i++){
            if(x==copy[i] and flag==0){
                index.push_back(i);
                flag=1;
                continue;
            }
            if(y==copy[i]){
                index.push_back(i);
            }
        }
        return index;
    }
};