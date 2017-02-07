#include "unistd.h"

pid_t getpid() {
	return GetCurrentProcessId();
}

