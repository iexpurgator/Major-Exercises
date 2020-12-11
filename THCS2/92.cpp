#include <bits/stdc++.h>
#define enter printf("\n")

using namespace std;

int LP(int x){
	int check = 0;
	int rev = 0, n = x, sum = 0;
	while(n>0){
        if(n%10==6) check =1;
        sum += n%10;
        rev = rev*10 + n%10;
        n/=10;
    }
    if(check == 1 && rev == x && sum%10 == 8) return 1;
	return 0;
}

int main(){
    int a, b, dem = 0;
    scanf("%d%d",&a, &b);
    if(a > b) {
    	int tmp = a;
    	a = b; b = tmp;
	}
	for(int i = a; i <= b; ++i){
		if(LP(i)) printf("%d ",i);
	}
    return 0;
}
