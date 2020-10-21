#include "Engenheiro.hpp"
#include "Vendedor.hpp"

int main() {

  Engenheiro eng1;
  eng1.setNome("Joao Snow");
  eng1.setSalarioHora(35);
  eng1.setProjetos(3);
  eng1.settotalHoras(9.5);
  empregados.push_back(&eng1);
	
	
	
  Engenheiro eng2;
  eng2.setNome("Daniela Targaryen");
  eng2.setSalarioHora(30);
  eng2.setProjetos(1); 
  eng2.settotalHoras(8); 
  empregados.push_back(&eng2);


  
  Engenheiro eng3;
  eng3.setNome("Bruno Stark");
  eng3.setSalarioHora(30);
  eng3.setProjetos(2); 
  eng3.settotalHoras(8);
  empregados.push_back(&eng3); 
  
  
  Vendedor vend1;
  vend1.setNome("Tonho Lannister");
  vend1.setSalarioHora(20);
  vend1.setQuotaMensalVendas(5000);
  vend1.settotalHoras(6); 
  empregados.push_back(&vend1);


  
  Vendedor vend2;
  vend2.setNome("Jose Mormont");
  vend2.setSalarioHora(25);
  vend2.setQuotaMensalVendas(3000);
  vend2.settotalHoras(8); 
  empregados.push_back(&vend2);
	
	
	
  Vendedor vend3;
  vend3.setNome("Sonia Stark");
  vend3.setSalarioHora(30);
  vend3.setQuotaMensalVendas(4000);
  vend3.setHorasTrabalhadas(8);
  empregados.push_back(&vend3);  
  
  return 0;	
}
