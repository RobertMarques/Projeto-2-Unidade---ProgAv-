#include <iostream>
#include <fstream>
#include <string>
#include "sculptor.h"
#include "voxel.h"

int main(void){
  Sculptor cuboMagico(21,21,21);
	
  //cubo 21x21x21
	cuboMagico.putBox(0,21,0,21,0,21); 
  //Realizar face verde
	cuboMagico.setColor(0,1,0,1);
  
  cuboMagico.putBox(0,21,0,21,0,1); 
  
  cuboMagico.setColor(0,0,0,1); 
  cuboMagico.putBox(0,21,0,1,0,1); 
  cuboMagico.putBox(0,21,6,7,0,1);
  cuboMagico.putBox(0,21,13,14,0,1);
  cuboMagico.putBox(0,21,20,21,0,1);

  cuboMagico.putBox(0,1,0,21,0,1);
  cuboMagico.putBox(6,7,0,21,0,1);
  cuboMagico.putBox(13,14,0,21,0,1);
  cuboMagico.putBox(20,21,0,21,0,1);


  //Realizar face azul
  cuboMagico.setColor(0,0,1,1);
  
  cuboMagico.putBox(0,21,0,1,0,21); 

  cuboMagico.setColor(0,0,0,1); 
  cuboMagico.putBox(0,21,0,1,0,1); 
  cuboMagico.putBox(0,21,0,1,6,7);
  cuboMagico.putBox(0,21,0,1,13,14);
  cuboMagico.putBox(0,21,0,1,20,21);

  cuboMagico.putBox(0,1,0,1,0,21);
  cuboMagico.putBox(6,7,0,1,0,21);
  cuboMagico.putBox(13,14,0,1,0,21);
  cuboMagico.putBox(20,21,0,1,0,21);

  //Realizar face vermelha
  cuboMagico.setColor(1,0,0,1);
  
  cuboMagico.putBox(0,1,0,21,0,21); 

  cuboMagico.setColor(0,0,0,1); 
  cuboMagico.putBox(0,1,0,1,0,21); 
  cuboMagico.putBox(0,1,6,7,0,21);
  cuboMagico.putBox(0,1,13,14,0,21);
  cuboMagico.putBox(0,1,20,21,0,21);

  cuboMagico.putBox(0,1,0,21,0,1);
  cuboMagico.putBox(0,1,0,21,6,7);
  cuboMagico.putBox(0,1,0,21,13,14);
  cuboMagico.putBox(0,1,0,21,20,21);

  //Realizar face amarela
  cuboMagico.setColor(1,1,0,1);
  
  cuboMagico.putBox(0,21,20,21,0,21); 
  
  cuboMagico.setColor(0,0,0,1);
  cuboMagico.putBox(20,21,20,21,0,21);
  cuboMagico.putBox(13,14,20,21,0,21);
  cuboMagico.putBox(6,7,20,21,0,21);
  cuboMagico.putBox(0,1,20,21,0,21);

  cuboMagico.putBox(0,21,20,21,20,21);
  cuboMagico.putBox(0,21,20,21,13,14);
  cuboMagico.putBox(0,21,20,21,6,7);
  cuboMagico.putBox(0,21,20,21,0,1);

  //Realizar face ciano
  cuboMagico.setColor(0,1,1,1);
  
  cuboMagico.putBox(20,21,0,21,0,21); 
  
  cuboMagico.setColor(0,0,0,1);
  cuboMagico.putBox(20,21,20,21,0,21);
  cuboMagico.putBox(20,21,13,14,0,21);
  cuboMagico.putBox(20,21,6,7,0,21);
  cuboMagico.putBox(20,21,0,1,0,21);

  cuboMagico.putBox(20,21,0,21,20,21);
  cuboMagico.putBox(20,21,0,21,13,14);
  cuboMagico.putBox(20,21,0,21,6,7);
  cuboMagico.putBox(20,21,0,21,0,1);

    //Realizar face rosa
  cuboMagico.setColor(1,0,1,1);
  
  cuboMagico.putBox(0,21,0,21,20,21); 
  
  cuboMagico.setColor(0,0,0,1);
  cuboMagico.putBox(0,21,20,21,20,21);
  cuboMagico.putBox(0,21,13,14,20,21);
  cuboMagico.putBox(0,21,6,7,20,21);
  cuboMagico.putBox(0,21,0,1,20,21);

  cuboMagico.putBox(20,21,0,21,20,21);
  cuboMagico.putBox(13,14,0,21,20,21);
  cuboMagico.putBox(6,7,0,21,20,21);
  cuboMagico.putBox(0,1,0,21,20,21);
 	
  cuboMagico.writeOFF((char*)"CuboMagico.off");
  }