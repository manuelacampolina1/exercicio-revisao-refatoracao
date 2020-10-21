#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  public:
    double salarioHora;  
    double quotaMensalVendas;  
  
    double totalHoras; 

	//metodos

	double gettotalHoras()
	{
		return totalHoras;
	}
	
	double getquotaMensalVendas()
	{
		return quotaMensalVendas;
	}
	
	double getsalarioHora()
	{
		return salarioHora;
	}
		
	void settotalHoras(double input)
	{
		totalHoras = input;
	}	
	void setquotaMensalVendas (double input)
	{
		quotaMensalVendas = input;
	}	
	void setsalarioHora (double input)
	{
		salarioHora = input;
	}	



    double pagamentoMes(double horasTrabalhadas) {
 
      double t = horasTrabalhadas;
	  
	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > 8) {
        double x = horasTrabalhadas - 8;
        t += x / 2;
      }
	  return t * salarioHora;
    }
	
};

#endif
