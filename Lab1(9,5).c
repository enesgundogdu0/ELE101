#include <stdio.h>
int main(){
	float sayi;
	char karakter, onceki, sonraki;
	
	printf("Bir ondalikli sayi girin: ");
	scanf("%f", &sayi);
	printf("Bir karakter girin: ");
	scanf(" %c", &karakter);

	printf("%.0f\t\t%.1f",sayi ,sayi);
	onceki = karakter - 2;
	sonraki = karakter + 2;
	printf("\n\nKarakter\tASCII\n");
	printf("%c\t\t%d \n", karakter ,karakter);
	printf("%c\t\t%d \n", onceki ,onceki);
	printf("%c\t\t%d \n", sonraki ,sonraki);

	return 0;
}/**
#include <stdio.h>
#define PI 3.14
int main(){
	
	int r,h;
	float huni;
	
	printf("yaricap (r) ve yukseklik (h) giriniz (tamsayi): ");
	scanf("%d%d",&r,&h);
	
	huni = (PI * r * r * h)/3;
		
	printf("%.0f %.2f %.3f",huni ,huni, huni);
	
	return 0;
}

#include <stdio.h>
#define PI 3.14
int main(){

	int hedef, gunluk;
	int hafta, gun, dakika;
	
	printf("Toplam hedef suresi (dk): ");
	scanf("%d", &hedef);
	printf("Gunluk antrenman suresi (dk): ");
	scanf(" %d", &gunluk);
	
	dakika = hedef % gunluk;
	gun = hedef / gunluk;
	hafta = gun / 7;	
	gun = gun % 7;
	
	printf("%d hafta %d gun ve son gun %d dk antrenman suresi ile hedefe ulasiliyor",hafta, gun, dakika);

	return 0;
}*/
