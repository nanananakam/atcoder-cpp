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
    int n,k;
    string s;
    cin >> n;
    cin >> k;
    cin >> s;
    s[k-1] = s[k-1] + 'a' - 'A';
    cout << s << endl;
}