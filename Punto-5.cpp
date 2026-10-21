#include <iostream>
#include <string>

using namespace std;

int main()
{
    string frase;
    getline(cin, frase);
    
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