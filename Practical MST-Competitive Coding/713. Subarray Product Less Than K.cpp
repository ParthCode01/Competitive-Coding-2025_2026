#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        int left = 0;
        int product = 1;
        int count = 0;

        for(int right = 0; right < nums.size(); right++) {

            product *= nums[right];

            while(product >= k && right >= left) {
                product /= nums[left];
                left = left + 1;
            }

            if(product < k) {
                count = count + (right - left + 1);
            }
        }

        return count;
    }
};
