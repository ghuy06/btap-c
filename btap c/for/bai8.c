#include <stdio.h>
#include <math.h>
int main() {
    long long sum=1;
    int n;
    scanf("%d",&n);
    for (int i=1; i<=n;i++){
        sum*=i;
    }
    printf("%lld",sum);
    return 0;
}

