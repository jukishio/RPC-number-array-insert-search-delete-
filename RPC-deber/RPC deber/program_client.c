#include "program.h"

void server_1(char *host)
{
	CLIENT *clnt;
	void  *result;

	#ifndef	DEBUG
		clnt = clnt_create (host, Server, SERV, "udp");
		if (clnt == NULL) {
			clnt_pcreateerror (host);
			exit (1);
		}
	#endif	/* DEBUG */

	printf("Easy peezy lemon squeezy...\nPress a to add, s to search and d to delete a number,\nand anything else to exit...\n\n");

	int num = 1;
	char a;
	while(num > 0) {
		a = getchar(); getchar();
		switch(a) {
			case 'a': printf("number to add: ");
				num = getchar() - '0'; getchar();
				registrar_1(&num, clnt);
				break;
			case 's': printf("number to search: ");
				num = getchar() - '0'; getchar();
				buscar_1(&num, clnt);
				break;
			case 'd': printf("number to delete: ");
				num = getchar() - '0'; getchar();
				borrar_1(&num, clnt);
				break;
			default: printf("unknown key\n"); num = -1;
		}
	}

	// int numbers[6] = {1, 2, 3, 4, 5, 6};
	// for (int i = 0; i < 6; ++i)
	// {
	// 	result = registrar_1(&numbers[i], clnt);
	// 	if (result == (void *) NULL) {
	// 		clnt_perror (clnt, "call failed");
	// 	}
	// }

	// int search[4] = {4, 5, 6, 2};
	// for (int i = 0; i < 4; ++i)
	// {
	// 	result = buscar_1(&search[i], clnt);                                                        
	// 	if (result == (void *) NULL) {
	// 		clnt_perror (clnt, "call failed");
	// 	}
	// }

	// int delete[3] = {5, 2, 6};
	// for (int i = 0; i < 3; ++i)
	// {
	// 	result = borrar_1(&delete[i], clnt);
	// 	if (result == (void *) NULL) {
	// 		clnt_perror (clnt, "call failed");
	// 	}
	// }

	#ifndef	DEBUG
		clnt_destroy (clnt);
	#endif	 /* DEBUG */
}


int main (int argc, char *argv[])
{
	char *host
;
	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	
	host = argv[1];
	server_1 (host);
	
	exit (0);
}

