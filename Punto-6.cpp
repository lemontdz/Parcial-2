#include <iostream>
#include <cctype>
#include <string>

using namespace std;

void verPassw(string c)
{
    bool largo = false;
    bool mayus = false;
    bool minus = false;
    bool digit = false;
    bool simbol = false;

    if (c.length() >= 8)
    {
        largo = true;
    }else{
        cout << "- Contener minimo 8 caracteres." << endl;
    }

    for (int i = 0; i < c.length() ; i++)
    {
        if (isalpha(c[i]))
        {
            if (isupper(c[i]))
            {
                mayus = true;
            }else
            {
                minus = true;
            }
        }else if (isdigit(c[i]))
        {
            digit = true;
        }else if (ispunct(c[i]))
        {
            simbol = true;
        }
    }
   
    if (!mayus) 
    {
        cout << "- Contener al menos una mayuscula." << endl;
    }
    if (!minus) 
    {
        cout << "- Contener al menos una minuscula." << endl;
    }
    if (!digit) 
    {
        cout << "- Falta un digito al menos." << endl;
    }
    if (!simbol) 
    {
        cout << "- Contener al menos un simbolo." << endl;
    } 
    if (largo && mayus && minus && digit && simbol)
    {
        cout << "Contrasena valida." << endl;
    } else 
    {
        cout << "Contrasena invalida." << endl;
    }
}


int main ()
{
    string password;
    getline(cin, password);
    verPassw(password);

    return 0;
}