#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int numero;

    cout<< "\n   Introduzca un numero entero (1-10): ", 163<<endl;
    cin>>"%d", &numero;

    if ( numero >= 1 && numero <= 10 )

        switch ( numero )
        {
            case  1 : cout<< "\n   uno" <<endl;
                      break;
            case  2 : cout<< "\n   dos" <<endl;
                      break;
            case  3 : cout<< "\n   tres" <<endl;
                      break;
            case  4 : cout<< "\n   cuatro" <<endl;
                      break;
            case  5 : cout<< "\n   cinco" <<endl;
                      break;
            case  6 : cout<< "\n   seis" <<endl;
                      break;
            case  7 : cout<< "\n   siete" <<endl;
                      break;
            case  8 : cout<< "\n   ocho" <<endl;
                      break;
            case  9 : cout<< "\n   nueve" <<endl;
                      break;
            case 10 : cout<< "\n   diez" <<endl;
        }
    else
        cout<< "\n   ERROR: El numero debe ser >= 1 y <= 10.", 163 <<;
 

    return 0;
}