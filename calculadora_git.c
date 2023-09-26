#include <stdio.h>

int main(void){

	char a = 0;

	scanf("%c", &a);

	switch(a){

	case '+':
		printf("Suma\n");
		break;
	case '-':
        printf("Resta\n");
break;
	case '*':
        printf("Multiplicacion\n");
break;
	case '/':
        printf("División\n");
break;

	printf("No válido\n");
}

	return 0;
}
