#include <cstdio>
#include <vector>
#include <algorithm>
#include <functional>	
#include <utility>
#include <cinttypes>
#include <string>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <numeric>
#include <deque>
using namespace std;

int main(){
    cout<<std::fixed<<setprecision(10);
    cin.tie(0);
   	ios::sync_with_stdio(false);
    int n,m;
    long long sum = 0ll;
    vector<int> a;
    vector<pair<int,int>> bc;
    cin>>n;
    cin>>m;
    a.reserve(n);
    bc.reserve(m);
    for (int i=0;i<n;i++){
        int ai;
        cin>>ai;
        a.push_back(ai);
    }
    for (int i=0;i<m;i++){
        int bi,ci;
        cin>>bi;
        cin>>ci;
        bc.push_back(pair<int,int>(bi,ci));
    }
    sort(a.begin(),a.end());
    sort(bc.begin(),bc.end(),[](pair<int,int>p1, pair<int,int>p2) -> int { return ( p1.second > p2.second ); } );
    int start = 0;
    for (int i=0;i<m;i++){
        for (int j=0;j<bc[i].first;j++){
            if (a[start]<bc[i].second){
                sum += bc[i].second;
                start ++;
                if (start >= n){
                    goto finish;
                }
            } else {
                break;
            }
        }
    }
    for (int i=start;i<n;i++){
        sum += a[i];
    }
finish:
    cout<<sum<<"\n";
}