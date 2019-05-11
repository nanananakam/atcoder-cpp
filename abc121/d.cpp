#include <cstdio>
#include <vector>
#include <algorithm>
#include <functional>	
#include <utility>
#include <cinttypes>
using namespace std;
int main(){
    int64_t a,b,answer;
    scanf("%" PRId64 " %" PRId64 ,&a,&b);
    if (a%2==0){
        answer = b-(b-a)%4;
        for( int64_t i = b-(b-a)%4 + 1 ; i<=b ; i++ ) {
            answer = answer ^ i;
        }
    } else {
        answer = a;
        for( int64_t i = b-(b-(a+1))%4  ; i<=b ; i++ ) {
            answer = answer ^ i;
        }
    }
    printf("%" PRId64 ,answer);
}