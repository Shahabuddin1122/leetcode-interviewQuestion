#include<bits/stdc++.h>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    int left=0;
    int right=0;

    while (right < nums.size())
    {
        int count=1;
        while (nums[right] == nums[right+1])
        {
            right++;
            count++;
        }
        int k = min(2,count);
        for(int i=0;i<k;i++){
            nums[left] = nums[right];
            left++;
        }
        right++;
    }
    
    
    return left;
}

int main(){
    vector<int> nums = {1,1,1,2,2,3};
    int k = removeDuplicates(nums);
    cout<<k<<endl;
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }

    return 0;
}