#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 100
typedef struct {
    int id;
    char name[max];
    float inn;
    float outt;
} product;

FILE *fptr;
product SP;
int a[max];
float b[max];

int filesize(){
    FILE *fptr = fopen("B19DCAT077.bin", "rb");
    int dem = 0, tmp = fgetc(fptr);
    while ((tmp = fgetc(fptr)!= EOF)){
        dem++;
        fseek(fptr,sizeof(product)*dem, SEEK_SET);
    }
    fclose(fptr);
    return dem;
}

void nhap(int n){
    fptr = fopen("B19DCAT077.bin", "ab");
    int size = filesize();
    for(int i = 1; i <= n; ++i) {
        SP.id = size + i;
        gets(SP.name);
        gets(SP.name);
        scanf("%f%f", &SP.inn, &SP.outt);
        fwrite(&SP, sizeof(product), 1, fptr);
    }
    printf("%d", n);
    fclose(fptr);
}

void sua(){
    product sP;
    scanf("%d\n", &sP.id);
    gets(sP.name);
    scanf("%f%f", &sP.inn, &sP.outt);
    fptr = fopen("B19DCAT077.bin", "rb+");
    while(fread(&SP, sizeof(product), 1, fptr)){
        if(sP.id == SP.id){
            fseek(fptr, (int) - sizeof(product), SEEK_CUR);
            fwrite(&sP, sizeof(product), 1, fptr);
            break;
        }
    }
//    fseek(fptr,sizeof(product)*(sP.id),SEEK_SET);
//    fwrite(&sP, sizeof(product), 1, fptr);
    printf("%d", sP.id);
    fclose(fptr);
}

void process(){
    product sP;
    fptr = fopen("B19DCAT077.bin", "rb");
    int x = 0, n = filesize();
    while(fread(&sP, sizeof(product), 1, fptr)){
        a[x] = sP.id;
        b[x] = sP.outt - sP.inn;
        x++;
    }
    for(int i = 0; i < n; ++i){
        for(int j = i + 1; j < n;++j){
            if(b[j] > b[i]){
                int id = a[i];
                a[i] = a[j];
                a[j] = id;
                float delta = b[i];
                b[i] = b[j];
                b[j] = delta;
            }
        }
    }
//    for(int i = 0; i < n; ++i)
//        printf("%d ", a[i]);
//    printf("\n");
    fclose(fptr);
}

void xuat(){
    product sP;
    fptr = fopen("B19DCAT077.bin", "rb");
    int sz = filesize();
    for(int i = 0; i < sz; ++i){
        fseek(fptr, sizeof(product)*(a[i]-1), SEEK_SET);
        fread(&sP, sizeof(product), 1, fptr);
        if(b[i] > sP.inn)printf("%d %s %.2f %.2f\n", sP.id,sP.name, sP.inn, sP.outt);
    }
    fclose(fptr);
}

void print(){
    printf("\n==========\n");
    product sP;
    fptr = fopen("B19DCAT077.bin", "rb");
    while(fread(&sP, sizeof(product), 1, fptr)){
        printf("%d %s %.1f %.1f\n", sP.id,sP.name, sP.inn, sP.outt);
    }
    fclose(fptr);
    printf("\n\n");
}

int main(){
    int lenh, n;
    scanf("%d", &lenh);
    switch (lenh) {
        case 1:
            scanf("%d", &n);
            nhap(n);
//            print();
            break;
        case 2:
            sua();
//            print();
            break;
        case 3:
            process();
            xuat();
            break;
        case 0:
            print();
            break;
        case 127:
            // clear data in file
            fptr = fopen("B19DCAT077.bin", "wb");
            fptr = freopen(NULL, "wb", fptr);
            fclose(fptr);
            printf("Delete completed!");
        default:
            printf("");
            break;
    }
    return 0;
}