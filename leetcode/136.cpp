 #include <iostream>
#include <vector>
#include <stack>
#include <cmath>
#include <algorithm>
using namespace std;

int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int i=0;
        if(nums.size()==1){
            return nums[i];
        }
        while(i+1<nums.size()){
            if(nums[i]==nums[i+1]){
                i+=2;
            }
            else{
                return nums[i];
            }
        }
        
        return nums[i];
    }
int main(){
    vector<int> x={1,2,3,1,2,3};//1 1 2 2 3
    cout<<singleNumber(x);
}