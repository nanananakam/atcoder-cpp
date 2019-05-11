#include <cstdio>
#include <vector>
#include <algorithm>
#include <functional>	
using namespace std;

int main(){
    int n,m,c,answer=0;
    vector<int> b;
    vector<vector<int>> a;
    scanf("%d %d %d",&n,&m,&c);
    b.reserve(m);
    a.assign(n,vector<int>());
    for (int i=0;i<m;i++){
        int tmp;
        scanf("%d",&tmp);
        b.push_back(tmp);
    }
    for (int i=0;i<n;i++){
        a[i].reserve(m);
        for (int j=0;j<m;j++){
            int tmp;
            scanf("%d",&tmp);
            a[i].push_back(tmp);
        }
    }
    for (int i=0;i<n;i++){
        int sum = 0;
        for (int j=0;j<m;j++){
            sum += a[i][j]*b[j];
        }
        sum += c;
        if (sum > 0) {
            answer++;
        }
    }
    printf("%d\n",answer);
}