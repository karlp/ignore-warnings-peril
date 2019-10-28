
#include <stdio.h>

// no include here....
//

void do_thing_in_main(void)
{
	float x = get_float();
	x = x * 1000.0f;
	printf("Float in main = %f\n", x);
}

int main()
{
	do_thing_in_main();
	do_other_thing();
}
