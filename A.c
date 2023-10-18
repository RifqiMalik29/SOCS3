#include <stdio.h>

int main () {
	int value;
	scanf("%d", &value);
	
	int isOddEven = value % 2;
	if (isOddEven) {
		printf("ODD\n");
	} else {
		printf("EVEN\n");
	}
	
	return 0;
}
