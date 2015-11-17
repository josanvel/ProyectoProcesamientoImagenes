#include <opencv2/highgui/highgui.hpp>
#include <opencv\cv.h>
#include <opencv\cxcore.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream>

using namespace cv;
using namespace std;

void titulo();
int rango(int min, int max, char *msg);//funcion que define el rango
void pause();

int main(){
	int option;

	titulo();	//Materia, Integrantes, Proyecto 
	while (1) {

		printf("\t\t0.\tSalir \n");
		printf("\t\t1.\tComprobar distancia focal \n");
		printf("\t\t2.\tArea focal \n");
		printf("\n\nIngrese la opcion:  ");

		option = rango(0, 2, "La opcion no es valida\n Ingresar nuevamente la opcion:  ");
		switch (option) {

		case 1: //Comprobar distancia foca
			printf("\nComprobar distancia foca \n");
			cvvWaitKey(0);
			fflush(stdin);
			break;

		case 2: //Area focal
			printf("\nArea focal \n");
			cvvWaitKey(0);
			break;

		case 0:
			exit(0);

		}
	}

	//getch();
	//system("PAUSE");
	//pause();
	return 0;
}

void pause() {
	cin.clear();
	cout << endl << "Press any key to continue...";
	cin.ignore();
}

void titulo(){
	printf("\n\n\n\n");
	printf("*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n");
	printf("*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n*\n");
	printf("*\t\t  PROYECTO DE PROCESAMIENTO DIGITAL DE IMAGENES  \n");
	printf("*\t\t\t      Marlon Espinoza \n");
	printf("*\t\t\t      Jose Velez Gomez\n*\n");
	printf("*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n");
	printf("*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n");;
	printf("\n\n\n");
}

int rango(int min, int max, char *msg){

	char num[90];
	int isnum = 1;
	int i;
	int valor;

	while (1) {
		gets(num);
		for (i = 0; i<(int)strlen(num); i++) {
			if (!isdigit(num[i])) {
				isnum = 0;
				break;
			}
		}
		valor = atoi(num);
		if (valor <= max && valor >= min && isnum && (int)strlen(num))
			return(valor);
		printf("%s", msg);
		isnum = 1;
	}

}