class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]==nums[j]){
        //             return true;
        //         }
        //     }
        // }
        // return false;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]+=1;
            if(mp[nums[i]]>1){
                return true;
            }
        }
        return false;
    }
};