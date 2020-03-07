//
//  main.cpp
////////////////////////////////////////////////////
// Nombre archivo: ProyectoP1_PrograOrObj
// Descripción: 
// Autor: Estefania Charles A01283472
// Fecha: 6 de Marzo 2020 Versión: 1
////////////////////////////////////////////////////

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  ifstream archivoEntrada;
  ofstream archivoSalida;
  //Variables 
  string nomEntrada, nomSalida, linea;
  char x,op;
  int x2;
  //Pide al usuario el nombre del archivo de entrada hasta que coincida
  do {
  cout<<"Teclea el nombre del archivo de entrada para los datos encriptados: "<<endl;
  cin>>nomEntrada;
  nomEntrada = nomEntrada + ".txt";
  //Abre archivo de entrada
  archivoEntrada.open(nomEntrada.c_str());
  //Mientras no lo encuentre o pueda abrir, marcará error
  if (!archivoEntrada.is_open() )
      cout<< "No se encontró el archivo. Intentalo de nuevo" << endl;
  } while (!archivoEntrada.is_open());
  ////Pide al usuario el nombre del archivo de salida
  cout<<"Teclea el nombre del archivo de salida para los datos desencriptados: "<<endl;
  cin>>nomSalida;
  //Abre archivo de salida
  archivoSalida.open(nomSalida.c_str());
  while(!archivoEntrada.eof()){
    getline(archivoEntrada, linea);
    cout<<"Cambio de linea"<<endl;
  ///*for (int i=0; i<20; i++){
  //archivoEntrada >> x; 
  //  switch (x)
char arreglo[100];
char empty[100]
for (int w=0 ;w< linea.length(); w++){
   char var=linea[w];
   arreglo[w]=var;
 
}
  cout<<arreglo<<endl;


for (int z=0;z<100;<z++){
  
}
arreglo = empty;

}
cout<<" se termino parte uno"<<endl;
}

