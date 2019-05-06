#include <cstdio>
using namespace std;
int main() {
	int a[5],k;
    bool f;
    f = false;
    for (int i=0; i<5; i++) {
        scanf("%d",&a[i]);
    }
	scanf("%d", &k);
    for (int i=0;i<5;i++){
        for (int j=1;j<5-i;j++){
            if (a[i]-a[j]>k || a[j]-a[i]>k){
                f = true;
            }
        }
    }
    if (f) {
        printf(":(\n");
    } else {
        printf("Yay!\n");
    }
}