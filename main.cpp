#include <iostream>
#include <cstdlib>

using namespace std;

void joc(int &sumaDeBani, int premiu)
{
    int numarSecret;
    cout << "Total bani: "<<sumaDeBani;
    cout << endl;
    numarSecret = rand() % 100 + 1;
    cout << "Am ales un numar intre 0 si 100"<<endl;
    int numar = -1;
    while(numar != numarSecret)
    {
        cout << "Ce numar crezi ca este? ";
        cin >> numar;
        if(numar > numarSecret)
        {
            cout << "Prea mare!" << endl;
            sumaDeBani-=10;
        }
        else if(numar < numarSecret)
        {
            cout << "Pream mic" << endl;
            sumaDeBani-=10;
        }
        else
        {
            cout << "Ai ghicit numarul, ai primit "<< premiu << " lei!" << endl;
            sumaDeBani+=premiu;
            cout << "Wow esti foarte bogat, ai " << sumaDeBani <<" lei"<<endl;
        }
    }
}

int main()
{
    int ok = 1, sumaDeBani = 100, premiu  = 100;
   while(ok == 1)
   {
       joc(sumaDeBani, premiu);
       cout << "Mai doresti sa joci?(Apasa 1 pt da/Apasa 0 pt nu)"<<endl;
       cin >> ok;
   }
    return 0;
}
