#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado{
	std::string name;


public:


	std::string getName() 
    { 
        return name; 
    };

	void setName(std::string input) 
    {
         name = input; 
    };
	double quotaTotalAnual()
    { 
        return (12*getQuotaMensalVendas()); //12 meses
    };

	
    void print(){

		std::cout << "Nome: " << getName() << std::endl;

		std::cout << "Valor pagamento por mês: " << pagamentoMes() << std::endl;
		
        std::cout << "Quota de vendas: " << quotaTotalAnual() << std::endl;
		
        std::cout << std::endl;

	};
};
