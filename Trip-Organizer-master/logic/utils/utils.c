#include "utils.h"
#include <stdlib.h>
#include <memory.h>


void resize(char ** pointer, int size) {
	char * new = (char *) malloc(sizeof(char) * size);

	*pointer = memcpy(new, *pointer, sizeof(char) * size);
}