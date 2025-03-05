#include <stdio.h>
#include <math.h>
int ucln(int x,int y){
    int r=x%y;
    while (r!=0){
       x=y;
       y=r;
       r=x %y;
    }
    return y;
}
int bcnn(int h,int t){
return (h*t)/ucln(h,t);
}

int main(){
    int a,b;
   scanf("%d %d",&a,&b);
   printf("uoc chung lon nhat cua %d va %d la %d\n",a,b,ucln(a,b));
   printf("boi chung nho nhat cua %d va %d la %d",a,b,bcnn(a,b));

    return 0;
}




