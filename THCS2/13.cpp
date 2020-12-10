#include<stdio.h>
#include<math.h>
int check=0;
void NT(int n) {
    if (n < 2) check = 0;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            check = 0;
            break;
        } else check = 1;
    }
}
int main(){
    int size = 0,s=0;
    int n[100][100]={0};
    scanf("%d",&size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d",&n[i][j]);
        }
    }
    
    
    for(int i=0;i<size;i++){
        for(int j=0;j<=i;j++){
            NT( n[i][j] );
            if(check==1){
                printf("%d\n",n[i][j]);
                s+=n[i][j];}
        }
    }
    printf("%d",s);
    return 0;
}

