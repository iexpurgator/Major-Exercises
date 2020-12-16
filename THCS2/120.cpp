#include <bits/stdc++.h>
#define MAX 1000000
using namespace std;

long long n;
int a[10000], b[10000] = {0};

void process()
{
    int size = 0;
    while (n != 0)
    {
        a[size] = n % 10;
        n /= 10;
        size++;
    }
    for (int i = size - 1; i >= 0; --i)
    {
        int dem = 1;
        if (b[i] == 0)
        {
            b[i] = 1; //dã xét
            for (int j = i - 1; j >= 0; --j)
            {
                if (a[i] == a[j])
                {
                    dem++;
                    b[j] = 1;
                }
            }
            cout << a[i] << " " << dem << endl;
        }
    }
}

int main()
{
    cin >> n;
    process();
    return 0;
}