
#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado{

  std::string name;

  int projects;


public:
  std::string getName() 
  {
       return name;
  };

  int getProjects() 
  { 
      return projects; 
  };

  void setName(std::string input) 
  {
       name = input; 
  };

  void setProjects(int input) 
  { 
      projects = input; 
  };

  void print(){
    
		std::cout << "Nome: " << getName() << std::endl;

		std::cout << "Valor pagamento por mês: " << pagamentoMes() << std::endl;
		
        std::cout << "Projetos: " << setProjects() << std::endl;
		
        std::cout << std::endl;

	};
  
};