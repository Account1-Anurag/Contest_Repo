// // #include <bits/stdc++.h>
// // #include <complex>
// // #include <queue>
// // #include <set>
// // #include <unordered_set>
// // #include <list>
// // #include <chrono>
// // #include <random>
// // #include <iostream>
// // #include <algorithm>
// // #include <cmath>
// // #include <string>
// // #include <vector>
// // #include <map>
// // #include <unordered_map>
// // #include <stack>
// // #include <iomanip>
// // #include <fstream>
// // using namespace std;

// // typedef long long ll;
// // typedef long double ld;
// // typedef pair<int,int> p32;
// // typedef pair<ll,ll> p64;
// // typedef pair<double,double> pdd;
// // typedef vector<ll> v64;
// // typedef vector<int> v32;
// // typedef vector<vector<int> > vv32;
// // typedef vector<vector<ll> > vv64;
// // typedef vector<vector<p64> > vvp64;
// // typedef vector<p64> vp64;
// // typedef vector<p32> vp32;
// // ll MOD = 998244353;
// // double eps = 1e-12;
// // #define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
// // #define all(x) (x).begin(), (x).end()
// // #define sz(x) ((ll)(x).size())
// // int main(){
// //     fast_cin();
// //     int T;
// //     cin >> T;
// //     while (T--) {
// //         int N;
// //         cin >> N;

// //         if (N == 1) {
// //             cout << 1 << "\n";
// //             continue;
// //         }

// //         v32 A(N), b(N);
// //         for (int i = 0; i < N; ++i) {
// //             A[i] = i + 1;
// //         }

// //         int p = N / 2;
// //         int index = 0;
// //         for (int i = p; i < N; ++i) {
// //             b[index++] = A[i];
// //         }

// //         for (int i = 0; i < p; ++i) {
// //             b[index++] = A[i];
// //         }
// //         for (int i = 0; i < N; ++i) {
// //             cout << A[i] << " ";
// //         }
// //         cout << endl;

// //         for (int i = 0; i < N; ++i) {
// //             cout << b[i] << " ";
// //         }
// //         cout << endl;
// //     }
// //     return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int a[n];
//         if(n==1){
//           cout<<1<<"\n"<<1<<"\n";
//           continue;
//       }
//       for(int i=0;i<n;i++){
//           a[i]=i+1;
//       }
//        for(int i=0;i<n;i++){
//              cout<<a[i]<<" ";
//       }
//       cout<<"\n";
//       int p=n/2;
//      for(int i=p+1;i<=n;i++){
//          cout<<i<<" ";
//      }
//      for(int i=1;i<=p;i++){
//          cout<<i<<" ";
//      }
//       cout<<"\n";
//     }
// }
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        float n;
        cin>>n;
        for(int i=1;i<=n;i++) cout<<i<<" ";
        cout<<endl;
        int a=ceil(n/2)+1;
        if(n<=2){
            if(n==2) for(int i=2;i>=1;i--) cout<<i<<" ";
            else for(int i=1;i<=n;i++) cout<<i<<" ";
        }
        else{
            for(int i=a;i<=n;i++) cout<<i<<" ";
            for(int i=1;i<a;i++) cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
 