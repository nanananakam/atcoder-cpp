#include <cstdio>
#include <vector>
#include <algorithm>
#include <functional>	
#include <utility>
#include <cinttypes>
#include <string>
#include <iostream>
using namespace std;
int main(){
    int n,counter = 0;
    cin.tie(0);
   	ios::sync_with_stdio(false);
    cin >> n;
    vector<string> s;
    s.reserve(n);
    for (int i=0;i<n;i++){
       string tmp;
       cin >> tmp;
       s.push_back(tmp);
       for (int i=0;i<tmp.length()-1;i++){
           if (tmp.substr(i,2) == "AB"){
               counter++;
           }
       }
    }
    int left_b = 0;
    int right_a = 0;
    int left_b_right_a = 0;
    for (int i= 0;i<n;i++){
        if (s[i][0] == 'B'){
            left_b ++;
        }
        if (s[i][s[i].length()-1] == 'A'){
            right_a ++;
        }
        if ((s[i][0] == 'B')&&(s[i][s[i].length()-1] == 'A')){
            left_b_right_a++;
        }
    }
    if ((left_b == right_a)&&(left_b == left_b_right_a)){
        counter += max(left_b-1,0);
    } else {
        counter += min(left_b,right_a);
    }
    printf("%d\n",counter);
}