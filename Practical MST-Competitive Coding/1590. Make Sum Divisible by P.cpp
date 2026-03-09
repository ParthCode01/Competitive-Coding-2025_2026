#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {

        long long total = 0;

        for(int n : nums)
            total =total+ n;

        int x = total % p;

        if(x == 0)
            return 0;

        unordered_map<int,int> mp;
        mp[0] = -1;

        long long prefix = 0;
        int ml = nums.size();

        for(int i = 0; i < nums.size(); i++) {

            prefix = (prefix + nums[i]) % p;

            int target = (prefix - x + p) % p;

            if(mp.count(target))
                ml= min(mL, i - mp[target]);

            mp[prefix] = i;
        }

        if(ml== nums.size())
            return -1;

        return ml;
    }
};