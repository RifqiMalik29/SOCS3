#include <stdio.h>

int main () {
	int valueOne, valueTwo;
	scanf("%d %d", &valueOne, &valueTwo);
	
	int sum = valueOne + valueTwo;
	
	for(int i = valueOne; i <= sum; i++) {
		printf("%d\n", i);
	}
	return 0;
}
