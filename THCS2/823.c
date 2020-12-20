#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 100
#define fixbug while ((getchar()) != '\n')

typedef struct
{
    int id;
    char name[max];
    float Aa;
    int Bb;
} product;

FILE *fptr;
product SP[max];

int filesize()
{
    FILE *fptr = fopen("B19DCAT077.bin", "rb");
    int dem = 0, tmp = fgetc(fptr);
    while ((tmp = fgetc(fptr) != EOF))
    {
        dem++;
        fseek(fptr, sizeof(product) * dem, SEEK_SET);
    }
    fclose(fptr);
    return dem;
}

void nhap(int n)
{
    fptr = fopen("B19DCAT077.bin", "wb");
    int size = filesize();
    for (int i = size; i < size + n; ++i)
    {
        SP[i].id = i + 1;
        fixbug;
        // gets(SP[i].name);
        gets(SP[i].name);
        scanf("%f%d", &SP[i].Aa, &SP[i].Bb);
        fwrite(&SP[i], sizeof(product), 1, fptr);
    }
    printf("%d", n);
    fclose(fptr);
}

void sua()
{
    product sP;
    scanf("%d\n", &sP.id);
    gets(sP.name);
    scanf("%f%d", &sP.Aa, &sP.Bb);
    fptr = fopen("B19DCAT077.bin", "rb+");
    fread(&SP[sP.id], sizeof(product), 1, fptr);
    fseek(fptr, sizeof(product) * (sP.id - 1), SEEK_SET);
    fwrite(&sP, sizeof(product), 1, fptr);
    printf("%d", sP.id);
    fclose(fptr);
}

int minus(int n)
{
    int sum = SP[n].Aa;
    return sum;
}

void xuat()
{
    fptr = fopen("B19DCAT077.bin", "rb");
    int sz = filesize();
    for (int i = 0; i < sz; ++i)
    {
        fseek(fptr, sizeof(product) * i, SEEK_SET);
        fread(&SP[i], sizeof(product), 1, fptr);
    }
    for (int i = 0; i < sz - 1; ++i)
    {
        for (int j = i + 1; j < sz; ++j)
        {
            if (minus(j) > minus(i))
            {
                product tru = SP[i];
                SP[i] = SP[j];
                SP[j] = tru;
            }
        }
    }

    for (int i = 0; i < sz; ++i)
    {
        printf("%d %s %.1f %d\n", SP[i].id, SP[i].name, SP[i].Aa, SP[i].Bb);
    }
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
        sua();
        break;
    case 3:
        xuat();
        break;
    default:
        fptr = fopen("B19DCAT077.bin", "wb");
        fptr = freopen(NULL, "wb", fptr);
        fclose(fptr);
        printf("Delete completed!\n");
        break;
    }
    return 0;
}