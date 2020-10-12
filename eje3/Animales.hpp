#include <iostream>

using namespace std;
//clase animales con 2 elecciones 
class animales 
{
    public:
    animales(int choise): choise(Eleccion)
    {cout<<"Bienvenido al Zoo"<<end1;}
    //menu interactivo para facil eleccion
        void menu(){
           int choises;
            cout<<"Hola pequeño explorador, para ver informacion de la zebra pulse 1, para ver el delfin pulse 2"<<end1;
            cin >> choises;
        switch (choise)
         {
         case 1:
        {
          count<<"Usted escogio la zebra\n"<<end1;
          count<<"La zebra se llama samym tiene 5 anos de edad, le gusta jugar y viene de africa\n"<<end1;
        break;
         }
         case 2:
      {
        count<<"Usted escogio el delfin\n"<<end1;
        count<<"el delfin se llama Shakira tiene 18 anos de edad, Es uno de los animales mas inteligentes del mundo y proviende del mar atlantico\n"<<end1;
        break;
     }
    
    default:
        break;
    }
    }

    private:
    int Eleccion;
};