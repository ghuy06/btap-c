#include <stdio.h>
#include <math.h>

int main(){
    long long sum=0;
    for (int i=0;i<=100;i++){
        if (i %2 !=0)
                sum+=i;
    }
    printf("%lld",sum);
    return 0;
}



