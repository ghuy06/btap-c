#include <stdio.h>
#include <math.h>
int main(){
    int n;
    int a[10];
    for(int i=0; i<10;i++){
        printf("nhap a[%d]=",i+1);
        scanf("%d",&a[i]);
    }

    for(int i=9; i>=0;i--)
        printf("%d ",a[i]);
    return 0;
}

