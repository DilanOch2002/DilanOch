/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int inicial,final, rangoinicial, rangofinal;
   std::cout<<"Numero a multiplicar para iniciar"<<std::endl;
   std::cin>>inicial;
   std::cout<<"Numero a multiplicar para finalizar"<<std::endl;
   std::cin>>final;
   std::cout<<"Numero por el cual iniciar para multiplicar"<<std::endl;
   std::cin>>rangoinicial;
   std::cout<<"Numero por el cual terminar de multiplicar"<<std::endl;
   std::cin>>rangofinal;
   
   for(int i=inicial; i<=final;i++){
       for(int j=rangoinicial;j<=rangofinal;j++){
           std::cout<<i<<"x"<<j<<"="<<i*j<<std::endl;
       }
   }
    return 0;
}