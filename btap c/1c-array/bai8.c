#include <stdio.h>
#include <math.h>
int main(){
    int n,x,d,m,i,j,k;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&m);
    int b[m];
    for(int i=0; i<n;i++)
        scanf("%d",&b[i]);
    int c[n+m+1];
    i=j=k=0;
    while (i<n && j<m){
        if (a[i]<b[j]){
            c[k]=a[i];
            i++;
        }
        else {
            c[k]=b[j];
            j++;
        }
        k++;
    }
    while (i<n){
        c[k]=a[i];
        i++;k++;
    }
    while (j<m){
        c[k]=b[j];
        j++;k++;
    }
    for (int i=0;i<n+m;i++)
        printf("%d ",c[i]);
    return 0;
}

