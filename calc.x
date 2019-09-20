struct operants {
	int n1;
	int n2;
	char op;
};

program CALC_PROG{
	version CALC_VERSION{
		int som(operants) = 1;
		int sub(operants) = 2;
		int mul(operants) = 3;
		int div(operants) = 4;
		int res(operants) = 5;
		int abs(operants) = 6;
		int exp(operants) = 7;
	} = 1;
} = 0x2ffffff;
