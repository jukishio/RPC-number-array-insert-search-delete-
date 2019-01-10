/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _PROGRAM_H_RPCGEN
#define _PROGRAM_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct arguments {
	int a;
};
typedef struct arguments arguments;

#define Server 99
#define SERV 1

#if defined(__STDC__) || defined(__cplusplus)
#define registrar 1
extern  void * registrar_1(int *, CLIENT *);
extern  void * registrar_1_svc(int *, struct svc_req *);
#define buscar 2
extern  void * buscar_1(int *, CLIENT *);
extern  void * buscar_1_svc(int *, struct svc_req *);
#define borrar 3
extern  void * borrar_1(int *, CLIENT *);
extern  void * borrar_1_svc(int *, struct svc_req *);
extern int server_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define registrar 1
extern  void * registrar_1();
extern  void * registrar_1_svc();
#define buscar 2
extern  void * buscar_1();
extern  void * buscar_1_svc();
#define borrar 3
extern  void * borrar_1();
extern  void * borrar_1_svc();
extern int server_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_arguments (XDR *, arguments*);

#else /* K&R C */
extern bool_t xdr_arguments ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_PROGRAM_H_RPCGEN */