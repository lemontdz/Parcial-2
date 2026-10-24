#include <iostream>
#include <string>

using namespace std;

void cifradoCes(char a, string c, long long despla)
{
    long long d = despla % 26;
    if (d < 0) {
        d += 26;
    }

    if (a == 'D' || a == 'd') {
        d = 26 - d;
    }

    for (int i = 0; i < c.length(); i++)
    {
        if (c[i] >= 'a' && c[i] <= 'z')
        {
            c[i] = 'a' + (c[i] - 'a' + d) % 26;
        } else if (c[i] >= 'A' && c[i] <= 'Z')
        {
            c[i] = 'A' + (c[i] - 'A' + d) % 26;
        }
    }

    cout << "Resultado: " << c << endl;
}


int main ()
{
    char tipo;
    string frase;
    long long k;

    cout << "Cifrar (C) o descifrar (D): ";
    cin >> tipo;
    cin.ignore();
  

    cout << "Desplazamiento: ";
    cin >> k;
    cin.ignore();
   

    cout << "Ingrese la frase: ";
    getline(cin, frase);
    
    cifradoCes(tipo ,frase, k);


    return 0;
}