struct operands{
	float n1;
	float n2;
};

program SIMP_PROG {
	version SIMP_VERSION{
		float sum(operands) = 1;
		float sub(operands) = 2;
		float mul(operands) = 3;
		float div(operands) = 4;
		float abs(operands) = 5;
		float res(operands) = 6;
		float exp(operands) = 7; 
	} = 1;
} = 0x2fffffff;
