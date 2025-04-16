#include <stdio.h>
#include <math.h>
int main(){
    int n,a1,d;
    printf("nhap la phai lam n=");
    scanf("%d",&n);
    int a[n];
    long long sum,suma,sumd;
    sum=suma=sumd=0;
    a1=d=0;
    for(int i=0; i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
        if (a[i]>=0){
            sumd+=a[i];
            d++;
        }
        else{
            suma+=a[i];
            a1++;
        }
    }
    printf("tong cua cac so la: %lld\n",sum);
    printf("tong cua cac so duong la: %lld\n",sumd);
    printf("tong cua cac so am la: %lld\n",suma);
    printf("trung binh cong cua cac so la: %.2lf\n", (float)sum/n);
    printf("trung binh cong cua cac so duong la: %.2lf\n", (float)sumd/d);
    printf("trung binh cong cua cac so am la: %.2lf\n", (float)suma/a1);
    return 0;
}

