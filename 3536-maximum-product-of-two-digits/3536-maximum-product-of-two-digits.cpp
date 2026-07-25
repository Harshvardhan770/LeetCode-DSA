class Solution {
public:
    int maxProduct(int n) {
        int max = INT_MIN;
        int secMax = INT_MIN;

        vector<int> x;
        while(n>0)
        {
            int last = n % 10;
            x.push_back(last);
            n/=10;
        }
        
        sort(x.begin(),x.end(),greater<int>());
        return x[0] * x[1];
    }
};