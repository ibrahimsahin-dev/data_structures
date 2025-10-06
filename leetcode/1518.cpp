
#include <bits/stdc++.h>
using namespace std;
// Input: numBottles = 15, numExchange = 4
// Output: 19
// Explanation: You can exchange 4 empty bottles to get 1 full water bottle. 
// Number of water bottles you can drink: 15 + 3 + 1 = 19.
int numWaterBottles(int numBottles, int numExchange) {
        int sum=0;
        int bossise=numBottles;
        int dolubottles=numBottles;
        
        
        while(bossise>=numExchange)
        {
           int yeniboslar=dolubottles/numExchange;
           int kalan=dolubottles%numExchange;
           bossise=kalan+yeniboslar;
           sum+=bossise;
        }
        return sum;
    }
 