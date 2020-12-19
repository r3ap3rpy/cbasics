#include <stdio.h>

int main(int argc, char* argv[]){
	int i = 0;

	while(i<=30){
		if(i%2==0){
			printf("%d is even!\n",i);
		} else {
			printf("%d is odd!\n",i);
		}
		i++;
	}
	return 0;
}
