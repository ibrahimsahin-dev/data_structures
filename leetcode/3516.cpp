
#include <bits/stdc++.h>
using namespace std;
// Input: x = 2, y = 7, z = 4

// Output: 1
int findClosest(int x, int y, int z) {
        if(abs(z-y)>abs(z-x))
            return 1;
        else if(abs(z-y)<abs(z-x))
            return 2;
        else
            return 0;
    }