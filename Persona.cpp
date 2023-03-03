#include<iostream>
using namespace std; 
class Persona
{
    //atributos
    protected : string nombres, apellidos, direccion, f_n;
                int telefono;
    //constructor
    protected : 
                Persona(){

                }
                Persona(string nom, string ape, string dir, int tel, string fechan){
                    nombres=nom;
                    apellidos=ape;
                    direccion=dir;
                    telefono=tel;
                    f_n=fechan;



                }
    void mostrar();
    void agregar();


};

