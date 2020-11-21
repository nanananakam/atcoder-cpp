#include <cstdio>
#include <vector>
#include <algorithm>
#include <functional>	
#include <utility>
#include <cinttypes>
#include <string>
#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

int main(){
    cout<<std::fixed<<setprecision(10);
    cin.tie(0);
   	ios::sync_with_stdio(false);
    int n,m;
    vector<int> l,r;
    cin>>n;
    cin>>m;
    l.reserve(m);
    r.reserve(m);
    for (int i=0;i<m;i++){
        int li,ri;
        cin>>li;
        cin>>ri;
        l.push_back(li);
        r.push_back(ri);
    }
    int lmax = *max_element(l.begin(),l.end());
    int rmin = *min_element(r.begin(),r.end());
    if (rmin<lmax){
        cout<<0<<"\n";
    } else {
        cout<<rmin-lmax+1<<"\n";
    }
}