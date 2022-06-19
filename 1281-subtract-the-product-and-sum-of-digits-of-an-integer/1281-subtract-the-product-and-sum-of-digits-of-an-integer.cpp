class Solution {
public:
    int subtractProductAndSum(int n)
    {
        string s;
        int size;
        int prod = 1;
        int sum = 0;
        
        s = to_string(n);
        size = s.size();
        
        for(int i = 0; i < size; i++)
        {
            prod = prod * (s[i] - 48);
            sum += s[i] - 48;
        }
        
        n = prod - sum;
        
        return n;
    }
};