#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string frase;
    cout << "Ingrese una frase: ";
    getline(cin, frase);
    for (char& c : frase) 
    {
        c = static_cast<char>(tolower(static_cast<unsigned char>(c)));
    }
    
    bool esPalin = true;

    for (int i = 0, k = frase.length() - 1; i < k; i++, k--)
    {
        for (; i < k && frase[i] == ' '; i++)
        {
        }

        for (; i < k && frase[k] == ' '; k--)
        {
        }

        if (i < k && frase[i] != frase[k])
        {
            esPalin = false;
            break;
        }
    }

    if (esPalin){
        cout << "Es palindromo.";

    }else 
        cout << "No es palindromo.";

    return 0;

}