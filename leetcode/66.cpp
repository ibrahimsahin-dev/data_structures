
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
vector<int> plusOne(vector<int>& digits) {
    vector<int> vec = digits;
    int size = vec.size() - 1;
    int carry = 1;

    while (size >= 0 && carry == 1) {
        if (vec[size] == 9) {
            vec[size] = 0;
        } else {
            vec[size]++;
            carry = 0;
        }
        size--;
    }

    if (carry == 1) {
        vec.insert(vec.begin(), 1);
    }

    return vec;
}
  int main() {
    vector<int> digits = {1,2,9,9,9};
    vector<int> result = plusOne(digits);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}