#include <iostream> 

using namespace std; 

int divisoresNum (int c) 
{
    int sumDivisores = 0;

    for (int i = c - 1; i >= 1; i--){

        if (c % i == 0)  
            sumDivisores = sumDivisores + i;

    }    
        
    return sumDivisores;
}       

int main ()
{
    int a;
    int b;
    cout << "ingrese un numero a (>=1): ";
    cin >> a;
    cout << "Ingrese un numero b (>=a): ";
    cin >> b;

    if ( a > b )
    {
        cout << "Rango no permitido. El primer numero debe ser mayor que el segundo.";
    }    

    int perfectos = 0;
    int abundantes = 0;
    int deficientes = 0;

    for (int k = a; k <= b; k++)
    {
        cout << k << ": ";

        if (k == divisoresNum(k))
        {
            cout << "Perfecto " << "(Suma de divisores = " << divisoresNum(k) << ")" << endl;
            perfectos++;

        } else {
            if (k > divisoresNum(k)){

                cout << "Deficiente " << "(Suma de divisores = " << divisoresNum(k) << ")" << endl;
                deficientes++;

            } else {

                cout << "Abundante " << "(Suma de divisores = " << divisoresNum(k) << ")" << endl;
                abundantes++;

            }


        } 

    }

    cout << "Perfectos: " << perfectos << ", Abundantes: " << abundantes << ", Deficientes: " << deficientes << endl;

    return 0;
    
}