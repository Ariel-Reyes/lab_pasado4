#include "producto.hpp"
#include<string>
#include <iostream>
using namespace std; 
	producto::producto(){
		
	} 
		producto::producto(string id,string nombre,string categoria ,int unidades,double precio){
			this->categoria=categoria; 
			this->id = id; 
			this->nombre = nombre; 
			this->unidades = unidades; 
			this->precio = precio; 
			
		}
		producto::~producto(){
			
		} 
	
	   void producto::setid(string id){
	   	this->id = id; 
	   } 
	   string producto::getid(){
	   	return this->id; 
	   }
	   
	   void producto::setnombre(string nombre){
	   	this->nombre =nombre; 
	   } 
	   string producto::getnombre(){
	   	return this->nombre; 
	   } 
	   
	   void producto::setcategoria(string categoria){
	   	this->categoria = categoria; 
	   }
	   string producto::getcategoria(){
	   	return this->categoria; 
	   } 
	   
	   void producto::setunidades(int unidades){
	   	this->unidades = unidades; 
	   } 
	   int producto::getunidades(){
	   	return this->unidades; 
	   }
	   
	   void producto::setprecio(double precio){
	   	this->precio = precio; 
	   } 
	   double producto::getprecio(){
	   	return this->precio; 
	   } 
	   
	   
	   void producto::Tostring(){
	   	cout<<"ID: "<<id<<" ,"<<" NOMBRE: "<<nombre<< " PRECIO:" << precio << " UNIDADES: " << unidades << "CATEGORIA: " << categoria <<endl;
	   }  
	   
	   
	   
	   
	   
