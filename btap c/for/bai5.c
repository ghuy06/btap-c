#include <stdio.h>
#include <math.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i=1; i<=sqrt(a);i++){
        if (a % i==0){
            if ( i==a /i)
            printf("%d ",i);
            else printf("%d %d ",i,a/i);
        }
    }
}



