
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if(n<0)
        {
            x=1/x;
        }
        long long num= abs(n);
        double po=1;
        while(num)
        {
            if(num&1)
            {
                po*=x;
            }
            x*=x;
            num>>=1;
        }
        return po;
    }
};