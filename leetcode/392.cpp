bool isSubsequence(string s, string t) {
    int i=0;
    int j=0;
    bool res=0;
    if(s=="")
        return true;
    while(j<t.length())
        {
            if(s[i]==t[j])
            {
                if(i==s.length()-1)
                    return true;
                i++;
                j++;
            }
            else
                j++;
        }
    return res;
    }