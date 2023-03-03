#include "Persona.cpp"
#include <iostream>
using namespace std;
class Propietario: Persona
{
    //atributos 
    private: string nit;
            double cui;

    //constructor  
    public:
    Propietario(){

    }
     Propietario(string nom, string ape, string dir, int tel, string fechan, string nt, double c_ui) : Persona(nom, ape, dir, tel, fechan){

        nit= nt;
        cui=c_ui;


    }
   
  // METODOS
  //set (modificar)
        void setNit(string n){nit = n;}
        void setCui(double cu_i){cui = cu_i;}
        void setNombres(string nom){nombres = nom;}
        void setApellidos(string ape){apellidos = ape;}
        void setDireccion(string dir){direccion = dir;}
        void setTelefono(int tel){telefono = tel;}
        void setFn(string fn){f_n = fn;}
  //get (mostrar)
        string getNit(){	return nit;}
        double getCui(){	return cui;}
        string getNombres(){	return nombres;}
        string getApellidos(){	return apellidos;}
        string getDireccion(){	return direccion;}
        int getTelefono(){	return telefono;}
        string getFn(){return f_n;}
    //metodo
        void mostrar(){
             cout<<"METODO USANDO void:"<<endl;
            cout<<"--------------------"<<endl;
            cout<<"NIT "<<nit<<endl;
            cout<<"CUI: "<<cui<<endl;
            cout<<"NOMBRE:"<<nombres<<endl;
            cout<<"APELIIDOS: "<<apellidos<<endl;
            cout<<"DIRECCION: "<<direccion<<endl;
            cout<<"TELEFONO:"<<telefono<<endl;
            cout<<"FECHA DE NACIMIENTO: "<<f_n<<endl;

        }
        void agregar(){
            cout<<"--------------------"<<endl;
            cout<<"atributos agregados exitosamente"<<endl;
        }
};

