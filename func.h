#pragma once
#ifndef FUNC_H
#define FUNC_H
const double PI = 3.1415;
double Square_Girth(double l) {
	return 4 * l;
}
double Square_Area(double l) {
	return l * l;
}
double Round_Girth(double radius) {
	return 2 * PI * radius;
}
double Round_Area(double radius) {
	return PI * radius * radius;
}
#endif
