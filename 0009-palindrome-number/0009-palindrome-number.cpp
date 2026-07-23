class Solution {
public:
    bool isPalindrome(int x) {

        int num = x;
        long palindrome = 0;
        while(x>0)
        {
            int last = x%10;
            palindrome = (palindrome*10) + last;
            x = x/10;
        }

        if(palindrome == num)
        {
            return true;
        }
        return false;
    }
};