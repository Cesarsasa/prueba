#include "Propietario.cpp"
#include <iostream>
int main(int argc, char const *argv[])
{
    string nit, nombres, apellidos, direccion, f_n;
    double cui;
    int telefono;
      cout<<"Ingrese NIT:"<<endl;
      cin>>nit;
      cout<<"Ingrese CUI:"<<endl;
      cin>>cui;
      cout<<"Ingrese NOMBRES:"<<endl;
      cin>>nombres;
      cout<<"Ingrese APELLIDOS:"<<endl;
      cin>>apellidos;
      cout<<"Ingrese DIRECCION:"<<endl;
      cin>>direccion;
      cout<<"Ingrese TELEFONO:"<<endl;
      cin>>telefono;
       cout<<"Ingrese FECHA_NACIMIENTO:"<<endl;
      cin>>f_n;

    Propietario obj = Propietario( nombres, apellidos, direccion, telefono, f_n, nit, cui);
    
    obj.mostrar();  
    obj.agregar();
    
    /*cout<<"METODO USANDO GET:"<<endl;
    cout<<"------------------"<<endl;
    cout<<"Nit: "<<obj.getNit()<<endl;
    cout<<"CUI: "<<obj.getCui()<<endl;
	cout<<"Nombres: "<<obj.getNombres()<<endl;
	cout<<"Apellidos: "<<obj.getApellidos()<<endl;
	cout<<"Direccion: "<<obj.getDireccion()<<endl;
	cout<<"Telefono: "<<obj.getTelefono()<<endl;
    cout<<"Fecha de nacimiento: "<<obj.getFn()<<endl;
    cout<<"------------------"<<endl;*/
   
    
    /*
    Propietario obj = Propietario();
    obj.setNit(nit);
    obj.setCui(cui);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);
    obj.setFn(f_n);*/

    system("pause");
}

