#include<bits/stdc++.h>

using namespace std;

int rotateArray(vector<int>& nums,int k) {
    vector<int> res(nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
        int index = (i+k)% nums.size();
        res[index]=nums[i];
    }
    for (int i = 0; i < nums.size(); i++)
    {
        nums[i] = res[i];
    }
    
}

int main(){
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = rotateArray(nums,3);
    cout<<k<<endl;
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }

    return 0;
}