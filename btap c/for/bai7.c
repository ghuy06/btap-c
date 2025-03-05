#include <stdio.h>
#include <math.h>
int main() {
    float sum=0;
    int n;
    scanf("%d",&n);
    for (int i=1; i<=n;i++){
        sum+=1.0/i;
    }
    printf("%f",sum);
    return 0;
}
