#include <stdlib.h>

int main(void)
{
	float x = 0.1f+ 0.2f- 0.3f;
	double y =  0.1+0.2- 0.3;
	long double z= 0.1L+0.2L-0.3L;
	printf("%e\n", x);
	printf("%e\n", y);
	printf("%Le\n",z);
    return EXIT_SUCCESS;
}
