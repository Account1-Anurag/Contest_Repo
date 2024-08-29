#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// Returns factorial of n
long fact(int n)
{
      if(n==0)
      return 1;
    long res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
long nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
int catalan(int n){
    return nCr(2*n,n)/(n+1);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    cout<<catalan(n)<<"\n";
    return 0;
}