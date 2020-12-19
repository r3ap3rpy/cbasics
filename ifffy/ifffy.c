#include <stdio.h>

int main(int argc, char* argv[]){

	int i = 0;

	if (argc == 1) {
		printf("Only one argument present!\n");
	} else if ( argc > 1 && argc < 4) {
		printf("Here are the arguments!\n");
		for( i = 0; i < argc ; i++)
			{ printf("%s \n", argv[i]); }
		printf("\n");
	} else {
		printf("You have too many arguments!\n");
	}
	return 0;
}
