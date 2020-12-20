#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 100
#define fixbug while ((getchar()) != '\n')

typedef struct
{
    int id;
    char name[max];
    int Khoan, Tien;
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
        scanf("%d", &SP[i].Khoan);
        if (SP[i].Khoan == 1)
            thu++;
        else if (SP[i].Khoan == 2)
            chi++;
        fixbug;
        // gets(SP[i].name);
        gets(SP[i].name);
        scanf("%d", &SP[i].Tien);
        fwrite(&SP[i], sizeof(product), 1, fptr);
    }
    printf("%d %d", thu, chi);
    fclose(fptr);
}

void sua()
{
    product sP;
    scanf("%d", &sP.id);
    scanf("%d", &sP.Khoan);
    fixbug;
    gets(sP.name);
    scanf("%d", &sP.Tien);
    fptr = fopen("B19DCAT077.bin", "rb+");
    fread(&SP[sP.id], sizeof(product), 1, fptr);
    fseek(fptr, sizeof(product) * (sP.id - 1), SEEK_SET);
    fwrite(&sP, sizeof(product), 1, fptr);
    printf("%s", sP.name);
    fclose(fptr);
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
    int thu = 0, chi = 0;
    for (int i = 0; i < sz; ++i)
    {
        if (SP[i].Khoan == 1)
            thu += SP[i].Tien;
        else if (SP[i].Khoan == 2)
            chi += SP[i].Tien;
    }

    printf("%d %d %d\n", thu, chi, thu - chi);
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