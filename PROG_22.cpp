/*Autor: oscar vivaldi partido ramirez fecha: 31/03/2022
hacer un programa que imrpima todos los codigos ASCII 
de 10 en 10
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	printf("----CODIGO ASCII----\n");
	for(unsigned char c=0; c<=255; c++){
		printf("%d->[%c]  \n",c,c);
		if(c%10==0 && c>0){
			system("PAUSE");
		}
	}
	return 0;
}

