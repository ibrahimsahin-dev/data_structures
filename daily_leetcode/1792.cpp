#include <bits/stdc++.h>
using namespace std;
   double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
    vector<double> vec;
        for(int i=0;i<classes.size();i++)
        {
            double val=double(classes[i][1])-double(classes[i][0]);
            vec.push_back(val);
        }
        int extra=extraStudents;
        while(extra>0)
        {
            double x=vec[0]
            int index=0;
            for(int i=0;i<vec.size();i++)
            {
                if(x>vec[i])
                {
                    x=vec[i];
                    index=i;
                }
                else if(x==vec[i])
                {
                    if(classes[index][1]<classes[i][1])
                    {;}
                    else
                    {
                    index=i;
                    }
                        
                }
                
            }
            classes[index][1]+=1;
            classes[index][0]+=1;
            vec[index]=double(classes[index][1])-double(classes[index][0])
            extra--;
        }
        double toplam=0;
        for(int i=0;i<classes.size();i++)
        {
            double val=classes[i][1]/(classes[i][0]);
            toplam+=val;
        }
        toplam=toplam/int(vec.size());
        return toplam;
    }