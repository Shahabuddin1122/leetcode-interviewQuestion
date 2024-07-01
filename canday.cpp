#include<bits/stdc++.h>

using namespace std;

constexpr long long reserve = static_cast<long long>(5 * 1e3);
static const bool init = []{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return false;
}();

int candy(vector<int>& ratings) {
    vector<int> ans(ratings.size(),1);

    for(int i=1;i<ratings.size();i++){
        if(ratings[i] > ratings[i-1]){
            ans[i] = ans[i-1] + 1;
        }
    }
    for(int i=ratings.size()-2;i>=0;i--){
        if(ratings[i] > ratings[i+1]){
            ans[i] = max(ans[i],ans[i+1]+1);
        }
    }

    return accumulate(ans.begin(),ans.end(),0);
}

int main(){
    vector<int> gas = {5,4,3,5,6,2};
    vector<int> cost = {3,4,5,1,2};
    int ans = candy(gas);
    cout << ans <<endl;
    for(int i=0;i<gas.size();i++){
        cout<<gas[i]<<" ";
    }

    return 0;
}
