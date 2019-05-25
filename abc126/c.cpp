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
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    double log2k = log2(k);
    double p = 0;
    for (int i=1;i<=n;i++){
        double coin_up = ceil(log2k -log2(i));
        if (coin_up < 1) {
            p += double(1)/n;
        } else {
            p += pow((double(1)/2),coin_up)/n;
        }
    }
    std::cout<<std::fixed<<std::setprecision(10);
    std::cout<<p<<std::endl;
}