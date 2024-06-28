#include<bits/stdc++.h>

using namespace std;

int maxProfit(vector<int>& prices) {
    int left=0;
    int right=1;
    int maxp=0;

    for(int i=1;i<prices.size();i++){
        if(prices[i] > prices[i-1]){
            int prof = prices[i] - prices[i-1];
            maxp += prof;
        }
    }


    return maxp;

}


int main(){
    vector<int> nums = {1,2,3,4,5};
    int k = maxProfit(nums);
    cout<<k<<endl;
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }

    return 0;
}

