#include<bits/stdc++.h>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    map<int, int> count;
    int maxCount = 0;
    int maxNumber = nums[0];

    for (int i = 0; i < nums.size(); i++) {
        count[nums[i]]++;
    }

    for (auto it = count.begin(); it != count.end(); ++it) {
        if (it->second > maxCount) {
            maxCount = it->second;
            maxNumber = it->first;
        }
    }
    return maxNumber;
}

int main(){
    vector<int> nums = {1};
    int k = removeDuplicates(nums);
    cout<<k<<endl;
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }

    return 0;
}