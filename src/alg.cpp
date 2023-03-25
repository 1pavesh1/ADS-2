// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
double pown(double value, uint16_t n) {
	double pow = value;
	if (n == 0) {
		return 1;
	}
	for (uint64_t i = 1; i < n; i++) {
		value = value * pow;
	}
	return value;
}

uint64_t fact(uint16_t n) {
	uint64_t count = n, res = n;;
	if (res <= 1) {
		return 1;
	}
	while (count != 1) {
		res = res * (count - 1);
		count--;
	}
	return res;
}

double calcItem(double x, uint16_t n) {
	double res = 0, res1 = 0, res2 = 0;
	res = pown(x, n) / fact(n);
	return res;
}

double expn(double x, uint16_t count) {
	double res = 0;
	for (int i = 1; i <= count; i++) {
		res = res + pown(x, i) / fact(i);
	}
	return res + 1;
}

double sinn(double x, uint16_t count) {
	double res = 0, res1 = 0;
	for (int i = 1; i <= count; i++) {
		res1 = pown(-1, i - 1) * pown(x, 2 * i - 1) / fact(2 * i - 1);
		res = res + res1;
	}
	return res;
}

double cosn(double x, uint16_t count) {
	double res = 0, res1 = 0;
	for (int i = 1; i <= count; i++) {
		res1 = pown(-1, i - 1) * pown(x, 2 * i - 2) / fact(2 * i - 2);
		res = res + res1;
	}
	return res;
}
