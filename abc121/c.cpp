#include <cstdio>
#include <vector>
#include <algorithm>
#include <functional>	
#include <utility>
#include <cinttypes>
using namespace std;
int main(){
    int32_t n,m;
    vector<pair<int32_t,int32_t>> a;
    scanf("%d %d",&n,&m);
    a.reserve(n);
    for (int32_t i=0;i<n;i++){
        int32_t tmp1,tmp2;
        scanf("%d %d",&tmp1,&tmp2);
        a.push_back(pair<int32_t, int32_t>(tmp1,tmp2));
    }
    sort(a.begin(),a.end(),[](pair<int32_t,int32_t> x, pair<int32_t,int32_t> y) -> int32_t {return ( x.first < y.first );});
    int32_t i = 0;
    int64_t total = 0;
    while (m > 0){
        int64_t buy_each = min(a[i].second,m);
        total += a[i].first*buy_each;
        m -= buy_each;
        i++;
    }
    printf("%" PRId64 "\n",total);
}