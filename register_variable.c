#include <stdio.h>

int main() {
	/*
		https://stackoverflow.com/questions/20944784/why-is-conversion-from-string-constant-to-char-valid-in-c-but-invalid-in-c
		ISO C++11 forbids converting a string constant to ‘ char * ’

		char * p = "abc"; //valid in C, invalid in C++11
		char * p = (char *) "abc"; //valid in C++11

		Up through C++03, first example was valid,
		but used a deprecated implicit conversion--a string literal
		should be treated as being of type char const *,
		since you can't modify its contents (without causing undefined behavior).
	*/
	char const * register_definition = (char *)
		"register is used to define local variables\n"
		"that should be stored in a register instead of RAM.\n"
		"This means that the variable has a maximum size\n"
		"equal to the register size (usually one word)\n"
		"and cant have the unary '&' operator applied to it\n"
		"(as it does not have a memory location).\n\n"

		"Register should only be used for variables that require quick access\n"
		"- such as counters.\n"
		"It should also be noted that defining 'register'\n"
		"goes not mean that the variable will be stored in a register.\n"
		"It means that it MIGHT be stored in a register\n"
		"- depending on hardware and implimentation restrictions.\n\n"

		"Registers are faster than memory to access,\n"
		"so the variables which are most frequently used in a C program\n"
		"can be put in registers using the register keyword.\n\n"

		"The keyword register hints to the compiler\n"
		"that a given variable can be put in a register.\n"
		"It’s the compiler’s choice to put it in a register or not.\n"
		"Generally, compilers themselves do optimizations and put the variables in a register.\n\n";

	register long register_ram = 10;
	/*
	cant use &;
	can use pointer * register;
	*/
	auto int auto_variable = 20;
	/*
	auto register auto int auto_variable = 20;
	error: multiple storage classes in declaration specifiers
	*/
	printf("\nregister long register_ram = %ld;\n\n", register_ram);
	printf("cant use &;\n"
		   "can use pointer * register;\n\n");
	printf("%s", register_definition);
	printf("auto int auto_variable = %d;\n\n", auto_variable);
}
