class Solution {
public:
    bool isPalindrome(int x) 
    {
        int i, j;
        string s;
        if (x < 0)
        {
            return false;
        }
        else
        {
            s = to_string(x);
            i = 0; 
            j = s.size() - 1;
            while (i < (s.size() / 2))
            {
                if (s[i] == s[j])
                {
                    i++; 
                    j--;
                }
                else
                {
                    return false;
                }
            }
            return true;
        }
    }
};