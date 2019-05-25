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
    int a,b;
    scanf("%02d%02d",&a,&b);
    if (1<=a && a<= 12 && 1<=b && b <= 12){
        printf("AMBIGUOUS\n");
    } else if (1<=a && a<= 12) {
        printf("MMYY\n");
    } else if (1<=b && b<= 12) {
        printf("YYMM\n");
    } else {
        printf("NA\n");
    }
}