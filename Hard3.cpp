#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

    int getLen(int n) {
        int length = 0;
        while(n) {
            n = n/10;
            length++;
        }
        return length;
    }
    
    int solve(int n) {
        if(n<=0) {
            return 0;
        }
        
        if(n<10) {
            return 1;
        }
        
        int len = getLen(n);
        int base = pow(10, len-1);
        int rem = n%base;
        int oneInBase = 0;
        int firstDigit = n/base;
        if(firstDigit==1) {
            oneInBase = n-base+1;
        }
        else {
            oneInBase = base;
        }
        return solve(rem) + oneInBase + firstDigit*solve(base-1);
    }

    int countDigitOne(int n) {
        return solve(n);
    }

    int main(){

        int n;
        cin>>n;
        int ans=countDigitOne(n);
        cout<<ans;
        return 0;

    }
