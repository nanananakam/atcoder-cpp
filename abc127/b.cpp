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
    long long r,d,x;
    cin>>r;
    cin>>d;
    cin>>x;
    for (int i=1;i<=10;i++){
        x = r*x-d;
        cout<<x<<"\n";
    }
}