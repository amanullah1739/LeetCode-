class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
    vector<int> leftSum;
    vector<int> rightSum;
    vector<int> ans;
    leftSum.push_back(0);
        int left = nums[0];
        for(int i=1; i<nums.size(); i++){
            leftSum.push_back(left);
            left += nums[i];
        }
        
    
    int right = 0;
        
    for(int i=0; i<nums.size();i++){
        right += nums[i];
    }
    
    right -= nums[0];
    
    for(int i=1; i<nums.size();i++){
        rightSum.push_back(right);
        right -= nums[i];
    }
    rightSum.push_back(0);
    
    
    
    for(int i=0; i<nums.size();i++){
        ans.push_back(abs(leftSum[i]-rightSum[i]));
    }
    


    return ans;
        
    }
};