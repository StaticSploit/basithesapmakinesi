#include <stdio.h>

int main() 
{
    printf("merhaba\n");
    printf("hesap makinesi uygulamamıza hoş geldiniz\n\n");
    
    int sayi1, sayi2;
    float islem;
    
    printf("Lütfen işlemde kullanılacak birinci sayıyı girin: ");
    scanf("%d", &sayi1);
    
    printf("Lütfen işlemde kullanılacak ikinci sayıyı girin: ");
    scanf("%d", &sayi2);
    
    printf("Ne yapmak istiyorsunuz (çarpma = 1, bölme = 2, toplama = 3, çıkarma = 4): ");
    int cevap;
    scanf("%d", &cevap);
    
    switch (cevap) 
    {
        case 1:
            islem = sayi1 * sayi2;
            printf("Sonuç: %.2f\n", islem);
            break;
        case 2:
            islem = (float)sayi1 / sayi2;
            printf("Sonuç: %.2f\n", islem);
            break;
        case 3:
            islem = sayi1 + sayi2;
            printf("Sonuç: %.2f\n", islem);
            break;
        case 4:
            islem = sayi1 - sayi2;
            printf("Sonuç: %.2f\n", islem);
            break;
        default:
            printf("Maalesef bu girdi geçerli değil.\n");
            break;
    }
    
    return 0;
}