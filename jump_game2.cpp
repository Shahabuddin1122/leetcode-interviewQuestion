#include<bits/stdc++.h>

using namespace std;

int canJump(vector<int>& nums) {
    int steps=0;
    int left=0;
    int right=0;
    while (right < nums.size()-1)
    {
        // cout<<"O"<<endl;
        int maxv=0;
        for (int i = left; i < right+1; i++)
        {
            maxv = max(maxv,i+nums[i]);
        }
        left = right+1;
        right = maxv;
        steps++;
    }
    
    return steps;
}


int main(){
    vector<int> nums = {2,3,1,1,4};
    int k = canJump(nums);
    cout<<k<<endl;
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }

    return 0;
}

