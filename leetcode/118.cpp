#include <iostream>
#include <vector>
#include <stack>
using namespace std;
// Input: numRows = 5
// Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
vector<vector<int>> generate(int numRows) {
       vector<int> x;
        vector<vector<int>> outer;
        if(numRows==1){
            x.push_back(1);
            outer.push_back(x);
            return outer;
        }
        if(numRows==2)
        {
            x.push_back(1);
            outer.push_back(x);
            x.push_back(1);
            outer.push_back(x);
            return outer;
        }
        x.push_back(1);
        outer.push_back(x);
        x.push_back(1);
        outer.push_back(x);
        int i=2;
        while(numRows-->2)
        {   
            int j=0;
            vector<int> y;
            while(j<x.size()+1)
            {
                if(j==0)
                    y.push_back(x[j]);
                else if(j==x.size())
                    y.push_back(x[j-1]);
                else{
                    y.push_back(x[j]+x[j-1]);
                }
                j++;
            }
            x=y;
            outer.push_back(x);
        }
        return outer;
    }

int main() {
    // numRows = 5 için test
    int numRows1 = 5;
    cout << "Input: numRows = " << numRows1 << endl;
    vector<vector<int>> result1 = generate(numRows1);
    cout << "Output: [";
    for (const auto& row : result1) {
        cout << "[";
        for (size_t i = 0; i < row.size(); ++i) {
            cout << row[i] << (i == row.size() - 1 ? "" : ",");
        }
        cout << "]";
    }
    cout << "]" << endl;

    cout << "----------------------" << endl;

    // numRows = 1 için test
    int numRows2 = 1;
    cout << "Input: numRows = " << numRows2 << endl;
    vector<vector<int>> result2 = generate(numRows2);
    cout << "Output: [";
    for (const auto& row : result2) {
        cout << "[";
        for (size_t i = 0; i < row.size(); ++i) {
            cout << row[i] << (i == row.size() - 1 ? "" : ",");
        }
        cout << "]";
    }
    cout << "]" << endl;

    cout << "----------------------" << endl;

    // numRows = 3 için test
    int numRows3 = 3;
    cout << "Input: numRows = " << numRows3 << endl;
    vector<vector<int>> result3 = generate(numRows3);
    cout << "Output: [";
    for (const auto& row : result3) {
        cout << "[";
        for (size_t i = 0; i < row.size(); ++i) {
            cout << row[i] << (i == row.size() - 1 ? "" : ",");
        }
        cout << "]";
    }
    cout << "]" << endl;

    return 0;
}