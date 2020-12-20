#include <stdio.h>

void in(int x[][20],int n,int m=0){
    if(m == 0)
        m = n;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            scanf("%d",&x[i][j]);
        }
    }
}

void out(int x[][20],int n,int m=0){
    if(m == 0)
        m = n;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            printf("%d ",x[i][j]);
        }
        printf("\n");
    }
}


void check(int x[][20],int n, int m,int a,int b){
    a=a-1;
    b=b-1;
    if(m == 0)
        m=n;
    int temp;
    for(int i=0 ; i<n ; i++){
        temp = x[a][i];
        x[a][i] = x[b][i];
        x[b][i] = temp;
    }
}

int main(){
    int x[20][20],n,m,a,b;
    scanf("%d",&n);
    scanf("%d",&m);
    in(x,n,m);
    scanf("%d",&a);
    scanf("%d",&b);
    check(x,n,m,a,b);
    out(x,n,m);
    
    
    return 0;
}
