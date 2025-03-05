#include <stdio.h>
#include <math.h>
int main() {
    double sum1=0;
    int a[1000];
    int n;
    scanf("%d",&n);
    a[1]=a[2]=1;
    for (int j=3; j<=n;j++){
        a[j]=a[j-1]+a[j-2];
    }
    printf("%d",a[n]);
    return 0;
}

