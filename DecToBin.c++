#include<bits/stdc++.h>
using namespace std;

int DecToBin(int num){
    int ans = 0 ;//this will store our final answer
    int power = 1 ;//this is used to multiply in order to get answer, 10^0,10^1,10^2

    // now loop
    while (num>0){
        int rem = num % 2;
        num /= 2;
        ans += (rem * power);
        power *= 10;
    }
    return ans;
}

int main(){
    int ExNum = 24;
    cout<< DecToBin(ExNum) <<endl;
}

