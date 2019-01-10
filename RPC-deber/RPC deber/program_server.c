#include "program.h"

static int storage[4] = {0, 0, 0, 0};

void * registrar_1_svc(int *argp, struct svc_req *rqstp)
{
	static char * result;

	printf("Attempt to register %d\n", *argp);
	pushToArray(*argp);
	printArray();

	return (void *) &result;
}

void * buscar_1_svc(int *argp, struct svc_req *rqstp)
{
	printf("Searching for %d\n", *argp);

	static char * result;
	if (*argp == 0)
	{
		return;
	}

	int length = sizeof(storage)/sizeof(*argp);
	int position = -1;
	for (int i = 0; i < length; ++i) {
		if (storage[i] == *argp) {
			position = i;
			break;
		}
	}

	if (position != -1) {
		printf("Element found at position: %d\n", position);
	} else {
		printf("Element not found.\n");
	}

	return (void *) &result;
}

void * borrar_1_svc(int *argp, struct svc_req *rqstp)
{
	static char * result;

	printf("Attempt to delete %d\n", *argp);

	if (*argp == 0)
	{
		return;
	}

	int length = sizeof(storage)/sizeof(*argp);
	int position = -1;
	for (int i = 0; i < length; ++i) {
		if (storage[i] == *argp) {
			storage[i] = 0;
			position = i;
			break;
		}
	}

	shiftArray(position);
	storage[length-1] = 0;

	if (position != -1) {
		printf("Element deleted at position: %d\n", position);
	} else {
		printf("Element not found.\n");
	}

	printArray();

	return (void *) &result;
}

void pushToArray(int e) {
	int length = sizeof(storage)/sizeof(e);
	if (storage[length-1] != 0) {
		shiftArray(0);
	}
	storage[length-1] = e;
}

void shiftArray(int p) {
	int length = sizeof(storage)/sizeof(p);
	for (int i = p; i < length-1; ++i)
	{
		storage[i] = storage[i + 1];
	}
}

void printArray() {
	printf(
		"%d %d %d %d\n", 
		storage[0], storage[1], 
		storage[2], storage[3] 
	);
}