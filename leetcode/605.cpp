#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
#include <algorithm>
#include <numeric>
using namespace std;
bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0)
            return true;
        if(flowerbed.size()==1)
        {
            if(flowerbed[0]==0)
            {
                return true;
            }
            else
                return false;
        }
        if(flowerbed.size()==2)
        {
            
            if(flowerbed[0]==0 && flowerbed[1]==0 && n==1)
            {
                return true;
            }
            else
                return false;
        }
        int bos_yer=0;
        int i=0;
        while(i<flowerbed.size()-1){
            if(i==0 && flowerbed[i]==0 && flowerbed[1]==0){
                bos_yer+=1;
                flowerbed[i]=1;
                i+=2;
                continue;
            }
            if(i==0 && flowerbed[i]==1  || (i==0 && flowerbed[i]==0 && flowerbed[1]==1))
            {
                i+=2;
                continue;

            }
            if(flowerbed[i-1]==0 && flowerbed[i+1]==0 && flowerbed[i]==0)
            {
                flowerbed[i]=1;
                bos_yer+=1;
                i+=2;
                continue;
            }
            i++;
        }
        if(flowerbed[flowerbed.size()-2]==0 && flowerbed[flowerbed.size()-1]==0)
            {
                bos_yer+=1;
                flowerbed[flowerbed.size()-1]=1;
            }
        if(bos_yer>=n)
            return true;
        else 
            return false;
    }
int main()
{
    vector<int> x={1,0,0,0,1};
    cout<<canPlaceFlowers(x,2);
}