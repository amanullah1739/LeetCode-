class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set(nums.begin(),nums.end());
        int maxLen = 0;
        for(int num : set){
            if(set.find(num-1)==set.end()){
                int currentNum = num;
                int currentLen = 1;
                while(set.find(currentNum+1) != set.end()){
                    currentNum++;
                    currentLen++;
                }
                maxLen = max(maxLen, currentLen);

            }
        }
        return maxLen;    
    }
};