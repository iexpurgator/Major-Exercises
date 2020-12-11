#include<bits/stdc++.h>
using namespace std;
int main(){
    int size = 0;
    int n[100][100]={0},m[100][100]={0}, mAx=0, dem=0, cot=0, x=0;
    scanf("%d",&size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d",&n[i][j]);
        }
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++){
            m[size-i-1][j] = n[j][i];
        }
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++){
            dem+=m[i][j];
        }
        if(dem >= mAx){
            mAx = dem;
            cot = i;
            x = size -i;
        }
        dem = 0;
    }
    cout << x << endl;
    for(int j=0;j<size;j++)
        printf("%d ",m[cot][j]);
    return 0;
}