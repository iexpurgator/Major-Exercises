#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 100

typedef struct
{
    int id;
    char name[max];
    float diem[3];
    int tongSV;
} sinhVien;

FILE *fptr;
sinhVien SV;

int filesize()
{
    FILE *fptr = fopen("B19DCAT077.bin", "rb");
    int dem = 0, tmp = fgetc(fptr);
    while (tmp = fgetc(fptr) != EOF)
    {
        dem++;
        fseek(fptr, sizeof(sinhVien) * dem, SEEK_SET);
    }
    fclose(fptr);
    return dem;
}

void nhap(int n)
{
    fptr = fopen("B19DCAT077.bin", "ab");
    int size = filesize();
    for (int i = 1; i <= n; ++i)
    {
        SV.id = size + i;
        gets(SV.name);
        gets(SV.name);
        for (int i = 0; i < 3; i++)
        {
            scanf("%f", &SV.diem[i]);
        }
        fwrite(&SV, sizeof(sinhVien), 1, fptr);
    }
    printf("%d", n);
    fclose(fptr);
}

void sua()
{
    sinhVien sV;
    scanf("%d\n", &sV.id);
    gets(sV.name);
    for (int i = 0; i < 3; i++)
    {
        scanf("%f", &sV.diem[i]);
    }
    fptr = fopen("B19DCAT077.bin", "ab");
    fseek(fptr, sizeof(sinhVien) * (sV.id), SEEK_SET);
    fwrite(&sV, sizeof(sinhVien), 1, fptr);
    printf("%d", sV.id);
    fclose(fptr);
}

void xuat()
{
    sinhVien sV;
    int i = 0;
    fptr = fopen("B19DCAT077.bin", "rb");
    while (fread(&sV, sizeof(sinhVien), 1, fptr))
    {
        if (sV.diem[0] < sV.diem[1] && sV.diem[1] < sV.diem[2])
        {
            printf("%d %s", sV.id, sV.name);
            for (int i = 0; i < 3; i++)
            {
                printf(" %.1f", sV.diem[i]);
            }
            printf("\n");
        }
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
        printf("");
        break;
    }
    return 0;
}