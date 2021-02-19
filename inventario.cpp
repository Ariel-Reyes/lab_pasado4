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
	
	void inventario::agregarcategorias(string p){
		categoria.push_back(p);
	}
		vector<string> inventario::retornoCategoria(){
			return this->categoria; 
		}; 

	
		 vector<producto*> inventario::retornoProducto(){
	 	return this->produ; 
	 };
	

