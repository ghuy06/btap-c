#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    if ((a+b>c)&&(a+c>b)&&(c+b>a)){
        if (a==b&& b==c){
            printf("tam giac deu\n");
        }
        else if ((a*a==b*b+c*c)||(c*c==b*b+a*a)||(b*b==c*c+a*a)){
            if ((b==c)||(a==b)||(c==a))
                printf("tam giac vuong can\n");
            else printf("tam giac vuong\n");
        }
        else if ((a==b)||(b==c)||(a==c)) printf("tam giac can\n");
        else printf("tam giac thuong\n");
        double chuvi=a+b+c;
        double p=chuvi/2;
        double dientich=sqrt(p*(p-a)*(p-b)*(p-c));
        printf("chu vi tam giac: %.2lf\ndien tich tam giac: %.2lf", chuvi, dientich);
    }
    else printf("khong la tam giac");
    return 0;
}


