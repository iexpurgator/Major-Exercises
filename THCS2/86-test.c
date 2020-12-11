#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 100
#define fixbug while((getchar()) != '\n')

typedef struct {
    int id;
    char name[max];
    float inn;
    float outt;
} product;

FILE *fptr;
product SP[max];

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
    fptr = fopen("B19DCAT077.bin", "wb");
    int size = filesize();
    for(int i = size; i < size + n; ++i) {
        SP[i].id = i + 1;
        fixbug;
        // gets(SP[i].name);
        gets(SP[i].name);
        scanf("%f%f", &SP[i].inn, &SP[i].outt);
        fwrite(&SP[i], sizeof(product), 1, fptr);
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
    fread(&SP[sP.id], sizeof(product), 1, fptr);
    fseek(fptr, sizeof(product)*(sP.id-1), SEEK_SET);
    fwrite(&sP, sizeof(product), 1, fptr);
    printf("%d", sP.id);
    fclose(fptr);
}

float minus(int n){
    float sum = SP[n].outt - SP[n].inn;
    return sum;
}

void xuat(){
    fptr = fopen("B19DCAT077.bin", "rb");
    int sz = filesize();
    for(int i = 0; i < sz; ++i){
        fseek(fptr, sizeof(product)*i, SEEK_SET);
        fread(&SP[i], sizeof(product), 1, fptr);
    }
    for(int i = 0; i < sz - 1; ++i){
        for(int j = i + 1; j < sz;++j){
            if(minus(j) > minus(i)){
                product tru = SP[i];
                SP[i] = SP[j];
                SP[j] = tru;
            }
//            else if(minus(j) == minus(i) && SP[j].id < SP[i].id){
//                product tru = SP[i];
//                SP[i] = SP[j];
//                SP[j] = tru;
//            }
        }
    }
    
    for(int i = 0; i < sz; ++i){
        printf("%d %s %.2f %.2f\n", SP[i].id,SP[i].name, SP[i].inn, SP[i].outt);

    }
    fclose(fptr);
}

void xuat87(){
    fptr = fopen("B19DCAT077.bin", "rb");
    int sz = filesize();
    for(int i = 0; i < sz; ++i){
        fseek(fptr, sizeof(product)*i, SEEK_SET);
        fread(&SP[i], sizeof(product), 1, fptr);
        if(minus(i) > SP[i].inn)printf("%d %s %.2f %.2f\n", SP[i].id,SP[i].name, SP[i].inn, SP[i].outt);
    }
    fclose(fptr);
}

int main(){
    int lenh, n;
    scanf("%d", &lenh);
    switch (lenh) {
        case 1:
            scanf("%d", &n);
            nhap(n);
            break;
        case 2:
            sua();
            break;
        case 3:
            xuat87();
            // xuat();
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