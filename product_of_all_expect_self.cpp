#include<bits/stdc++.h>

using namespace std;

constexpr long long reserve = static_cast<long long>(5 * 1e3);
static const bool init = []{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return false;
}();

class Solution {
public:
    // vector<int> productExceptSelf(vector<int>& nums) {
    //     vector<int> ans={};

    //     for (int i = 0; i < nums.size(); i++)
    //     {
    //         vector<int> newNums(nums.begin(), nums.end());

    //         newNums[i] = newNums.back();
    //         newNums.pop_back();
    //         int val = multiplication(newNums);
    //         ans.push_back(val);
    //     }
    //     return ans;
        
    // }


    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);
                
        // Calculate left products
        int leftProduct = 1;
        for (int i = 0; i < n; ++i) {
            ans[i] = leftProduct;
            leftProduct *= nums[i];
        }

        int rightProduct = 1;
        for (int i = n - 1; i >= 0; --i) {
            ans[i] *= rightProduct;
            rightProduct *= nums[i];
        }

        return ans;
    }

    // int multiplication(vector<int>& nums){
    //     int ans=1;
    //     for (int i = 0; i < nums.size(); i++)
    //     {
    //         ans = ans * nums[i];
    //     }
    //     return ans;
        
    // }
};

int main(){
    vector<int> nums = {-1,1,0,-3,3};
    Solution s = Solution();
    vector<int> ans = s.productExceptSelf(nums);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}
