#include <stdio.h>

int main() {
    register char const * valid_C_or_Cpp = (char const *)
		"\nregister char * valid_C_or_Cpp = (char *) \"valid string on C18, C++03, C++11, C++23\";\n\n";
	printf("%s", valid_C_or_Cpp);

	valid_C_or_Cpp = "abcde\n\n";

	printf("%s", valid_C_or_Cpp);
}
