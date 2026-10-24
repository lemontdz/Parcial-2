#include <iostream>
#include <string>

using namespace std;

void cifradoCes(char a , string c, int despla)
{
    string abecedario = "abcdefghijklmnopqrstuvwxyz";
    string b = c;

   
    if (a == 'C' || a == 'c')
    { 
        if (despla < 0)
        {
            despla = 26 + despla;
        }

        for (int i = 0; i < c.length(); i++)
        {
            for(int k = 0; k < abecedario.length(); k++) 
            {
                if (c[i] == abecedario[k])
                {
                    b[i] = abecedario[(k + despla) % abecedario.length()] ;
                }
            }
        } 
        cout << b << endl;
    }

    if ( a == 'D' || a == 'd')
    {
        for (int i = 0; i < c.length(); i++)
        {
            for(int k = 0; k < abecedario.length(); k++) 
            {
                if (c[i] == abecedario[k])
                {
                    b[i] = abecedario[(k - despla + abecedario.length()) % abecedario.length()] ;
                }
            }
        } 
        cout << b << endl;

    }
}


int main ()
{
    char tipo;
    string frase;
    int k;

    cout << "Cifrar (C) o descifrar (D): ";
    cin >> tipo;
    cin.ignore();
  

    cout << "Desplazamiento: ";
    cin >> k;
    cin.ignore();
   

    cout << "Ingrese la frase: ";
    getline(cin, frase);
    
    cout << "Resultado: ";
    cifradoCes(tipo ,frase, k);


    return 0;
}