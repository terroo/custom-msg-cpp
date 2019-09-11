#ifndef MAIN_HELLO
#define MAIN_HELLO
#include "hello-world.hh"

int main(int argc , char *argv[] ){
	  char v{44};
	  char s{32};
	  char e{33};
	  World hw;
	  std::string h = "Hello"; 
	  std::string w = "World"; 

	  if ( argc == 3 ){
		  h = argv[1];
		  w = argv[2];
	  }

	  std::cout << hw.setHello(&h);
	  std::cout << hw.setV(&v);
	  std::cout << hw.setV(&s);
	  std::cout << hw.setHello(&w);
	  std::cout << hw.setV(&e);
	  std::cout << "\n";

	  return 0;
}
#endif
