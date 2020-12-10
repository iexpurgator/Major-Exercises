#include<stdio.h>

int main(){
    int size = 0;
    int n[100][100]={0};
    scanf("%d",&size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            n[i][j] = i - j + 1;
            if (j == i)
                n[i][j] = 1;
            if (j > i)
                n[i][j] = j - i + 1;
        }
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++)
            printf("%d ",n[i][j]);
        printf("\n");
    }
    return 0;
}
