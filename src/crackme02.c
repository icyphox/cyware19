#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* genpass() {
	char *pass = malloc(10);
	pass[0] = 'a';
	for(int i = 1; i < 9; i++) {
		pass[i] = pass[i - 1] + 2;
	}
	return pass;	
} 

void* showpass() {
	printf("ah, you found me :)\n");
	printf("the password is: %s\n", genpass());
}

int main(int argc, char **argv) {
	if(argc != 2) {
		printf("usage: ./crackme02 <password>\n");
		exit(1);
	}
	char in[10];
	strcpy(in, argv[1]);
	if(strcmp(in, genpass()) == 0) {
		printf("you did it!\n");
	}
	else printf("fail!\n");
	return 0;
}


