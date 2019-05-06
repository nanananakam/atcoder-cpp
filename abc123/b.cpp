#include <cstdio>
using namespace std;
int main() {
    //a:入力 last_i:最後に注文する料理番号 sum:合計時間 
	int a[5],last_i,tmp,sum;
    for (int i=0; i<5; i++) {
        scanf("%d",&a[i]);
    }
    tmp = __INT32_MAX__;
    for (int i=0; i<5; i++){
        int tmp2 = a[i]%10;
        if (tmp2 == 0){
            tmp2 = 10;
        }
        if (tmp2<tmp){
            tmp = tmp2;
            last_i = i;
        }
    }
    sum = 0;
    for (int i=0;i<5;i++){
        if ( i!=last_i && a[i]%10>0 ){
            sum += a[i]+(10-a[i]%10);
        } else {
            sum += a[i];
        }
    }
    printf("%d\n",sum);
}