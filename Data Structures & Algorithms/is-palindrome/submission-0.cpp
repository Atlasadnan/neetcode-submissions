class Solution {
public:
    bool isPalindrome(string s) {
        string nw = "";
        for(int i=0;i<s.length();i++)
        {
            if(isalnum(s[i]))
            {
                s[i] = tolower(s[i]);
                nw.push_back(s[i]);
            }
            

        } 
        for(int i =0,j=nw.length()-1;i<j; i++,j--)
        {
            if(nw[i] != nw[j])
            {
                return false;
            }
        }
        return true;
    }
};
