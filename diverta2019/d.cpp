#include <cstdio>
#include <vector>
#include <algorithm>
#include <functional>	
#include <utility>
#include <cinttypes>
#include <string>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int64_t n,sum;
    sum = 0;
    cin >> n;
    for (int64_t i=1;i<=sqrt(n);i++){
        if ((n%i==0)&&(n/i>1)){
            if (n%(n/i-1)==n/(n/i-1)){
            sum += n/i - 1;
            }
        }
    }
    cout << sum << endl;
}