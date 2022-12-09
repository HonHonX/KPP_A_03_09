#include<stdio.h>

int main () {

	/*
	*	Dieses Programm soll nach der Eingabe einer 
	*	Punktzahl von 1-10 eine Note in Textform ausgeben. 
	*/

	printf("\n ***************************** ");
	printf("\n *   ^,,,,^   *              * ");
	printf("\n *  ( o x o)  * Notenausgabe * ");
	printf("\n *  ( 7   7)  *              * ");
	printf("\n *   ´´´´´´   *      ©S.Buch * ");
	printf("\n ***************************** \n\n");
	
	//Einlesen der Note
	int note;
	printf("\nBitte geben Sie eine Note von 1-10 ein: ");
	scanf("%d",&note);
	if (note>=1 && note<=10) {
		switch (note) {
			case 10: printf("\nDas entspricht der Note *sehr gut*");
			break;
			case 9: printf("\nDas entspricht der Note *gut*");
			break;
			case 8: printf("\nDas entspricht der Note *befriedigend*");
			break;
			case 7: printf("\nDas entspricht der Note *ausreichend*");
			break;
			case 6: printf("\nDas entspricht der Note *mangelhaft*");
			break;
			default: printf("\nDas entspricht der Note *ungenügend*");
			break;
		}
	} else {
		printf("Ihre Eingabe war ungültig. Bitte geben Sie eine Zahl von 1-10 an.");
	}

	//Ende
	printf("\n\n");
	return 0;
}
