#include <cstdio>
#include <algorithm>
using namespace std;
int main() {
	long a[5],n;
    scanf("%ld",&n);
    for (int i=0; i<5; i++) {
        scanf("%ld",&a[i]);
    }
    sort(a,a+5);
    if (n%a[0]==0){
        printf("%ld\n",n/a[0]+4);
    } else{
        printf("%ld\n",n/a[0]+5);
    }
}