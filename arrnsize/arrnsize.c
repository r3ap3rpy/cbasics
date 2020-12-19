#include <stdio.h>

int main(int argc, char* argv[]){
	int areas[] = {10,20,30,40,50};
	char name[] = "Daniel";
	char full_name[] = {
		'D','a','n','i','e','l','\0'
	};

	printf("The size of an int: %ld\n",sizeof(int));
	printf("The size of areas: %ld\n",sizeof(areas));
	printf("The first area is %d and the second is %d\n",areas[0],areas[1]);
	printf("The number of characters %ld\n",sizeof(name)/sizeof(char));
	printf("The size of name is %ld\n",sizeof(name));
	printf("The full name is %s\n",full_name);
	return 0;
}
