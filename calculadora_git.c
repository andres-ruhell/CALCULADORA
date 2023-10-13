#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void leer_arreglo(int arr[]);
void sumar_arreglo(int arreglo[]);
int suma(int a, int b);
double division(int a, int b);
int factorial(int a);
int factorial_rec(int a);
double euler(int z);
void eq_cuadr(double a, double b, double c, double *r1, double *r2);

int main(void){

	char a = 0;
	int arreglo1[10];

	int x = 0;
	int y = 0;
	int z = 0;
	double zdoub = 0;

	double c1 = 0;
	double c2 = 0;
	double c3 = 0;
	double res1 = 0;
	double res2 = 0;

	scanf("%c", &a);

	switch(a){

	case '+':

		scanf("%d", &x);
		scanf("%d", &y);
		z = suma(x, y);
		printf("%d\n", z);
break;
	case '-':
        printf("Resta\n");
break;
	case '*':
        printf("Multiplicacion\n");
break;
	case '/':
        	printf("a / b. Dame a y b.");
		scanf("%d", &x);
                scanf("%d", &y);
                zdoub = division(x, y);
                printf("%lf\n", zdoub);

break;
	case 'a':

		leer_arreglo(arreglo1);
		sumar_arreglo(arreglo1);
break;
	case 'f':

	scanf("%d", &x);

	z = factorial(x);
	printf("%d\n", z);
break;
	case 'F':

	scanf("%d", &x);
        z = factorial_rec(x);
	printf("%d\n", z);
break;
	case 'e':

        scanf("%d", &x);
        zdoub = euler(x);
	printf("%lf\n", zdoub);

break;
	case 'c':

	printf("Dame a\n");
	scanf("%lf", &c1);
	printf("Dame b\n");
	scanf("%lf", &c2);
	printf("Dame c\n");
        scanf("%lf", &c3);
        eq_cuadr(c1, c2, c3, &res1, &res2);
        printf("%lf\n %lf\n", res1, res2);
	printf("%p\n", &res1);

break;
	printf("No válido\n");
}

	return 0;
}
void leer_arreglo(int arr[])
{
       int i;
       for(i = 0; i < 10; i++)
        {
                scanf("%d", &arr[i]);
        }

}
void sumar_arreglo(int arreglo[])
{
	int i;
	int z = 0;
	for(i = 0; i < 10; i++)
	{
	z = arreglo[i] + z;
	}

	printf("%d ", z);

}

int suma(int a, int b)
{
	int c = 0;
	c = a + b;
	return c;
}
double division(int a, int b)
{
	double doubdiv = 0;
	int c = 0;

	c = a / b;
	doubdiv = (double)c;

	return doubdiv;
}
int factorial(int a){

        int i = 0;
        int res = 1;

        for(i = 1 ; i <= a; i++){

        res = res * i;
}
        return res;
}

int factorial_rec(int a)
{
	int res = 0;
	if(a == 0)
	{
		return 1;
	}
	else{
	res = factorial_rec(a - 1);
	return a * res;
	}
}
double euler(int z){

        int n = 0;
        double res1 = 1;


        for(n = 1; n <= z; n++){

        res1 = res1 + (1/(double)factorial(n));

}
        return res1;
}
void eq_cuadr(double a, double b, double c, double *r1, double *r2)
{
	*r1 = (-b + sqrt(b * b - 4 * a * c))/(2 * a);
	*r2 = (-b - sqrt(b * b - 4 * a * c))/(2 * a);
	printf("%p", r1);
}
