#include <stdio.h>
 
int main() // Girilen sayýnýn mükemmel sayý olup olmadýðýný bulan program
{
	// Kendisi hariç bütün pozitif bölenlerinin toplamý kendisine eþit olan sayýlara mükemmel sayý denir.
    int sayi;
    int toplam = 0;
    
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);
    
    for(int i = 1; i < sayi; i++)
    {
        if(sayi % i == 0){
            toplam += i;                   
        }
    }
    if(sayi == toplam){
        printf("%d Sayisi mukemmel bir sayidir.",sayi);
    }
    else{
        printf("%d Sayisi mukemmel bir sayi degildir.",sayi);
    }
}
