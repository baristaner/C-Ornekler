#include<stdio.h>

int main(){ // Girilen bir say�n�n fakt�ryelini hesapl�y�cak program
    int i, x=1 , sayi;
    printf("Faktoriyeli hesaplanacak sayiyi giriniz:");
    scanf("%d",&sayi);
    for (i=1; i<=sayi; i++){
        x *= i;
    }
    printf("%d! = %d",sayi,x);
    return 0;
    }
