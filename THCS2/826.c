#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 100
#define fixbug while ((getchar()) != '\n')

typedef struct
{
    int id;
    char name[max];
    char author[max];
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
    int size = filesize(), thu = 0, chi = 0;
    for (int i = size; i < size + n; ++i)
    {
        SP[i].id = i + 1;
        if (i == size)
            fixbug;
        gets(SP[i].author);
        gets(SP[i].name);
        fwrite(&SP[i], sizeof(product), 1, fptr);
    }
    printf("%d", n);
    fclose(fptr);
}

void sua()
{
    product sP;
    char c[max];
    int cid = 0;
    fixbug;
    gets(c);
    gets(sP.author);
    gets(sP.name);
    fptr = fopen("B19DCAT077.bin", "rb+");
    int sz = filesize();
    for (int i = 0; i < sz; ++i)
    {
        fseek(fptr, sizeof(product) * i, SEEK_SET);
        fread(&SP[i], sizeof(product), 1, fptr);
    }
    for (int i = 0; i < filesize(); ++i)
    {
        int dem = 0;
        if (strlen(SP[i].author) == strlen(c))
        {
            for (int j = 0; j < strlen(c); ++j)
            {
                if (c[j] == SP[i].author[j])
                    dem++;
            }
            if (dem == strlen(c))
            {
                cid = i;
                break;
            }
        }
    }

    sP.id = cid + 1;
    fseek(fptr, sizeof(product) * (cid), SEEK_SET);
    fwrite(&sP, sizeof(product), 1, fptr);
    printf("%s", sP.author);
    fclose(fptr);
}

void xuat()
{
    product sP;
    fixbug;
    gets(sP.author);
    fptr = fopen("B19DCAT077.bin", "rb");
    int sz = filesize();
    for (int i = 0; i < sz; ++i)
    {
        fseek(fptr, sizeof(product) * i, SEEK_SET);
        fread(&SP[i], sizeof(product), 1, fptr);
    }

    for (int i = 0; i < sz; ++i)
    {
        int dem = 0;
        for (int j = 0; j < strlen(sP.author); ++j)
        {
            if (SP[i].author[j] == sP.author[j])
                dem++;
        }
        if (dem == strlen(sP.author))
            printf("%d %s %s\n", SP[i].id, SP[i].name, SP[i].author);
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
/*
1
2
b17dccn111
nguyen van a
b17dcvt112
nguyen van b

2
b17dccn111
b17dcvt113
tran van nam

3
b17dcvt
*/