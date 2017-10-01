#include <stdio.h>
#include <stdlib.h>
void tell(char *msg);
char* Input(char *prompt);
//void (*lol)(char*);
//typedef void (*lol)(char*);
//function (void)
void * Name(void);
void * Welcome(void);
void * (*myfunc)(void);
//nf=needs freeing
int main() {

	//lol hi = &tell;
	//hi("he\n");
	myfunc = Welcome();
	while(1 == 1){
		if (myfunc == NULL) {
			return 0;
		}
		myfunc = myfunc();
	}
	//free(name_nf);
	return 0;
}

void tell(char *msg) {
	printf(msg);
}

char* Input(char *prompt) {
	printf("%s",prompt);
	char *ret = malloc(sizeof(char)*20);
	fgets(ret,20,stdin);
	return ret;
}

void * Welcome() {
	puts("My name is wrian\n");
	return &Name;
}

void * Name() {
	char *name_nf = Input("Welcome to my interactive story game, what is your name?:");
	printf("Welcome to the game, %s\n", name_nf);
	return NULL;
}
