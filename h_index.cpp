#include<bits/stdc++.h>

using namespace std;

int hIndex(vector<int>& citations) {
    int sum=0;
    sort(citations.begin(),citations.end(),greater<int>());
    for (int i = 0; i < citations.size(); i++)
    {
        if(citations[i] >= i+1){
            sum = i+1;
        }
    }
    return sum;
    
}


int main(){
    vector<int> nums = {3,1,1};
    int k = hIndex(nums);
    cout<<k<<endl;
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }

    return 0;
}

