#include <stdio.h>
#include <math.h>
int shh(int n) {
    int sum=0;
    for (int i=1; i<=sqrt(n);i++){
        if (n %i==0){
            sum+=i+n/i;
        }
    }
    int x = sqrt(n);
    if (x*x==n) sum-=n;
    if (sum==n*2) return 1;
    else return 0;
}
int main() {
    int a;
    scanf("%d", &a);
    if (shh(a))
        printf("%d la so hoan hao\n", a);
    else
        printf("%d khong la so hoan hao\n", a);
    return 0;
}
