#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


main(void){
	
	float pi, raio, altura, Area_base, circunferencia_base, lata_tinta_c, cada_lata_de_tinta_q, litro_tinta_pinta, area_do_cilindro, qt_latas, preco_de_vLatas;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Qual seria a Altura desse tanque Cilindrico em Metros: ");
	scanf("%f", &altura);
	
	printf("Qual È o Raio desse tanque Cilindrico em Metros: ");
	scanf("%f", &raio);
	
	//pi=3,14
	//area da base=pi*r elevado a 2
	//circunferencia = pi* diametro
		
	pi = 3.14;
	lata_tinta_c = 20; //R$
	cada_lata_de_tinta_q = 5; //Litros
	litro_tinta_pinta = 3; //metro quadrados
	Area_base = pi * (pow(raio,2));
	circunferencia_base = pi * (2*raio);
	
	area_do_cilindro = (Area_base*2)+(circunferencia_base*altura);

	printf("\nPi: %f\nRaio: %f\nAltura: %f\nPreÁo de Cada Lata: %f\nQuantidade de Litros para cada Lata de Tinta: %f\nQuantos Metros cada  quadrados cada litro de tinta Pinta: %f",pi, raio, altura, lata_tinta_c, cada_lata_de_tinta_q,litro_tinta_pinta);
	
	printf("\n\n\n¡rea da Base: %.2f Metros≤\nCircunferencia da Base: %.2f Metros\n¡rea do Cilindro: %.2f Metros≤", Area_base, circunferencia_base, area_do_cilindro);	
	
	qt_latas = area_do_cilindro/5;
	preco_de_vLatas  = qt_latas*lata_tinta_c;
		
	printf("\n\n\nQuantidades de Latas Utilizadas: %.2f\nCusto para Pintar toda a ·rea do Tanque: %.2f", qt_latas, preco_de_vLatas);
	
	
	return 0;
}
