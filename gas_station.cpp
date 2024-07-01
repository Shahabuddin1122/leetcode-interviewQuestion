#include<bits/stdc++.h>

using namespace std;

constexpr long long reserve = static_cast<long long>(5 * 1e3);
static const bool init = []{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return false;
}();

int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    if(accumulate(gas.begin(),gas.end(),0) < accumulate(cost.begin(),cost.end(),0)){
        return -1;
    }
    int total = 0;
    int starting_index = 0;
    for (int i = 0; i < cost.size(); i++)
    {
        total += (gas[i]-cost[i]);
        if(total < 0){
            total =0;
            starting_index = i+1;
        }
    }
    
    return starting_index;
}

int main(){
    vector<int> gas = {1,2,3,4,5};
    vector<int> cost = {3,4,5,1,2};
    int ans = canCompleteCircuit(gas,cost);
    cout << ans <<endl;
    for(int i=0;i<gas.size();i++){
        cout<<gas[i]<<" ";
    }

    return 0;
}
