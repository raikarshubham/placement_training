// class Solution {
// public:
//     int longestSubarray(vector<int>& nums) {
//         int left = 0;
//         int zeroCount = 0;
//         int ans = 0;

//         for (int right = 0; right < nums.size(); right++) {
//             if (nums[right] == 0)
//                 zeroCount++;

//             while (zeroCount > 1) {
//                 if (nums[left] == 0)
//                     zeroCount--;
//                 left++;
//             }

//             ans = max(ans, right - left);
//         }

//         return ans;
//     }
// };

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l=0,zerocount=0,ans=0;

        for(int r=0;r<nums.size();r++){
            if(nums[r]==0)
                zerocount++;

            while(zerocount>1){
                if(nums[l]==0)
                    zerocount--;
                l++;
            }

            ans=max(ans,r-l);
        }
        return ans;
    }
};
int main() {
    vector<int> nums = {1, 1, 0, 1};

    Solution obj;
    cout << "Longest subarray length after deleting one element: "<< obj.longestSubarray(nums);

    return 0;
}

