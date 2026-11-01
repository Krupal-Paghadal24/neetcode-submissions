class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int s = nums.size();
        int c = floor(s/2);
        int ans;
        unordered_map<int, int> mp(0);

        for(auto num: nums){
            mp[num]++;

            // if(mp[num] > c){
            //     ans = num;
            // }
        }

        for(auto n: mp){
            if(n.second > c){
                ans = n.first;
            }
        }
    return ans;
    }
};
