#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define MOD 1000000007
#define MAX 100000
using namespace std;

int lbs( int arr[], int n ) { 
   int i, j; 
   int *lis = new int[n]; 
   for (i = 0; i < n; i++) 
      lis[i] = 1; 
   for (i = 1; i < n; i++) 
      for (j = 0; j < i; j++) 
         if (arr[i] > arr[j] && lis[i] < lis[j] + 1) 
            lis[i] = lis[j] + 1; 
   int *lds = new int [n]; 
   for (i = 0; i < n; i++) 
      lds[i] = 1; 
   for (i = n-2; i >= 0; i--) 
      for (j = n-1; j > i; j--) 
         if (arr[i] > arr[j] && lds[i] < lds[j] + 1) 
            lds[i] = lds[j] + 1; 
   int max = lis[0] + lds[0] - 1; 
   for (i = 1; i < n; i++) 
     if (lis[i] + lds[i] - 1 > max) 
         max = lis[i] + lds[i] - 1; 
   return max; 
}

int main(int T, const char * argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> T;
    while (T--) {
        int n; cin >> n;
        int a[n];
        for (int i= 0; i < n; ++i)
        	cin >> a[i];
        cout << lbs(a, n) << endl;
    }
    return 0;
}
