#include <stdio.h>

int main() {
	int save[] = {1, 2, 3, 4, 5, 6, 6, 7, 8};
	int k = 4;
	int i = 0;




	printf("Hello world!");	

	while (save[i] == k) {
		i += 1;	
	
	}
	printf("Loop exited at i = %d\n", i);
}
