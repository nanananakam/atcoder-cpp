#include <cstdio>
#include <vector>
#include <algorithm>
#include <functional>	
using namespace std;
int main() {
    int x[3],k;
    vector<vector<long>> a;
    a.assign(3,vector<long>());
    vector<long> answer;
    for (int i=0;i<3;i++){
        scanf("%d",&x[i]);
    }
    scanf("%d",&k);
    answer.reserve(k*2);
    for (int i=0;i<3;i++){
        a[i].reserve(x[i]);
        for (int j=0;j<x[i];j++){
            long tmp;
            scanf("%ld",&tmp);
            a[i].push_back(tmp);
        }
    }
    sort(a.begin(),a.end(),[](vector<long> v1, vector<long>v2) -> int { return ( v1.size() < v2.size() ); } );
    for (int i=0;i<3;i++){
        sort(a[i].begin(),a[i].end(),greater<long>());
    }
    int i0,i1,i2;
    long min = __LONG_MAX__;
    i0 = i1 = i2 = 0;
    while (i0 < a[0].size() ){
        long tmp = a[0][i0] + a[1][i1] + a[2][i2];
        if (answer.size() < k ) {
            if (tmp < min) {
                min = tmp;
            }
            answer.push_back(tmp);
            i2 ++;
        } else if (min < tmp ) {
            swap(*(min_element(answer.begin(),answer.end())),tmp);
            min = *(min_element(answer.begin(),answer.end()));
            i2 ++;
        } else {
            i2 = 0;
            i1 ++;
        }
        if (i2>=a[2].size()) {
            i2 = 0;
            i1 ++;
        }
        if (i1>=a[1].size()) {
            i1 = 0;
            i0 ++;
        }
    }
    sort(answer.begin(),answer.end(),greater<long>());
    for (int i=0;i<answer.size();i++){
        printf("%ld\n",answer[i]);
    }
}