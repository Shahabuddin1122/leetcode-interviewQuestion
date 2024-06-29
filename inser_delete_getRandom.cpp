#include<bits/stdc++.h>

using namespace std;

constexpr long long reserve = static_cast<long long>(5 * 1e3);
static const bool init = []{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return false;
}();

class RandomizedSet {
    vector<int> numList; // insertion,getrandom -> O(1) Deletion -> O(n)
    unordered_map<int,int> numMap; // insertion,delete -> O(1) getrandom -> O(n)
public:
    RandomizedSet() {

    }
    
    bool insert(int val) {
        if(numMap.find(val) != numMap.end()){
            return false;
        }
        numList.push_back(val);
        numMap[val] = numList.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(numMap.find(val) == numMap.end()){
            return false;
        }
        auto it = numMap.find(val);
        numList[it->second] = numList.back();
        numList.pop_back();
        numMap[numList[it->second]] = it->second;
        numMap.erase(val);
        return true;
    }
    
    int getRandom() {
        return numList[rand()%numList.size()];
    }
};

int main(){
    RandomizedSet p = RandomizedSet();
    cout<<p.insert(3);
    cout<<p.insert(3);

    return 0;
}
