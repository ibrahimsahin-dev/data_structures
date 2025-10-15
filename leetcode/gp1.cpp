#include "myhead.h"

int qu(vector<vector<int>> connections, vector<int> firewall_nodes)
{
    vector<bool> visited(connections.size(),false);
    unordered_set<int> myset(firewall_nodes.begin(),firewall_nodes.end());
    int res=0;
    visited[0]=1;
    int n=connections.size();
    for(int x=0; x< n; x++)
    {   
            for(int i=0;i<connections[x].size();i++)
            {
                auto it=myset.find(x);
                if(!visited[i] && it == myset.end())
                {
                    visited[i]=1;
                    res++;
                }
            }
    }
    return res;
}

int main() {
    // ÖRNEK GİRİŞ VERİLERİ
    int n = 7; // Sunucu sayısı (0'dan 6'ya)
    
    // [[0, 1], [0, 2], [1, 3], [3, 4], [2, 5], [5, 6]]
    std::vector<std::vector<int>> connections = {
        {0, 1,2}, 
        {1, 3}, 
        {3, 4}, 
        {2, 5}, 
        {5, 6}
    };
    
    // Güvenlik Duvarı Olan Sunucular: [4, 6]
    std::vector<int> firewall_list = {4, 6}; 
    
    int start_node = 0; // Saldırı başlangıcı

    // Çözüm Fonksiyonunu Çağır
    int result = qu( connections, firewall_list);
    return 0;
}
