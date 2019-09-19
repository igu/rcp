#include "calc.h"
#include "math.h"

float *
sum_1_svc(operands *argp, struct svc_req *rqstp)
{
	static float result;
	result = argp->n1 + argp-> n2;
	printf("Solicitada Adição: %f + %f",argp->n1, argp->n2);
	printf("Resposta enviada: %f", resul);
	return &result;
}

float *
sub_1_svc(operands *argp, struct svc_req *rqstp)
{
	static float  result;

	result = argp->n1 - argp-> n2;
	printf("Solicitada Subtração: %f - %f",argp->n1, argp->n2);
	printf("Resposta enviada: %f", resul);

	return &result;
}

float *
mul_1_svc(operands *argp, struct svc_req *rqstp)
{
	static float  result;

	result = argp->n1 * argp-> n2;
	printf("Solicitada Multiplicação: %f * %f",argp->n1, argp->n2);
	printf("Resposta enviada: %f", resul);

	return &result;
}

float *
div_1_svc(operands *argp, struct svc_req *rqstp)
{
	static float  result;

	result = argp->n1 / argp-> n2;
	printf("Solicitada Divisão: %f / %f",argp->n1, argp->n2);
	printf("Resposta enviada: %f", resul);

	return &result;
}

float *
abs_1_svc(operands *argp, struct svc_req *rqstp)
{
	static float  result;

	result = argp->n1 + argp-> n2;
	if(resultado < 0) result *= -1;
	printf("Solicitada Abs de dois números: |%f + %f|",argp->n1, argp->n2);
	printf("Resposta enviada: %f", resul);

	return &result;
}

float *
res_1_svc(operands *argp, struct svc_req *rqstp)
{
	static float  result;

	result = argp->n1 % argp-> n2;
	printf("Solicitada Resto de dois números: %f res %f",argp->n1, argp->n2);
	printf("Resposta enviada: %f", resul);

	return &result;
}

float *
exp_1_svc(operands *argp, struct svc_req *rqstp)
{
	static float  result;

	result = pow(argp->n1, argp-> n2);
	printf("Solicitada Expoente de dois números: %f ^ %f",argp->n1, argp->n2);
	printf("Resposta enviada: %f", resul);

	return &result;
}
