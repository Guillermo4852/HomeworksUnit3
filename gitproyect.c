#include<stdio.h>

int main(float argc, char** argv){
double a= atof(argv[1]);
double b= atof(argv[2]);
char operator;
printf("enter a sign %c", operator);

switch (operator){
	case '+':
	printf(" %lf + %lf = %lf ", a, b, a + b);
	break;
	case '-':;
	printf(" %lf - %lf = %lf", a, b, a - b);
	break;
	case '*':;
	printf(" %lf * %lf = %lf", a, b, a * b);
	break;
	case '/':;
	printf(" %lf / %lf = %lf", a, b, a / b);
	break;
	default:;
	printf("operator is not correct");
}

return 0;

}

