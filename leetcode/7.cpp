#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
using namespace std;
#define INT_max  2147483647
#define INT_min -2147483648

int reverse_bruteforce(int x) {
    int max = 2147483647;
    int min = -2147483648;

    int i = 0;
    int y = x;
    string str;
    bool isnegative = 0;
    bool sikinti = 0;

    if (x < 0) {
        isnegative = 1;
        if (x == -2147483648) {
            sikinti = 1;
            x = -2147483647; 
        }
        x *= -1;
        y = x;
    }

    while (y % 10 == 0 && y != 0) {
        y = y / 10;
    }

    while (y > 0) {
        str += to_string(y % 10);
        y = y / 10;
    }

    if (sikinti) {
        
        if (str[0] == '9') {
  
            int j = 0;
            while (str[j] == '9') {
                str[j] = '0';
                j++;
            }
            if (j < str.length()) {
                str[j] += 1;
            } else {
                str += '1';
            }
        } else {
            str[0] += 1;
        }
    }

    if (isnegative == 1) {
        if (str.length() > to_string(-min).length() ||
            (str.length() == to_string(-min).length() && str > to_string(-min))) {
            return 0;
        }
    } else {
        if (str.length() > to_string(max).length() ||
            (str.length() == to_string(max).length() && str > to_string(max))) {
            return 0;
        }
    }

    int size = str.length() - 1;
    int top = 0;
    while (i < str.length()) {
        char kar = str[size];
        int ax = kar - '0';
        top += (ax * pow(10, i));
        size--;
        i++;
    }

    if (isnegative) {
        return -top;
    }
    return top;
}

    int main(){
       
 cout << reverse_bruteforce(123) << endl;  

    }