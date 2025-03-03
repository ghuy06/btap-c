#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,x1,x2,delta;
    scanf("%f %f %f", &a, &b, &c);
    delta=b*b-4*a*c;
    if(delta >0){
        x1=(-b-sqrt(delta))/(2*a);
        x2=(-b+sqrt(delta))/(2*a);
        printf("phuong trinh co hai nghiem x1=%f x2=%f",x1,x2);
    }
    else if (delta =0) printf("phuong trinh co nghiem kep x=",-b/(2*a));
    else printf("phuong trinh vo nghiem");
    return 0;
}



