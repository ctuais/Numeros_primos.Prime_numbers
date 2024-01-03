/*
	Números primos en C++
	inicia con 2 y finaliza con $limite.
*/
#include <iostream> //std::cout, std::endl
#include <windows.h> //b1 GetStdHandle, SetConsoleTextAttribute, SetConsoleTitle
#include <iomanip> //b2 //std::setw(3) << std::setfill('0')

#define $limite 100 //límite de búsqueda

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //b1

bool primo(int numero)
{
    int x=2;
    double numeroDividido=(double)numero/((double)x);
    bool retorno=true;
    if (numero == 0 || numero == 1)
        retorno=false;
    else
    {
        while ((x <= (numeroDividido)) && retorno)
        {
            if (numero % x == 0)
                retorno=false; //no es primo
            x++;
            numeroDividido=(double)numero/((double)x);
        }
    }
    return retorno;
}

int main(void)
{
    SetConsoleTitle("Listado de numeros primos y no primos (1 al 100)"); //b1
    int numero=0, Primo=0, noPrimo=0;
    for(numero=1; numero <= $limite; numero++)
    {
        if (primo(numero))
        {
            SetConsoleTextAttribute(hConsole,10); //b1
            std::cout << std::setw(3) << std::setfill('0') << numero << " "; //b2
            Primo++;
        }
        else
        {
            SetConsoleTextAttribute(hConsole,12); //b1
            std::cout << std::setw(3) << std::setfill('0') << numero << " "; //b2
            noPrimo++;
        }
        if(!(numero%13)) //columnas
            std::cout << std::endl;
    }
    SetConsoleTextAttribute(hConsole,7); //b1
    std::cout << std::endl << "            :: TOTAL :: " << std::endl << std::endl;
    std::cout << "  " << Primo;
    SetConsoleTextAttribute(hConsole,10); //b1
    std::cout <<"   <- PRIMOS";
    SetConsoleTextAttribute(hConsole,7); //b1
    std::cout << "  |  " << noPrimo;
    SetConsoleTextAttribute(hConsole,12); //b1
    std::cout  <<"   <- NO PRIMOS" << std::endl;
    SetConsoleTextAttribute(hConsole,7); //b1
    (getchar());
    return 0;
}

