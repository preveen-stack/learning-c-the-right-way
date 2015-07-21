
// time  to learn some preprocessor and macro tips
// courtesy of microchip videos on youtube

#include <stdio.h>
#define PRODUCT(year) "Matrix" #year

int main(void) {
	// your code goes here
	const char* productName = PRODUCT(2000);

	printf(productName);
	
	return 0;
}
