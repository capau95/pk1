#include <stdio.h>

void main() {

	int packung = 0;
	float preis = 0;

	printf("Geben Sie die Packungsgröße in Gramm ein:\n");
	scanf("%d", &packung);

	printf("Geben Sie den Preis in € ein:\n");
	scanf("%f", &preis);

	printf("Der Preis beträgt %.2f €/kg.\n", preis / packung * 1000);

}
