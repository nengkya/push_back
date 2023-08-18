#include <stdio.h>
#include <stdlib.h>

int main() {
	char * buffer;

	//buffer = (char *)malloc(sizeof(char *));
	buffer = (char *)malloc(2);

	setbuf(stdout, buffer);
	puts("Go !");
	getchar();
	puts("Thank you.");
}
