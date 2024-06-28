#include<bits/stdc++.h>

using namespace std;

bool canJump(vector<int>& nums) {
    int goal_post = nums.size()-1;
    for (int i = nums.size()-1; i >= 0; i--)
    {
        if(i + nums[i] >= goal_post){
            goal_post = i;
        }
    }
    if (goal_post == 0){
        return true;
    }

    return false;
}


int main(){
    vector<int> nums = {3,2,1,0,4};
    bool k = canJump(nums);
    cout<<k<<endl;
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }

    return 0;
}

