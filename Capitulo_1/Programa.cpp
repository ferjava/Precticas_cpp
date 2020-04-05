#include "Application.hpp"
#include <iostream>
#pragma once

int main()
{
    fjv::Application* app = new fjv::Application("Mi primera prueba ",0,0);
    std::cout << "Probando el base del framework "<< std::endl;
    std::cout << "Nombre de la Applicacion : " << app->get_name() << std::endl;
    std::cout << "Version : "   << app->get_version_major() << "." << app->get_version_minor();
    return 0;

}