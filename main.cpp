#include <iostream>
#include <string>
#include <vector>
#include "producto.hpp"
#include "inventario.hpp"


using namespace std; 
int main() {
	inventario *a = new inventario(); 
	 vector<producto*>inventario; 
	// inventario = a.retornoProducto(); 

	
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
				int op; 
				cout<<"-------Mantenimiento de producto--------"<<endl; 
				cout<<"1.........Agregar producto"<<endl; 
				cout<<"2.........Modificar producto"<<endl; 
				cout<<"3..........Eliminar producto"<<endl; 
				cout<<"Ingrese la opcion que desea: "<<endl; 
				cin>>op; 
				switch(op){
					case 1:{
						cout<<"--------Agregacion de Producto-----------"<<endl; 
						string id , nombre , categoria; 
						int unidades; 
						double precio; 
						cout<<"Ingrese el ID: "<<endl; 
						cin>>id; 
						cout<<"Ingrese el Nombre: "<<endl;
						cin>>nombre; 
						cout<<"Ingrese la categoria: "<<endl; 
						cin>>categoria; 
						cout<<"Ingrese las unidades: "<<endl;
						cin>>unidades; 
						cout<<"Ingrese el precio: "<<endl; 
						cin>>precio; 
						
						 //producto* per = new producto(id,nombre,categoria,unidades,precio);
						a->agregarProduc(new producto(id,nombre,categoria,unidades,precio)); 

					//	inventario.push_back(per);
						
		
						break;
					} // fin case 1 del case 1 
					
					case 2:{
					if(a->retornoProducto().size()==0){
						cout<<"AUN NO HAY PRODUCTOS EN EL INVENTARIO"<<endl;
				} else {
				
						
						
						
						producto *s;
						for(int i=0; i<a->retornoProducto().size(); i++){
                        s = a->retornoProducto()[i]; 
				        cout << i <<" " << " ID:"<< s->getid() << " NOMBRE: " << s->getnombre() << " CATEGORIA: "<< s->getcategoria() << " UNIDADES: "  << s->getunidades() <<  " PRECIO: "<< s->getprecio() <<  endl;
						}
						
				 cout<<"Ingrese cual producto desea modificar: "<<endl; 
				 int indice; 
				 cin>>indice; 
				 
				 s = a->retornoProducto()[indice]; 
				 
				 cout<<"Que desea modificar? : "<<endl; 
				 cout<<"1.ID"<<endl; 
				 cout<<"2.NOMBRE"<<endl; 
				 cout<<"3.CATEGORIA"<<endl;
				 cout<<"4.UNIDADES"<<endl; 
				 cout<<"5.PRECIO"<<endl; 
				 cout<<"Ingrese la opcion: ";
				 int deci; 
				 cin>>deci; 
				 while(deci<=0 || deci>5){
			cout<<"Ingrese la opcion: ";
				 cin>>deci; 
				 }
				 // switch del case 2 del case 1 principal ; 
                  
                  switch(deci){
                  	case 1:{
                  		cout<<"Ingrese el nuevo id: "<<endl; 
                  		string n_id; 
                  		cin>>n_id; 
                  		s->setid(n_id); 
		
						break;
					  } 
					  case 2:{
					    cout<<"Ingrese el nuevo nombre: "<<endl; 
                  		string n_nombre; 
                  		cin>>n_nombre; 
                  		s->setnombre(n_nombre); 
						break;
					  }
					  case 3:{
					  	 cout<<"Ingrese la nueva categoria: "<<endl; 
                  		string cate; 
                  		cin>>cate; 
                  		s->setcategoria(cate);
						break;
					  } 
					  case 4:{
					  	 cout<<"Ingrese la nueva cant de unidades: "<<endl; 
                  		int uni; 
                  		cin>>uni; 
                  		s->setunidades(uni);
					  	
						break;
					  } 
					  case 5:{
					  	  	 cout<<"Ingrese el nuevo precio: "<<endl; 
                  		int uni; 
                  		cin>>uni; 
                  		s->setprecio(uni);
						break;
					  } // fin del switch del case 2 del case 1 principal 
                  		
				  }


					}
						
						
						break;
					} // fin case 2 
					
					case 3:{
						// eliminar 
 						if(a->retornoProducto().size()==0){
						cout<<"AUN NO HAY PRODUCTOS EN EL INVENTARIO"<<endl;
						} else {
						
							producto *s;
						for(int i=0; i<a->retornoProducto().size(); i++){
                        s = a->retornoProducto()[i]; 
				        cout << i <<" " << " ID:"<< s->getid() << " NOMBRE: " << s->getnombre() << " CATEGORIA: "<< s->getcategoria() << " UNIDADES: "  << s->getunidades() <<  " PRECIO: "<< s->getprecio() <<  endl;
						}
						
						cout<<"Ingrese el producto que desea eliminar: "<<endl; 
						int indice; 
						cin>>indice; 
						delete  a->retornoProducto()[indice];
                        a->retornoProducto().erase(a->retornoProducto().begin()+indice);						

						 
					  
					}
						
						
						break;
					}
				}
				
				
				
				
				
				break;
			} // fin case 1 principal 
			
			case 2:{
			
			
			
			a->agregarcategorias("Cloro");
			a->agregarcategorias("ACE");
		    a->agregarcategorias("pepsi cola");
			a->agregarcategorias("coca cola"); 
			a->agregarcategorias("Cereal");
			
		

						
				
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
