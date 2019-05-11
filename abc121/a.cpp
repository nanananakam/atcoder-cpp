#include <cstdio>
#include <vector>
#include <algorithm>
#include <functional>	
using namespace std;

int main(){
    int H,W,h,w;
    scanf("%d %d",&H,&W);
    scanf("%d %d",&h,&w);
    printf("%d\n",(H-h)*(W-w));
}