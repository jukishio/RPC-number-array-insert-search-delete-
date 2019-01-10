struct arguments {
	int a;
};

program Server {
	version SERV {
		void registrar(arguments) = 1;
		void buscar(arguments)    = 2;
		void borrar(arguments)    = 3;
	} = 1;
} = 99;