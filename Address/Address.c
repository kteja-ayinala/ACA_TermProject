//
// Created by Krishna Teja Ayinala on 2019-05-28.
//

//block address
//tag
//index
//offset

#include<stdio.h>
#include<stdlib.h>

int convertAddressToBinary(int Addr) {
    int a[10], n, i;
    system("cls");
    printf("Enter the number to convert: ");
    scanf("%d", &n);
    for (i = 0; n > 0; i++) {
        a[i] = n % 2;
        n = n / 2;
    }
    printf("\nBinary of Given Number is=");
    for (i = i - 1; i >= 0; i--) {
        printf("%d", a[i]);
    }
}

