#include <iostream>
#include <cstdlib>
using namespace std;
using std::cout;
using std::cin;
 
struct data {
    
    int dia;
    int mes;
    int ano;
};

struct AlunoApresenta { 
    data apresentacao;  
    int dia;
    int mes;
    int ano;
        
};

 

int main (void){
    
  
    AlunoApresenta hoje;
    hoje.dia = 23;
    hoje.mes = 9;
    hoje.ano = 2008;
    
    hoje.apresentacao.dia = 12;
    hoje.apresentacao.mes = 05;
    hoje.apresentacao.ano = 2017;
    
    
    cout <<"Hoje e "<<hoje.dia<<"/"<<hoje.mes<<"/"<<hoje.ano<<endl;
    cout <<"Data de apresentacao: "<<hoje.apresentacao.dia<<"/"<<hoje.apresentacao.mes<<"/"<<hoje.apresentacao.ano<<endl;
    system ("pause");

    return 0;
};
