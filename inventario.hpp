#ifndef inventario_hpp 
#define inventario_hpp
#include<string>
#include <vector>
#include "producto.hpp"
class inventario{
	
	private: 
	vector<producto*> produ; 
	vector<string> categoria; 
	string id; 
	
	
	public: 
    inventario(); 
    inventario(	vector<producto*> , vector<string>);
    ~inventario(); 
    
    void agregarProduc(producto*);
       
	

	void agregarcategorias(string); 
		
		 vector<producto*> retornoProducto();
    void eliminarP(string id);
	
	
 
    
	
 
};



#endif
