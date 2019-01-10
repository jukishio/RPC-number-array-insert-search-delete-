# RPC-number-array-insert-search-delete-
Este proyecto utiliza rpc para que el usuario pueda insertar, 
buscar y borrar datos números. Esta codificado en c utilizando rpcgen 
se lo realizo en una máquina virtual de linux mint
Es la solución del siguiente ejercicio planteado
" Dada la siguiente especificación de procedimiento remoto
 procedure REMOTO (in int A, inout int B, out int C)
Suponiendo que se dispone de las primitivas de comunicación cliente/servidor con las
siguientes especificaciones y semánticas:
 void sendrecv(port p, char *buffer, int *bufsize);
Permite a un proceso enviar al puerto p un mensaje con lo que hay en el buffer de tamaño
bufsize. A continuación el proceso se queda bloqueado en espera del resultado del servicio.
Cuando el proceso se desbloquea se encuentra el resultado en buffer y bufsize indica el
tamaño del buffer resultado.
 void receive(por p, char *buffer, int *bufsize);
Permite a un proceso recibir un mensaje por el puerto p. El proceso se bloquea hasta que el
mensaje llegue. El mensaje se almacena en buffer y bufsize indica el tamaño del buffer
resultado.
 void reply(char *buffer, int *bufsize);
Permite devolver un resultado en buffer con tamaño bufsize al proceso del que se recibió el
último mensaje.
 port createport();
Permite obtener un puerto único identificable en todo el sistema distribuido.
Suponiendo que el binder (servidor de nombres, enlazador) ofrece tres RPC cuyas
especificaciones son:
 registrar(in char nombre[longmax], int port p);
 buscar(in char nombre[longmax], out port p);
 borrar(in char nombre[longmax);
Sabiendo que nos encontramos en un sistema homogéneo, se pide:
a) Diseñar y programar el suplente del cliente del procedimiento REMOTO, especificando la
secuencia de funciones que debe realizar y las estructuras de datos que utiliza. 
b) Diseñar y programar el suplente del servidor, especificando la secuencia de funciones que
debe realizar y las estructuras de datos que utiliza. El diseño del servidor sólo debe
considerar que se atiende una petición en cada momento.
c) Indicar si ha sido necesario un cambio de representación de los parámetros y porqué.
d) ¿Se puede utilizar un servidor concurrente?

NOTA: no es necesario considerar aspectos de seguridad ni tratamientos de error."
Importante se realizo lo que plantea el problema pero con enteros, debido a problemas manejando estructuras de datos de string- 
Para ejecutar el codigo hay que llamar al sevidor ./program_server
y luego al cliente ./program_client localhost  si es que causa problema verificar tener rpcbind descargado y los paquetes de gcc 
 
PD: si se podría utilizar un servidor concurrente con hilos.
