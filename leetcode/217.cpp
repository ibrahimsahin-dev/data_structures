 #include <iostream>
#include <vector>
#include <stack>
#include <cmath>
#include <algorithm>
using namespace std;
bool containsDuplicate(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int i=0;
        while((i+1)<nums.size()){
        if(nums[i]==nums[i+1]){
            return true;
        }
        i++;
    }
    return false;
    }
int main(){
    vector<int> x={1,2,3};
    cout<<containsDuplicate(x);
}