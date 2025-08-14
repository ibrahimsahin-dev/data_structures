#include <iostream>
#include <vector>
#include <stack>
using namespace std;
// Input: num = 3749
// Output: "MMMDCCXLIX"


// 4 is 1 (I) less than 5 (V): IV and 9 is 1 (I) less than 10 (X): IX. Only the following subtractive forms are used: 
//4 (IV), 9 (IX), 40 (XL), 90 (XC), 400 (CD) and 900 (CM).
string intToRoman(int num) {
        string x;
        while(num>=1000)
        {
            x+='M';
            num-=1000;
        }
        while(num<1000 && num>=100)
        {
            if(num>=900)
            {
                x+='C';
                x+='M';
                 num-=900;
            }
            else if(num>=500)
            {
                x+='D';
                num-=500;
                if(num<400&& num>=100)
                {
               
                    x+='C';
                    num-=100;
                }
            }
            else{
                if(num<400 && num>=100)
                {
               
                    x+='C';
                    num-=100;
                }
                else{
                    x+='C';
                    x+='D';
                    num-=400;
                }
            }
        }

        while(num<100 && num>=10)
        {
            if(num>=90)
            {
                x+='X';
                x+='C';
                 num-=90;
            }
            else if(num>=50)
            {
                x+='L';
                num-=50;
                if(num<40 && num>=10)
                {
               
                    x+='X';
                    num-=10;
                }
            }
            else{
                if(num<40&& num>=10)
                {
               
                    x+='X';
                    num-=10;
                }
                else{
                    x+='X';
                    x+='L';
                    num-=40;
                }
            }
        }
        while(num<10 && num>0)
        {
            if(num>=9)
            {x+='I';
                x+='X';
                
                 num-=90;
            }
            else if(num>=5)
            {
                x+='V';
                num-=5;
                if(num<4 && num>=1)
                {
               
                    x+='I';
                    num-=1;
                }
            }
            else{
                if(num<4  && num>=1)
                {
               
                    x+='I';
                    num-=1;
                }
                else{
                    x+='I';
                    x+='V';
                    num-=4;
                }
            }
        }
        return x;
    }
// //3000 = MMM as 1000 (M) + 1000 (M) + 1000 (M)
//  700 = DCC as 500 (D) + 100 (C) + 100 (C)
//   40 = XL as 10 (X) less of 50 (L)
//    9 = IX as 1 (I) less of 10 (X)
//3433 MMMCD
    
    int main()
    {
        cout<<intToRoman(58);
    }