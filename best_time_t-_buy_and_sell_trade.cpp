#include<bits/stdc++.h>

using namespace std;

int maxProfit(vector<int>& prices) {
    int left=0;
    int right=1;
    int maxp=0;

    while (right < prices.size()){
        if(prices[left] < prices[right]){
            int prof = prices[right] - prices[left];
            maxp = max(maxp,prof);
        }
        else {
            left = right;
        }
        right+=1;
    }


    return maxp;

}

int main(){
    vector<int> nums = {7,1,5,3,6,4};
    int k = maxProfit(nums);
    cout<<k<<endl;
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }

    return 0;
}
