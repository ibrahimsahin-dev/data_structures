#include <bits/stdc++.h>
using namespace std;
   double maxAverageRatio_bruteforce(vector<vector<int>>& classes, int extraStudents) {
    vector<double> vec;
        for (int i = 0; i < classes.size(); i++) {
        double val = (double)classes[i][0] / classes[i][1];
        double sonval = (double)(classes[i][0] + 1) / (classes[i][1] + 1);
        vec.push_back(sonval - val);
    }
        int extra=extraStudents;
        for(double i:vec)
        {
            cout<<" vector elemani"<<i<<endl;
        }
        while(extra>0)
        {
            double x=vec[0];
            int index=0;
            cout<< " x burada "<<x<<endl;
            for(int i=0;i<vec.size();i++)
            {
                if(x<vec[i])
                {
                    x=vec[i];
                    index=i;
                }
            }
            cout<< "bulunan indeks: " << index<< endl<<endl;
            classes[index][1]+=1;
            classes[index][0]+=1;
            double val = (double)classes[index][0] / classes[index][1];
double sonval = (double)(classes[index][0] + 1) / (classes[index][1] + 1);
vec[index] = sonval - val;
            extra--;
        }
        double toplam=0;
        for(int i=0;i<classes.size();i++)
        {
            double val=double(classes[i][0])/(classes[i][1]);
            cout<< "val degeri "<< val<< endl;
            toplam+=val;
        }
        toplam=toplam/int(vec.size());
        return toplam;
    }


    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        using p = pair<double, int>;
        priority_queue<p> pq;

        // Push initial marginal gain for each class
        for (int i = 0; i < classes.size(); ++i) {
            double curr = (double)classes[i][0] / classes[i][1];
            double newPr = (double)(classes[i][0] + 1) / (classes[i][1] + 1);
            pq.push({newPr - curr, i});
        }

        // Distribute extra students
        while (extraStudents--) {
            auto it = pq.top();
            pq.pop();
            int i = it.second;
            classes[i][0] += 1;
            classes[i][1] += 1;
            double curr = (double)classes[i][0] / classes[i][1];
            double newPr = (double)(classes[i][0] + 1) / (classes[i][1] + 1);
            pq.push({newPr - curr, i});
        }

        // Compute final average pass ratio
        double ans = 0.0;
        for (auto& it : classes) {
            ans += (double)it[0] / it[1];
        }

        return ans / classes.size();
    }
int main()
{
    //[1,2],[3,5],[2,2]
    vector<vector<int>> classes={{1,2},{3,5},{2,2}};
    cout<<maxAverageRatio(classes,2);
}