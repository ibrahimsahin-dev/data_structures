#include <iostream>
#include <vector>
#include <stack>
using namespace std;
// Input: dividend = 10, divisor = 3
// Output: 3
// -231 <= dividend, divisor <= 231 - 1
// divisor != 0
// 1     -1 1
int divide(int dividend, int divisor) {
        int i=0;
        bool sonuc=1;
        int divid=dividend;
        if(divid==0)
            return 0;
        int divis=divisor;
        if((dividend>0 && divisor>0) || (dividend<0 &&divisor<0 ))
        {
            if(dividend>0 && divisor>0)
            {
                while(divid>=0)
                {
                    divid-=divis;
                    i++;
                }
            }
            else
            {
                divis*=-1;
                while(divid<=0)
                {
                    divid+=divis;
                    i++;
                }
            }
        }
        else{
            sonuc=0;
            
            while(divid>=0)
            {
                divid+=divis;
                i++;
            }
        }
        if(sonuc==1)
            return i-1;
        else
            return -i+1;
    }
   