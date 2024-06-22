#include<bits/stdc++.h>

using namespace std;

int main(){
    int nums[8] = {0,1,2,2,3,0,4,2};
    int val = 2;
    int count=0;
    vector<int> expectedNums;
    int length = sizeof(nums)/sizeof(nums[0]);

    for(int i=0;i<length;i++){
        if(nums[i] != val){
            nums[count] = nums[i];
            count++;
        }
    }


    cout<<count<<endl;
    sort(expectedNums.begin(),expectedNums.end());
    for(int i=0;i<length;i++){
        cout<<nums[i]<<" ";
    }

    return 0;
}