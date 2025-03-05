#include <stdio.h>
#include <math.h>
int nt(int x){
    if (x<=1) return 0;
    else if (x==2) return 1;
    else{
        for (int j=2;j<=sqrt(x);j++)
            if (x % j==0) return 0;
    }
    return 1;
}
int main(){
    int a;
    scanf("%d",&a);
    if (nt(a))  printf("%d la so nt",a);
    else printf("%d khong la so nt",a);
    return 0;
}









