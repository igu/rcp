struct operands {
	int x;
};

program SIMP_PROG {
	version SIMP_VERSION{
		int soma(operands) = 1;
	} = 1;
} = 0x2fffffff;
