#include "pch.h"

int YPoint(int x, double* w, int Carpan = 1) {
	return (int)((double)(-1 * (double)Carpan * w[2] - w[0] * x) / (double)(w[1]));
}

int YPointY(int x, double **w , int i, int  Carpan=1) {
    return (int)((double)(-1 * (double)Carpan * w[i][2] - w[i][0] * x) / (double)(w[i][1]));
}