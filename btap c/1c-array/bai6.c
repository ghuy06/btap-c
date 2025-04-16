#include <stdio.h>
#include <math.h>
int main(){
    int n,x,d;
    printf("nhap la phai lam n=");
    scanf("%d",&n);
    int a[n];
   d=0;
    for(int i=0; i<n;i++){
        scanf("%d",&a[i]);
        if (a[i]<0) a[i]=0;
    }
    for (int i=0; i<n;i++)
        printf("%d ",a[i]);
    return 0;
}

