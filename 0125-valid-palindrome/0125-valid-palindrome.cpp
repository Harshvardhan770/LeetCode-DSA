class Solution {
public:
    bool isPalindrome(string s) {

        string t = "";

        for(char c : s)
        {
            if(isalnum(c))
                t += tolower(c);
        }

        s = t;

        int n = s.length();

        for(int i = 0; i < n/2; i++)
        {
            if(s[i] != s[n-i-1])
                return false;
        }

        return true;
    }
};