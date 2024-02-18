#include <stdio.h>

void funcB(int& a) {
    a += 2;
}

void funcC(int& a) {
	a -= 2;
}
void funcD(int& a) {
    a++;
}

void funcE(int& a) {
	a--;
}
void LoopFunction(bool a, int num)
{
    void (*func)(int&) = a ? funcB : funcC;
    for(int i = 0; i < 1000; ++i) {
        func(num);
        funcD(num);
        funcE(num);
    }
}

void main(void) {
	int num = 0
    LoopFunction(true, num);
	printf("1: %d", num);
    LoopFunction(false, num);
	printf("2: %d", num);
    return;
}