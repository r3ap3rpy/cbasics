#include <stdio.h>

int main(int argc, char* argv[]){
	int weight = 100;
	float height = 186.5;
	double salary = 99.999;
	char initial = 'D';
	char first_name[] = "Daniel";
	char last_name[] = "Szabo";

	printf("You are %d kg-s!\n", weight);
	printf("You are %f cm-s high!\n", height);
	printf("You have a salary of %f\n", salary);
	printf("Your initial is %c!\n", initial);
	printf("Your first name is %s\n", first_name);
	printf("Your last name is %s\n", last_name);
	printf("You whole name is %c %s %s\n", initial, first_name, last_name);
	int candy = 200;
	double candy_rate = 1.5;

	printf("You have %d candy-s, at the rate of %f\n", candy, candy_rate);

	long defects = 1L * 1024L * 1024L * 1024L;
	printf("The defects are %ld\n", defects);

	double expected_candys = candy * candy_rate;
	printf("You are expecting %f candy-s!\n", expected_candys);

	double part_of_candys = expected_candys / defects;
	printf("That is only %e portion of the candys!\n", part_of_candys);

	char nul_byte = '\0';
	int careful = candy * nul_byte;
	printf("You should be carefull %d%%.\n", careful);

	return 0;
}
