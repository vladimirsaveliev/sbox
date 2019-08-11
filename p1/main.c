#include <stdio.h>
#include <string.h>


enum code {
	unknown = 0,
	sam_1_3,
	ex_1_5
};

enum code select(char *opt)
{
	if (!strcmp("s1.3", opt))
		return sam_1_3;
	if (!strcmp("e1.5", opt))
		return ex_1_5;
		
	return unknown;
}

/**
 * @brief this is sample from K&R's section 1.3
 * @return none
 */
void sample_1_3(void)
{
	int fahr;
	
	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
}

/**
 * @brief this is K&R exercise 1.5
 * @return none
 */
void exercize_1_5(void)
{
	printf("Not ready.\nMishka, you code goes here\n");
}


int main(int argc, char **argv)
{
	if (argc < 2) {
		printf("usage: %s s1.3 | e1.5\n", argv[0]);
		return 0;
	}
	
	switch(select(argv[1])) {
	case sam_1_3:
		sample_1_3();
		break;

	case ex_1_5:
		exercize_1_5();
		break;

	default:
		printf("usage: %s\n", argv[0]);
		break;
	}
	
	return 0;
}
