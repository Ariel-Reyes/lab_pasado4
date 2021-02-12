#include <iostream>
#include <string>
#include <vector>
#include "producto.hpp"

vector<producto>*s; 
using namespace std; 
int main() {
	
	
	int opc =1; 
	while(opc!=4){
		cout<<"------------MENU----------------"<<endl; 
		cout<<"Mantenimiento de producto.......1"<<endl; 
		cout<<"Estadisticas Generales..........2"<<endl; 
		cout<<"Busqueda por nombre..............3"<<endl; 
		cout<<"Salir............................4"<<endl; 
		cout<<"Ingrese la opcion que desea: "<<endl; 
		cin>>opc; 
		
		switch(opc){
			case 1: {
				
				break;
			}
			
			case 2:{
				
				break;
			}
			case 3:{
				
				break;
			}
			case 4:{
				cout<<"BYE BYE "<<endl; 
				break;
			}
				
		
		}

		
	}
	
	
	
	
	return 0;
}
