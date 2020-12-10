#include<stdio.h>
int main(){
    long long n;
    scanf("%lli",&n);
    long long x=0,y=1,z=1,a;
    for(int i = 0;i<n;i++){
        if (i == 0) printf("0 ");
        else if (i == 1 || i == 2) printf("1 ");
        else{
            x = y;
            y = z;
            z = x + y;
            a = z;
            printf("%lli ",a);
        }
    }
    return 0;
}
