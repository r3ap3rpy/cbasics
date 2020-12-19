#include <stdio.h>

int main(int argc, char* argv[]){
	int i = 0;

	for(i=1; i<argc; i++){
		printf("arg %d is %s\n",i,argv[i]);
	}
	
	char *cities[] = {
		"Debrecen","Nyiregyhaza",
		"Miskolc","Budapest"
	};

	int num_cities = 4;

	for(i = 0; i < num_cities; i++){
		printf("city: %d is %s\n",i,cities[i]);
	}
	return 0;
}
