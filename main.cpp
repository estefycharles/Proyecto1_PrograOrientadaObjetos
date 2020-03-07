//
//  main.cpp
////////////////////////////////////////////////////
// Nombre archivo: ProyectoP1_PrograOrObj
// Descripción: Recibe un archivo de entrada con un codigo encriptado y regresa un archivo de salido con los datos desencriptados
// Autor: Estefania Charles A01283472
// Fecha: 6 de Marzo 2020 Versión: 1
////////////////////////////////////////////////////

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main() {
  ifstream archivoEntrada;
  ofstream archivoSalida;
  //Variables 
  string nomEntrada, nomSalida, linea1, parte1, parte2, opdr, varP1, varOp, numeros="0123456789";
  char espacio;
  int tam1, tam2, mayor, posOp, num=0, num2=0, pot, pot2;
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
  nomSalida = nomSalida + ".txt";
  //Abre archivo de salida
  archivoSalida.open(nomSalida.c_str());
  //
  //Lee la primera linea y lo guarda en el string linea1
  while(getline(archivoEntrada, linea1)){
    //Borra los espacios en blanco del string
    for (int i=0 ;i<linea1.length(); i++){
      espacio = linea1[i];
      if (espacio==' ') {
        linea1.erase(i,1);
        i--;
      }
    }
    //Lee la parte 1 del codigo, luego el operador y luego la parte 2
    while(archivoEntrada>>parte1>>opdr>>parte2){
      //Empieza a asignar operadores
      varOp = linea1[10]; //Asigna el valor que se encuentra en la posicion 10 de linea1
      posOp = opdr.find(varOp); //Busca la variable y obtine la posicion de linea1
      if (posOp>=0){ //Si encuentra la variable entra 
        opdr.erase(posOp,1); //Borra la posicion donde esta la variable
        opdr.insert(posOp,"+");//Inserta el operador
      }
      varOp = linea1[11];
      posOp = opdr.find(varOp);
      if (posOp>=0){
        opdr.erase(posOp,1);
        opdr.insert(posOp,"-");
      }
      varOp = linea1[12];
      posOp = opdr.find(varOp);
      if (posOp>=0){
        opdr.erase(posOp,1);
        opdr.insert(posOp,"*");
      }
      varOp = linea1[13];
      posOp = opdr.find(varOp);
      if (posOp>=0){
        opdr.erase(posOp,1);
        opdr.insert(posOp,"/");
      }//Termina de asignar los operadores
      //
      tam1 = parte1.length(); //Obtiene tamano de parte1
      pot = tam1-1; //Potencia que se utiliza para obtener el valor int del string (se utiliza despues)
      tam2 = parte2.length();
      pot2 = tam2-1;
      if (tam1>tam2)
        mayor=tam1;
      else
        mayor=tam2;
      //Inicia asignacion de numeros
      for (int j=0; j<mayor; j++){ //Recorre todas las posiciones del string parte1 o parte2
        //Asignacion de parte 1
        varOp = linea1[0];
        posOp = parte1.find(varOp);
        if (posOp>=0){
          parte1.erase(posOp,1);
          parte1.insert(posOp,"0");
        }
        varOp = linea1[1];
        posOp = parte1.find(varOp);
        if (posOp>=0){
          parte1.erase(posOp,1);
          parte1.insert(posOp,"1");
        }
        varOp = linea1[2];
        posOp = parte1.find(varOp);
        if (posOp>=0){
          parte1.erase(posOp,1);
          parte1.insert(posOp,"2");
        }
        varOp = linea1[3];
        posOp = parte1.find(varOp);
        if (posOp>=0){
          parte1.erase(posOp,1);
          parte1.insert(posOp,"3");
        }
        varOp = linea1[4];
        posOp = parte1.find(varOp);
        if (posOp>=0){
          parte1.erase(posOp,1);
          parte1.insert(posOp,"4");
        }
        varOp = linea1[5];
        posOp = parte1.find(varOp);
        if (posOp>=0){
          parte1.erase(posOp,1);
          parte1.insert(posOp,"5");
        }
        varOp = linea1[6];
        posOp = parte1.find(varOp);
        if (posOp>=0){
          parte1.erase(posOp,1);
          parte1.insert(posOp,"6");
        }
        varOp = linea1[7];
        posOp = parte1.find(varOp);
        if (posOp>=0){
          parte1.erase(posOp,1);
          parte1.insert(posOp,"7");
        }
        varOp = linea1[8];
        posOp = parte1.find(varOp);
        if (posOp>=0){
          parte1.erase(posOp,1);
          parte1.insert(posOp,"8");
        }
        varOp = linea1[9];
        posOp = parte1.find(varOp);
        if (posOp>=0){
          parte1.erase(posOp,1);
          parte1.insert(posOp,"9");
        }
        //Asignacion de parte 2
        varOp = linea1[0];
        posOp = parte2.find(varOp);
        if (posOp>=0){
          parte2.erase(posOp,1);
          parte2.insert(posOp,"0");
        }
        varOp = linea1[1];
        posOp = parte2.find(varOp);
        if (posOp>=0){
          parte2.erase(posOp,1);
          parte2.insert(posOp,"1");
        }
        varOp = linea1[2];
        posOp = parte2.find(varOp);
        if (posOp>=0){
          parte2.erase(posOp,1);
          parte2.insert(posOp,"2");
        }
        varOp = linea1[3];
        posOp = parte2.find(varOp);
        if (posOp>=0){
          parte2.erase(posOp,1);
          parte2.insert(posOp,"3");
        }
        varOp = linea1[4];
        posOp = parte2.find(varOp);
        if (posOp>=0){
          parte2.erase(posOp,1);
          parte2.insert(posOp,"4");
        }
        varOp = linea1[5];
        posOp = parte2.find(varOp);
        if (posOp>=0){
          parte2.erase(posOp,1);
          parte2.insert(posOp,"5");
        }
        varOp = linea1[6];
        posOp = parte2.find(varOp);
        if (posOp>=0){
          parte2.erase(posOp,1);
          parte2.insert(posOp,"6");
        }
        varOp = linea1[7];
        posOp = parte2.find(varOp);
        if (posOp>=0){
          parte2.erase(posOp,1);
          parte2.insert(posOp,"7");
        }
        varOp = linea1[8];
        posOp = parte2.find(varOp);
        if (posOp>=0){
          parte2.erase(posOp,1);
          parte2.insert(posOp,"8");
        }
        varOp = linea1[9];
        posOp = parte2.find(varOp);
        if (posOp>=0){
          parte2.erase(posOp,1);
          parte2.insert(posOp,"9");
        }
        //Termina la asignacion de numero
        //Cambia de string a int con ASCII
        //Parte 1
        for (int i=0; i<tam1;i++){
          num += (parte1[i]-48) * pow(10,pot);
          pot--;
        }
        //Parte 2
        for (int i=0; i<tam2;i++){
          num2 += (parte2[i]-48) * pow(10,pot2);
          pot2--;
        }
      }//Termina de recorrer todas las posiciones
      //Realiza operaciones y escribe en el archivo salida
      if (opdr=="+")
        archivoSalida<<parte1<<" + "<<parte2<<" = "<<num+num2<<endl;
      else if (opdr=="-")
        archivoSalida<<parte1<<" - "<<parte2<<" = "<<num-num2<<endl;
      else if (opdr=="*")
        archivoSalida<<parte1<<" * "<<parte2<<" = "<<num*num2<<endl;
      else if (opdr=="/")
        archivoSalida<<parte1<<" / "<<parte2<<" = "<<num/num2<<endl;
      num=0; //Borra lo que tenia guardado
      num2=0;
    }//end while2
  }//end while1
  //Cierra los archivos
  archivoEntrada.close();
  archivoSalida.close();
return 0;
}