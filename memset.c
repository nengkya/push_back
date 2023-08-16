#include <stdio.h>	/* puts */
#include <string.h> /* strcpy() */
#include <stdlib.h>  /* malloc() */

int main() {
	char * string;
	string = (char *)malloc(sizeof(char *) * 24);

	strcpy(string, "memset(string, '$', 7)");
	puts(string);

	memset(string, '$', 7);
	puts(string);
}
