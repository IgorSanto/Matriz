#include <iostream>
#include <stdio.h>
#include <stdlib.h>	
#define c 10
#define l 10
#include <time.h>
int main(int argc, char** argv) {
	int i = 0, j = 0, mat[l][c], mat2[l][c], mat3[l][c];
	
	//----- PREECHER A MATRIZ ------
	printf("Insira os valores da matriz: \n");
	for(i = 0; i < l; i++ ){
		for(j = 0; j < c; j++){
			mat[i][j] = rand()%10;
			mat2[i][j] = rand()%10;
			
		}
	}
	
	//------- APRESENTAR A MATRIZ ------
	printf("\n\n");// pular linha!
	printf("Matriz 1: \n");
	for(i = 0; i < l; i++){
		printf("   ");
		for(j = 0; j < c; j++){
			printf("%i   ",mat[i][j]);
		}
		printf("\n");
	}
	
	//------ Diagonal Principal --------
	printf("\n\n");// pular linha!
	printf("Diagonal Principal: \n");
	for(i = 0; i < l; i++){
		printf("   ");
		for(j = 0; j < c; j++){
			
			if( i == j ){
				printf("%i   ",mat[i][j]);	
			} 
			else{
				printf("*   ");
			}
		}
		printf("\n");
	}		
	
			
	//-----Diagonal Secundaria-------
	printf("\n\n");// pular linha!
	printf("Diagonal Secundaria: \n");
		for(i = 0; i < l; i++){
		printf("   ");
		for(j = 0; j < c; j++){
			
			if( i == (c - 1 - j) ){
				printf("%i   ",mat[i][j]);	
			} 
			else{
				printf("*   ");
			}
		}
		printf("\n");
	}
	

	//------Triangulo Superior-------
	printf("\n\n");// pular linha!
	printf("Triangulo Superior: \n");
		printf("\n\n");// pular linha!
		for(i = 0; i < l; i++){
		printf("   ");
		for(j = 0; j < c; j++){
			
			if( i < j ){
				printf("%i   ",mat[i][j]);	
			} 
			else{
				printf("*   ");
			}
		}
		printf("\n");
	}
	
	//------Triangulo Inferior-------
	printf("\n\n");// pular linha!
	printf("Triangulo Superior: \n");
		printf("\n\n");// pular linha!
		for(i = 0; i < l; i++){
		printf("   ");
		for(j = 0; j < c; j++){
			
			if( i > j ){
				printf("%i   ",mat[i][j]);	
			} 
			else{
				printf("*   ");
			}
		}
		printf("\n");
	}
	
	//------Multiplicação de Matriz-------
	printf("\n\n");
	printf("Multiplicacao de Matriz:\n");
	printf("Matriz 1 vezes  a Matriz 2:\n");
	
	//------- MATRIZ 1 ------
	printf("\n\n");// pular linha!
	printf("Matriz 1: \n");
	for(i = 0; i < l; i++){
		printf("   ");
		for(j = 0; j < c; j++){
			printf("%i   ",mat[i][j]);
		}
		printf("\n");
	}
	
		//------ Matriz 2 --------
	printf("\n\n");
	printf("Matriz 2: \n");
	for(i = 0; i < l; i++){
		printf("   ");
		for(j = 0; j < c; j++){
			printf("%i   ",mat2[i][j]);
		}
		printf("\n");
	}
	
	//------ Matriz 1 vezes Matriz 2 ---------
	for(i = 0; i < l; i++){
		printf("   ");
		for(j = 0; j < c; j++){
			mat3[i][j] = (mat[i][j] * mat2[i][j]);
		}
		printf("\n");
	}
	
	//-------- Matriz Multiplicada ------
		printf("\n\n");
	printf("Matriz Multiplicada: \n");
	for(i = 0; i < l; i++){
		printf("   ");
		for(j = 0; j < c; j++){
			printf("%i   ",mat3[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
