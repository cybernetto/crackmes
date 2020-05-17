#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "ispresent.h"
float nadaaqui(char *param_1){
  float x;
  
  x = 720300.00000000;
  while (*param_1 != '\0') {
    x = x / (float)((int)*param_1 + - 0x30);
    param_1 = param_1 + 1;
  }
  return (float)x;
}

int main(int argv, char** argc){
	
	if(ispresent()){
		return -1;	
	}

	if (argv != 2){
		printf("Você precisa digitar uma chave.\n");
		return -1;
	}
	for(int i = 0; i < strlen(argc[1]); i++){
		if(!isdigit(argc[1][i])){
			printf("Opa!! Apenas números!\n");
			return -1;
		}}
  	if (nadaaqui(argc[1]) == 1)
    		printf("Isso aí!! A chave é válida!\n");
  	else
   	 	printf("Poxa, a chave não é válida :(\n");
	
	

	return 0;
}
