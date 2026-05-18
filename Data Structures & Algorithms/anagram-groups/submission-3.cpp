class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map <vector<int>,vector<string>> mp;

        for (int i=0;i<strs.size();i++)
        {
            vector<int>temp(26,0);
            for( int j=0;j<strs[i].length();j++)
            {
                
                temp[strs[i][j] - 97]++; 
            }
            mp[temp].push_back(strs[i]); 

        }

        vector<vector<string>> temp ;
        for(auto it : mp)
        {
            temp.push_back(it.second);
        }
        return temp;


    }
};
