#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void swap(char** a, char ** b){
    char* tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    char **a = (char**)calloc(m, sizeof(char*));
    char **b = (char**)calloc(n, sizeof(char*));
    while(1){
        int mode;
        scanf("%d", &mode);
        if(mode == 0){
            int x, y, s;
            scanf("%d %d %d", &x, &y, &s);
            if(x == 0){
                if(y < m && a[y] == NULL){
                    a[y] = (char*)calloc(s+1, sizeof(char));
                    scanf("%s", a[y]);
                }
            } else if(x == 1) {
                if(y < n && b[y] == NULL){
                    b[y] = (char*)calloc(s+1, sizeof(char));
                    scanf("%s", b[y]);
                }
            }
        } 
        else if(mode == 1){
            int x, y;
            scanf("%d %d", &x, &y);
            if(x == 0){
                if(y < m){
                    a[y] = NULL;
                }
            } else if(x == 1){
                if(y < n){
                    b[y] = NULL;
                }
            }

        } 
        else if(mode == 2){
            int x, y;
            scanf("%d %d", &x, &y);
            if(x < m && y < n){
                swap(&(a[x]), &(b[y]));
            }
        }
        else if(mode == 3){
            break;
        }
        printf("A:\n");
        for(int i=0;i<m;i++){
            if(a[i] == NULL){
                printf("(null)\n");
            } else {
                printf("%s\n", a[i]);
            }
        }
        printf("B:\n");
        for(int i=0;i<n;i++){
            if(b[i] == NULL){
                printf("(null)\n");
            } else {
                printf("%s\n", b[i]);
            }
        }
        

    }
    return 0;
}