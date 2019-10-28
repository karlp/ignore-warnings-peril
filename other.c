#include <stdio.h>

float get_float(void)
{
	return 123.45f;
}

void do_other_thing(void)
{
	float x = get_float();
	x = x * 1000.0f;
	printf("in the other thing, x = %f\n", x);
}
