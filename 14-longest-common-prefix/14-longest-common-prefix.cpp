class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string c = "";
        string s = "";
        int size = strs.size();
        int len;
        
        if(size == 1)
            return strs[0];
        
        for(int i = 0; i < size - 1; i++)
        {
            if(strs[i].size() < strs[i + 1].size())
            {
                len = strs[i].size();
            }
            else
                len = strs[i + 1].size();
        }
        
        c = strs[0];
        for(int i = 1; i < size; i++)
        {
            if(i > 1)
            {
                c = s;
                s = "";
            }
            
            for(int j = 0; j < len; j++)
            {
                if(c[j] == strs[i][j])
                    s += c[j];
                else
                    break;
            }
        }
        return s;
    }
};