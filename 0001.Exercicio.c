#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <windows.h>

int main(void){
	/*Construa um programa que tendo como entrada dois pontos quaisquer do plano P(x1,y1) e Q(x2,y2), imprima a dist�ncia entre eles. A f�rmula da dist�ncia �:
	
	v(x2-x1)�+(y2-y1)2*/
	float x1,x2, y1, y2, cal;
	srand(time(NULL));
	
	x1 = rand() %40-20;
	x2 = rand() %40-20;
	y1 = rand() %40-20;
	y2 = rand() %40-20;
	
	cal=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	printf("X1: %f\nX2: %f\nY1: %f\nY2: %f\nCALCULO: %f", x1,x2,y1,y2,cal);
	printf("\n\n\nA distancia entre o P1 e P2 � %.2f", cal);
	//abort();
	//system("PAUSE");
	
	
	return 0;
	
}
