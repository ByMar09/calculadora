#include<iostream>
#include<cmath>
#include<cstdlib>

int menu{
    int opc;
    std::cout<<"::::Menu calculadora::::"<<std::endl;
    std::cout<<"\t1. Suma \n\t2.Resta \n\t3. Multiplicación \n\t4.División"<<std::endl;
    std::cin>>opc;

    return 0;
}

double readnum(double num){
    std::cout<<"Ingrese un número: "<<std::endl;
    std::cin>>num;
    return(num);
}

double suma(double n1, double n2){
    return(n1+n2);
}
double resta(double n1, double n2){
    return(n1-n2);
}
double mult(double n1, double n2){
    return(n1*n2);
}
double div(double n1, double n2){
    return(n1/n2);
}

int main(){
    double x,y;
    x=readnum();
    y=readnum();
    switch(menu()){
        case 1:
            std::cout<<"La suma es: "<<suma(x,y)<<std::endl;
        break;
        case 2:
            std::cout<<"La resta es: "<<resta(x,y)<<std::endl;
        break;
        case 3:
            std::cout<<"La multiplicación es: "<<mult(x,y)<<std::endl;
        break;
        case 4:
            std::cout<<"La división es: "<<div(x,y)<<std::endl;
        break;
        default:
            std::cout<<"Opción inválida"<<std::endl;
        break;
    }
    return 0;
}