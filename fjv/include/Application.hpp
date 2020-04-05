#ifndef APPLICATION_HPP
#define APPLICATION_HPP
/**
 * @file Application.hpp
 * @author ferjava
 * @brief  Archivo base  de mi FrameWork para los ejercicios de Aprendizaje
 * @version 0.1
 * @date 2020-04-05
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include <string>
namespace fjv
/**
 *@namespace fjv
 *@brief contiene todas las clases y excepcines del framework
 * 
 * 
 **/

{
   /**
    * @brief  Crea un objeto version
    * Crea un Objeto con dos @param MAJOR @param MINOR de tipo int 
    * que determinan la es estado de version del programa 
    * 
    */
    struct VERSION
    {
        int MAJOR;
        int MINOR;
    };
    /**
     * @class Application
     * @brief Clase base de donde creamos nuestras aplicaciones 
     *     
     *
     * 
     */
    class Application
    {
        public:/**
         * @brief Construct a new Application object
         * Construye el objeto Aplicacion por defecto 
         * 
         */
            Application();
            /**
             * @brief Se encarga de la inicializacion de nuestra aplicacion
             * 
             * @return int 
             */
            Application(std::string name_value , int version_major , int version_minor)
            {
                name = name_value;
                version.MAJOR = version_major;
                version.MINOR = version_minor;
            }
            virtual ~Application(){};
            virtual int Init (){return 0;};
            /**
             * @brief Se encarga de la logica de nuestro programa 
             * Determina que cambios afectan nuestra aplicacion y que hacer 
             * 
             * @return int 
             */
            virtual int Update (){return 0;};
            /**
             * @brief Se encarga de destruir y limpiar todos nuestros objetos 
             * 
             * @return int 
             */
            virtual int Exit(){return 0;};
            ///////////////////
            ///Modificadoras
            ///////////////////
            
            std::string get_name (){return name;};///<coje el nombre de la aplicacion 
            void set_name(std::string name_value ){name = name_value;};///<Coloca el nombre de la aplicaion 
            fjv::VERSION get_version (){return version;};///<coje la version de la aplicacion
            void set_version (int major_value  , int minor_value ){version.MAJOR = major_value;
                                                                   version.MINOR = minor_value;
              };///<Coloca la version de la aplicacion 
            int get_version_major() {return version.MAJOR;};///<Retorna el MAJOR de la version 
            int get_version_minor() {return version.MINOR;};///<Retorna el MINOR de la version 




        protected:
        private: 
        fjv::VERSION version;
        std::string name;
    };

}

#endif //APPLICATION_HPP