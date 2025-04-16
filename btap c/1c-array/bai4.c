#include <stdio.h>
#include <math.h>
int main(){
    int n,a1,d,max,min,vt1,vt2;
    printf("nhap la phai lam n=");
    scanf("%d",&n);
    int a[n];
    max=-1e9;
    min=1e9;
    for(int i=0; i<n;i++){
        scanf("%d",&a[i]);
        if (a[i]<min){
            min=a[i];
            vt1=i+1;
        }
        if (a[i]>max){
            max=a[i];
            vt2=i+1;
        }
    }
    printf("gia tri lon nhat la: %d vi tri: %d\n",max,vt2);
    printf("gia tri nho nhat la: %d vi tri: %d\n ",min,vt2);
    return 0;
}

