#include <iostream>
#include <vector>
#include <stack>
using namespace std;
vector<vector<int>> x;
void rec(vector<int> dizi, int index,vector<int> elde){
    int a=0;
    for(int x:elde)
    {
        a+=x;
    }
    if(a==7)
    {
        x.push_back(elde);
    }
    if(a>7)
        return;
    if(index==dizi.size())
    {
        return;
    }
    for(int i=index; i<dizi.size();i++)
    {
        elde.push_back(dizi[i]);
        rec(dizi,i,elde);
        elde.pop_back();
    }
 
}
int main()
{
    vector<int> nums = {2, 3, 6, 7};
    int target = 3;
    bool used[3]{0};
    vector<int> currentCombination;
    rec(nums,0,currentCombination);
    cout << "Toplamı " << target << " olan ikili kombinasyonlar:" << endl;
    for (const auto& combo : x) {
        cout << "[";
        for (size_t i = 0; i < combo.size(); ++i) {
            cout << combo[i] << (i == combo.size() - 1 ? "" : ", ");
        }
        cout << "]" << endl;
    }

}