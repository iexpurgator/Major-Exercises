#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

void kiemtra(char c[100], char a)
{
    int dem_nt = 0;
    for (int i = 0; i < strlen(c); ++i)
    {
        if (c[i] == a)
            dem_nt++;
    }
    cout << a << " " << dem_nt << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    char c[100];
    int check[4] = {0, 0, 0, 0};
    gets(c);
    for (int i = 0; i < strlen(c); ++i)
    {
        switch (c[i])
        {
        case '2':
            if (check[0] != 0)
                break;
            kiemtra(c, '2');
            check[0] = 1;
            break;
        case '3':
            if (check[1] != 0)
                break;
            kiemtra(c, '3');
            check[1] = 1;
            break;
        case '5':
            if (check[2] != 0)
                break;
            kiemtra(c, '5');
            check[2] = 1;
            break;
        case '7':
            if (check[3] != 0)
                break;
            kiemtra(c, '7');
            check[3] = 1;
            break;
        default:
            break;
        }
    }
}