#include <stdio.h>

int main() {
	char * register_definition =
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
		"It means that it MIGHT be stored in a register - depending on hardware and implimentation restrictions.\n\n"
	"Registers are faster than memory to access, so the variables which are most frequently used in a C program can be put in registers using the register keyword.  The keyword register hints to the compiler that a given variable can be put in a register. It’s the compiler’s choice to put it in a register or not. Generally, compilers themselves do optimizations and put the variables in a register.\n\n"
"The keyword register hints to the compiler that a given variable can be put in a register. It’s the compiler’s choice to put it in a register or not. Generally, compilers themselves do optimizations and put the variables in a register.\n\n";
	register long register_ram = 10;
	printf("\nregister long register_ram = %ld;\n\n", register_ram);
	printf("%s", register_definition);
}
