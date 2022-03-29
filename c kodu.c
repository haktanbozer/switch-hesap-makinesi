#include <stdio.h>
main() {
	float deger1, deger2, sonuc;
	char islem;
	printf("Lutfen ilk sayiyi giriniz : \n");
	scanf_s("%f", &deger1);

	printf("Lutfenilk islem sembolunu giriniz : \n");
	scanf_s(" %c", &islem);

	printf("Lutfen ikinci sayiyi giriniz : \n");
	scanf_s("%f", &deger2);

	switch (islem) {
	case '+':
		sonuc = deger1 + deger2;
		printf("Isleminizin sonucu %f seklindedir \n", sonuc);
		break;

	case '-':
		sonuc = deger1 - deger2;
		printf("Isleminizin sonucu %f seklindedir \n", sonuc);
		break;

	case '*':
		sonuc = deger1 * deger2;
		printf("Isleminizin sonucu %f seklindedir \n", sonuc);
		break;

	case '/':
		sonuc = deger1 / deger2;
		printf("Isleminizin sonucu %f seklindedir \n", sonuc);
		break;

	default:
		printf("Hatali deger girildi sistem kendini kapatacak \n");

	}
}
