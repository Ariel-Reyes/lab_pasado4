#include "inventario.hpp"
inventario::inventario(){
}; 
    inventario::inventario(	vector<producto*> produ, vector<string> categoria){
	};
    inventario::~inventario(){
	}; 
    
    void inventario::agregarProduc(producto* p){
    	produ.push_back(p);
    	
	};
	
		 vector<producto*> inventario::retornoProducto(){
	 	return this->produ; 
	 };
	

