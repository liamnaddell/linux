#include <stdio.h>

void * (*func)(void);
void* hallook2(void);

void * hallook() {
	puts("hallok");
	return hallook2;
}

void * hallook2() {
	puts("hallok2u2");
	return NULL;
}
int main() {
	func = hallook();
	func();
	return 0;
}
