#include <stdio.h>
#include <math.h>
int nhuan(int y){
    return (y%400==0)||( y%4==0 && y%100!=0);
}
int main(){
    int y,n;
    scanf("%d %d",&y,&n);
    if ( n==1||n==3||n==5||n==7||n==8||n==10||n==12)
        printf("thang %d nam %d có 31 ngay",n,y);
    else if (n==2){
            if (nhuan(y))
            printf("thang 2 nam %d có 29 ngày",y);
            else printf("thang 2 nam %d có 28 ngày",y);
        }
    else printf("thang %d nam %d có 28 ngày",n,y);
    return 0;
}



