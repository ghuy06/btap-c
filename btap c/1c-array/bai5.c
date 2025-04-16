#include <stdio.h>
#include <math.h>
int main(){
    int n,x,d;
    printf("nhap la phai lam n=");
    scanf("%d %d",&n,&x);
    int a[n];
   d=0;
    for(int i=0; i<n;i++){
        scanf("%d",&a[i]);
        if (a[i]==x) d++;
    }
    printf("pha tu %d xuat hien %d lan",x,d);
    return 0;
}

