#include <bits/stdc++.h>
using namespace std;
double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
    unordered_map<int,int> mymap;
        for(int i=0;i<classes.size();i++)
        {
            double val=double(classes[i][0])/double(classes[i][1]);
            mymap[i]=val;
        }
        int extra=extraStudents;
        while(extra>0)
        {
            int x=mymap[0];
            int index=0;
            for(auto it:mymap)
            {
                if(x>it.second)
                {
                    x=it.second;
                    index=it.first;
                }
                else if(x==it.second)
                {
                    if(classes[index][1]<classes[it.first][1])
                    {
                        ;
                    }
                    else{
                        index=it.first;
                    }
                }
            }
            mymap[index]=double(classes[index][0]+1)/double(classes[index][1]+1);
            extra--;
        }
        double toplam=0;
        for(auto it: mymap)
        {
            toplam+=it.second;
        }
        toplam=toplam/double(mymap.size());
        return toplam;
    }