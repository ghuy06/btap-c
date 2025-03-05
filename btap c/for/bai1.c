#include <stdio.h>
#include <math.h>

int main(){
    int a[10];
    long long sum=0;
    for (int i=0;i<10;i++){
            scanf("%d",&a[i]);
            sum+=a[i];
    }
    printf("%lld",sum);
    return 0;
}



