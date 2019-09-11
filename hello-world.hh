#include <iostream>
#include <string>

class Hello{
	  private:
		  std::string *m_hello;
		  char *v;

	  public:
		  std::string setHello(std::string *ph);
};

class World : public Hello{
	  protected:
		  std::string *m_world;
	  public:
		  std::string setWorld(std::string *pw);

		  char setV(char *v);
};
