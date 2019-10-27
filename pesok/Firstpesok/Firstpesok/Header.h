#pragma once
int factorial(int n) {
	long int fl = 1;
	for (int i = 1; i < n; i++) {
		fl *= i;
	}
	return fl;
}
