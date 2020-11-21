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
    int a,b;
    cin>>a;
    cin>>b;
    if (a<=5){
        cout<<0<<"\n";
    } else if(a<=12){
        cout<<b/2<<"\n";
    } else {
        cout<<b<<"\n";
    }
}