class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int posCount = 0, negCount=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) continue;
            else if(nums[i]<0){
                negCount++;
            } else if(nums[i]>0){
                posCount++;
            }
        }
        
        if(posCount>negCount) return posCount;
        else return negCount;
    }
};