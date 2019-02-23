#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char *pw = malloc(5);
	pw[0] = 'a';
	pw[1] = 'b';
	pw[2] = 'c';
	pw[3] = 'd';
	pw[4] = '\0';
	printf("enter the key: ");
	char *in = malloc(5);
	fgets(in, 5, stdin);
	if(strcmp(in, pw) == 0) {
		printf("nice work!\n");
	}
	else {
		printf("nope, try again\n");
	}
	return 0;
}
