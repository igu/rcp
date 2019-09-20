#include "calc.h"

float *
sum_1_svc(operands *argp, struct svc_req *rqstp)
{
	static float result;
	result = argp->n1 + argp-> n2;
	printf("Solicitada Adição: %f + %f",argp->n1, argp->n2);
	printf("Resposta enviada: %f", result);
	return &result;
}

float *
sub_1_svc(operands *argp, struct svc_req *rqstp)
{
	static float  result;

	result = argp->n1 - argp-> n2;
	printf("Solicitada Subtração: %f - %f",argp->n1, argp->n2);
	printf("Resposta enviada: %f", result);

	return &result;
}

float *
mul_1_svc(operands *argp, struct svc_req *rqstp)
{
	static float  result;

	result = argp->n1 * argp-> n2;
	printf("Solicitada Multiplicação: %f * %f",argp->n1, argp->n2);
	printf("Resposta enviada: %f", result);

	return &result;
}

float *
div_1_svc(operands *argp, struct svc_req *rqstp)
{
	static float  result;

	result = argp->n1 / argp-> n2;
	printf("Solicitada Divisão: %f / %f",argp->n1, argp->n2);
	printf("Resposta enviada: %f", result);

	return &result;
}

float *
abs_1_svc(operands *argp, struct svc_req *rqstp)
{
	static float  result;

	result = argp->n1 + argp-> n2;
	if(result < 0) result *= -1;
	printf("Solicitada Abs de dois números: |%f + %f|",argp->n1, argp->n2);
	printf("Resposta enviada: %f", result);

	return &result;
}

float *
res_1_svc(operands *argp, struct svc_req *rqstp)
{
	static float result;

	result = ((int) argp->n1) % ((int)argp->n2);
	printf("Solicitada Resto de dois números: %d res %d", ((int)argp->n1), ((int)argp->n2));
	printf("Resposta enviada: %f", result);

	return &result;
}

float *
exp_1_svc(operands *argp, struct svc_req *rqstp)
{
	static float  result;
	static int i; 
	result = (int) argp->n1;
	
	for(i = 0; i < (int) argp->n2; i++) {
	  result *= (int) argp->n1;
	}

	printf("Solicitada Expoente de dois números: %f ^ %f",argp->n1, argp->n2);
	printf("Resposta enviada: %f", result);

	return &result;
}
