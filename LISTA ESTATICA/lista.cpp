#include<iostream>


#define  TamMax 50;

class ListEstatica{

    private:
        int ult;
        int datos[50];


    public: 

        ListEstatica(){ult = -1;}
        bool Vacia(){
            if(ult == -1){
            return true;
        }else{
            return false;
        }
    }


    bool Llena(){
        if(ult == TamMax -1 ){
            return true;
        }else{
            return false;
        }
    }


    int Inserta(int& elm, int& pos){
        if(Llena() && pos <ult +1 || pos >TamMax-1){
            std::cout<<"Imposible insertar"<<std::endl;
            return 0;
        }
        int i= ult+1;
        while (i > pos){
            datos[i+1] = datos[i-1];
            i++;
        }
        datos[pos] = elm;
        ult++;
        return 1;

    }

    int Elimina(int& pos){
        if(Vacia() && pos<0 || pos >ult ){
            std::cout<<"Imposible eliminar"<<std::endl;
            return 0;
        }
        int i = ult;
        while ()
        {
            /* code */
        }
        

    }

};