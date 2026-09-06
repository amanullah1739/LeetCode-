class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        for(int i=0; i<nums.size(); i++){
            int l = nums[i];
            int need = target - l;
            if(hash.find(need) != hash.end()){
                return {i,hash[need]};

            }
            hash[nums[i]]=i;

        }
        return {};
        
    }
};