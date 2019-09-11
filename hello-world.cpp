#ifndef MAIN_HELLO
#define MAIN_HELLO
#include "hello-world.hh"
 
std::string Hello::setHello(std::string *ph){
			  m_hello = ph;
			  return *m_hello;
}
 
std::string World::setWorld(std::string *pw){
			  m_world = pw;
			  return *m_world;
}
 
char World::setV(char *v){
			  return *v;
}
#endif
