#include <stdio.h>
#include <math.h>
int main(){
    float r;
    scanf("%f",&r);
    printf("dien tich hinh cau la: %.2f\n", 4*3.14*pow(r,2) );
    printf("the tich hinh cau la: %.2f", 4.0/3*3.14*pow(r,3) );

    return 0;
}

