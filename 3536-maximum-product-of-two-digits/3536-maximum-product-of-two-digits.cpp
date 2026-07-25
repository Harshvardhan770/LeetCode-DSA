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

        for(auto i : x)
        {
            if(i>max)
            {
                max = i;
            }
        }

        sort(x.begin(),x.end());
        x.pop_back();
        for(auto i : x)
        {
            if(i>secMax)
            {
                secMax = i;
            }
        }

        return max * secMax;


    }
};