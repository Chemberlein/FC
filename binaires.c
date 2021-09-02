#include <stdlib.h>
#include <stdio.h>

static unsigned long long X = 123456ULL;

unsigned char crand48(void) {
	unsigned long long m = ((unsigned long long)0xFFFF)<<48; 
	X=(0x5DEECE66D * X + 0xB)&(~m);
    return (X>>32)&0xFF;
}

int main(void)
{
    printf("%hhu\n", crand48());
    printf("%hhu\n", crand48());
    printf("%hhu\n", crand48());

    return EXIT_SUCCESS;
}
