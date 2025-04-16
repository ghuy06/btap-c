#include <stdio.h>
#include <math.h>
void swap(int *g,int*h){
    int tmp=*g;
    *g=*h;
    *h=tmp;
}
void sort(int a[],int n){
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++)
            if (a[i]>a[j]) swap(&a[i],&a[j]);
    }
}
int main(){
    int n,x,d;
    printf("nhap la phai lam n=");
    scanf("%d",&n);
    int a[n];
    d=0;
    for(int i=0; i<n;i++)
        scanf("%d",&a[i]);
    sort(a,n);
    for(int i=0; i<n;i++)
        printf("%d ",a[i]);

    return 0;
}

