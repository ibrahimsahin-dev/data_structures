#include <iostream>
#include <cmath>
#include <string.h>
#include <vector>
using namespace std;
int majorityElement(vector<int>& nums) {
    
        vector<int> dizi;
        int x=nums.size();
        int i=0;
        while(x-1>0){
            int j=dizi.size();
            
            while(j>0){
                
                if(nums[i]!=dizi[j]){
                    dizi.push_back(nums[i]);
                    break;
                }
                j--;
            }
            x--;
            
        }
        return x;
    }
int main(){
    vector<int> any={1,2,3};
    int b=majorityElement(any);
    cout<<b;
    return 0;
}