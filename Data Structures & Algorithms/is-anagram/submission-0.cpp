class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
        {
            return false;
        }
        unordered_map<char, int> mp,np;
        for(int i=0;i<s.length();i++)
        {
            if(mp.find(s[i]) == mp.end())
            {
                mp[s[i]]=1 ;
            }
            mp[s[i]]++;
        }
        for(int i=0;i<t.length();i++)
        {
            if(np.find(t[i]) == np.end())
            {
                np[t[i]]=1 ;
            }
            np[t[i]]++;
        }
        if(mp==np)
        {
            return true;
        }
        return false ;
    }
};
