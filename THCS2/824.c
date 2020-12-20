#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 100
#define fixbug while (getchar() != '\n')

typedef struct
{
    int id;
    char name[max], author[max];
    float price;
} product;

FILE *fptr;
product SP[max];

void nhap(int n)
{
    fptr = fopen("B19DCAT077.bin", "wb");
    for (int i = 0; i < n; ++i)
    {
        SP[i].id = i + 1;
        fixbug;
        gets(SP[i].name);
        gets(SP[i].author);
        scanf("%f", &SP[i].price);
        fwrite(&SP[i], sizeof(product), 1, fptr);
    }
    printf("%d", n);
    fclose(fptr);
}

void sua(int n)
{
    fptr = fopen("B19DCAT077.bin", "rb+");
    product sP;
    sP.id = n;
    fixbug;
    gets(sP.name);
    gets(sP.author);
    scanf("%f", &sP.price);
    fread(&SP[sP.id], sizeof(product), 1, fptr);
    fseek(fptr, sizeof(product) * (sP.id - 1), SEEK_SET);
    fwrite(&sP, sizeof(product), 1, fptr);
    printf("%s", sP.name);
    fclose(fptr);
}

void xuat()
{
    fptr = fopen("B19DCAT077.bin", "rb");
    int sz = 0;
    while (fread(&SP[sz], sizeof(product), 1, fptr))
        sz++;
    for (int i = 0; i < sz - 1; ++i)
    {
        for (int j = sz - 1; j > i; --j)
        {
            if (SP[j - 1].price > SP[j].price)
            {
                product sWap = SP[j - 1];
                SP[j - 1] = SP[j];
                SP[j] = sWap;
            }
        }
    }
    for (int i = 0; i < sz; ++i)
        printf("%d %s %.2f %s\n", SP[i].id, SP[i].name, SP[i].price, SP[i].author);
    fclose(fptr);
}

int main()
{
    int lenh, n;
    scanf("%d", &lenh);
    switch (lenh)
    {
    case 1:
        scanf("%d", &n);
        nhap(n);
        break;
    case 2:
        scanf("%d", &n);
        sua(n);
        break;
    case 3:
        xuat();
        break;
    default:
        return 0;
    }
    return 0;
}
