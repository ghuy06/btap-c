#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d", &a,&b);

    printf("phep cong %d+%d=%d\n", a, b, a+b  );
    printf("phep tru %d-%d=%d\n", a, b, a-b  );
    printf("phep nhan %dx%d=%d\n", a, b, a*b  );
    printf("phep chia %d:%d=%d", a, b, a/b  );
    return 0;
}

