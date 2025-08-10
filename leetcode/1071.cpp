#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
#include <algorithm>
#include <numeric>
using namespace std;

string gcdOfStrings(string str1, string str2) {
    if(str1+str2!=str2+str1)
        return "";
    int max_ortak=gcd(str1.length(),str2.length());
    return str1.substr(0,max_ortak);  
    }