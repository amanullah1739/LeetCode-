class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
    vector<string> ans;
    int n = nums.size();
    int l=0;
    while(l<n){
        int r=l;
        while(r+1<n && nums[r]+1 == nums[r+1]){
            r++;
        }
        if(l==r){
            ans.push_back(to_string(nums[l]));
        }
        else{
            ans.push_back(to_string(nums[l]) + "->" + to_string(nums[r]));
        }
        l = r+1;
        
        
    }
       return ans; 
    }
};