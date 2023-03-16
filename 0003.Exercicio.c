#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


main(void){
	setlocale(LC_ALL, "portuguese");
	
	float qtd, pre_unit, pre_tot;
	
	printf("Qual é a quantidades de unidades do seu produto: ");
	scanf("%f", &qtd);
	
	printf("Qual é o valor unitario de seu produto: ");
	scanf("%f", &pre_unit);
	
	
	pre_tot = pre_unit  * qtd;
	if(pre_tot<=100){
		pre_tot = pre_tot-(pre_tot*0,05);
		printf("\n\n\nO seu valor por unidade é: %.2f R$\nA quantia de unidades é: %.0f Unidades\nO valor total a se pagar por todas as unidades é: %.2f R$", pre_unit, qtd, pre_tot);	
	}else if(pre_tot>100&&pre_tot<=1000){
		pre_tot = pre_tot-(pre_tot*0,10);
		printf("\n\n\nO seu valor por unidade é: %.2f R$\nA quantia de unidades é: %.0f Unidades\nO valor total a se pagar por todas as unidades é: %.2f R$", pre_unit, qtd, pre_tot);
	}else if(pre_tot>1000){
		pre_tot = pre_tot-(pre_tot*0,17);
		printf("\n\n\nO seu valor por unidade é: %.2f R$\nA quantia de unidades é: %.0f Unidades\nO valor total a se pagar por todas as unidades é: %.2f R$", pre_unit, qtd, pre_tot);
	}
	
	return 0; 
}	
