#include "error.h"

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>


void error(int status, int errnum, const char *format, ...) {
	fflush(stdout);
	fprintf(stderr, "perf-map-agent: ");

	va_list args;
	va_start(args, format);
	vfprintf(stderr, format, args);
	va_end(args);

	if (errnum) {
		fprintf(stderr, "%s", strerror(errnum));
	}

	fprintf(stderr, "\n");
	fflush(stderr);

	if (status) {
		exit(status);
	}
}

