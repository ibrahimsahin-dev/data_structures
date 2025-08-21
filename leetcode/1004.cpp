#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
#include <algorithm>
#include <numeric>
using namespace std;


// Input: nums = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], k = 3
// Output: 10
// Explanation: [0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1]
int longestOnes(vector<int>& nums, int k) {
        int net=0;
        vector<int> dizi;
        int kalan_hak=k;
        int toplam=0;
        for(int i=0; i<nums.size();i++)
        {
            if(net<=0)
                net=0;
            if(nums[i]==0)
            {
                if(kalan_hak>0)
                {
                    net++;
                    kalan_hak-=1;
                }
                else{
                    int temp_net=net;
                    for(int j=i-net;j<=temp_net;j++)
                    {
                        if(nums[j]==0)
                        {
                            net--;
                            break;
                        }
                        else{
                            net--;
                        }
                    }
                        
                }
            }
            else
                {net++;}
        
            if(net>toplam)
                toplam=net;
        }
        
        return toplam+1;
       
    }
int main()
{
    vector<int> x={0,0,1,1,1,0,0};

    cout<<longestOnes(x,0);
}