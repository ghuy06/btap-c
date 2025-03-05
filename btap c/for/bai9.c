#include <stdio.h>
#include <math.h>
long long giaithua(int n){
    long long sum=1;
    for (int i=1; i<=n;i++){
        sum*=i;
    }
    return sum;
}
int main() {
    double sum1=0;
    int a;
    scanf("%d",&a);
    for (int j=1; j<=a;j++){
        sum1+=1.0/giaithua(j);
    }
    printf("%.6lf",sum1);
    return 0;
}

