#include<stdio.h>
#include<string.h>

void xoa(char s[], char s1[]) {
    char kq[100];
    int t = 0, i = 0, j, k, ns1 = strlen(s1);
    strcat(s, "|");
    while (s[i] != '|') {
        k = i;
        j = 0;
        while (s[k] == s1[j]) {
            k++;
            j++;
        }
        if (j == ns1) {
            i = ns1 + i;
        } else {
            kq[t++] = s[i++];
        }
    }
    for(int i = 0; i < t; i++)
		printf("%c", kq[i]);
}

void sapxep(char s[]) {
    char ds[20][10], t[10];
    int n = 0;
    char * p = strtok(s, " ");
    while (p != NULL) {
        strcpy(ds[n++], p);
        p = strtok(NULL, " ");
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(ds[i], ds[j]) > 0) {
                strcpy(t, ds[i]);
                strcpy(ds[i], ds[j]);
                strcpy(ds[j], t);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%s ", ds[i]);
    }
}

void tach(char hoten[]) {
   char *token;
   token = strtok(hoten, " ");
   int c=0;
   char mang[5][15];
   while( token != NULL )
   {
      printf( " %s\n", token );
      strcpy(mang[c],token);
      c++;
      token = strtok(NULL, " ");
   }
   for(int i = 0; i < c;i++){
    printf("%s ",mang[i]);
   }
   return(0);
}

int main() {
    char s1[100], s2[100];
    fgets(s1, 100, stdin);
    fgets(s2, 100, stdin);
    xoa(s1, s2);
    return 0;
}
