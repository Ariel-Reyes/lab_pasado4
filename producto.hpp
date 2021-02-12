#ifndef producto_hpp 
#define producto_hpp
#include<string>
using namespace std; 

class producto{
	
	private: 
	int id; 
	string nombre; 
	string categoria; 
	int unidades; 
	double precio; 
	
	public:
		
		producto(); 
		producto(int,string,string,int,double);
		~producto(); 
	
	   void setid(int); 
	   int getid();
	   
	   void setnombre(string); 
	   string getnombre(); 
	   
	   void setcategoria(string);
	   string getcategoria(); 
	   
	   void setunidades(int); 
	   int getunidades(); 
	   
	   void setprecio(double); 
	   double getprecio(); 
	   
	   
	   void Tostring();  
	
	
	
}; 



#endif
