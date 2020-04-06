#include "Application.hpp"
#include <iostream>

int main(int argc, char* argv[])
{
     fjv::Application* app = new fjv::Application("Mi primera prueba ",0,0);
     std::cout << "Probando el base del framework "<< std::endl;
    if(argc < 3)
    {
        for (int i =0 ;i< argc ; i++)
        {
            std::string arg = argv[i]; 
            if ((arg == "-v") || (arg == "--version")) 
            {
             std::cout << "Version : "   << app->get_version_major() << "." << app->get_version_minor() << std::endl ;
             
            }
            else if ((arg == "-h") || (arg == "--help"))
            {
                std::cout << "Nombre de la Applicacion : " << app->get_name() << std::endl;
                std::cout << "\t -h o --help\t\t Muestra la Ayuda  "<<std::endl ;
                std::cout << "\t -v o --version\t\t Muestra la version  "<<std::endl ;
                
                
            }
            else
            {
                /* code */
               // 
                std::cout << "Hola Mundo " << std::endl ;
            }
            

        }  
    }
   
    
    
    return 0;

}