#include "stdafx.h"
#include <stdio.h>
#include <math.h>
void inBoi7HaiChuSo() {
	int i;
	for (i = 10; i <= 98; i++) {
		if (i % 7 == 0) {
			printf("%d ", i);
		}
	}
}

int main() {
	inBoi7HaiChuSo();
	return 0;
}
