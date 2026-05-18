class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> tem ;
        for (int i=0;i<strs.size();i++)
        {   
            vector<string>tem2;
            int flag =0;
            for(int k=0;k<tem.size();k++)
            {
                for (int l=0;l<tem[k].size();l++)
                {
                    if(tem[k][l] == strs[i])
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 1)
                {
                    break;
                }
            }
            
            if(flag == 0)
            {
                tem2.push_back(strs[i]);
                for (int j=i+1;j<strs.size();j++)
                {
                    string a= strs[i];
                    string b= strs[j];
                    sort(a.begin(),a.end());
                    sort(b.begin(),b.end());
                    if( a == b)
                    {
                        tem2.push_back(strs[j]);
                    }
                }
                tem.push_back(tem2);
            }
            

            flag = 0;
        }
        return tem;
    }
};
