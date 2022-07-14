#include<stdio.h>

int main() {
    int n, maior = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; ++i) {
        int num;
        scanf("%d", &num);
        if(num > maior) {
            maior = num;
        }
    }
    printf("%d\n", maior);

    return 0;
}