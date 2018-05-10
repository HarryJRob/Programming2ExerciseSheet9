#include <math.h>

int analyse(int *wholePtr, double *fracPtr, double d) {

	double intPart = 0;
	*fracPtr = fabs(modf(d, &intPart));
	*wholePtr = (int) fabs(intPart);

	if(d >= 0) {
		return 1;
	} else {
		return -1;
	}
}