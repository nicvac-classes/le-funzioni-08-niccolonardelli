#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
int ordinavettore (int n, vector<int>v)
{
    int i, j, t;
    bool scambio;
    i=0;
    scambio = true;
    while (i<=n-1 and scambio)
    {
        scambio = false;
        j=0;
        while (j<=(n-2)-i)
        {
            if (v[j] > v[j+1] )
            {
                scambio= true;
                t = v[j];
                v[j] = v[j+1];
                v[j+1] = t;
            }
            j=j+1;
        }
        i=i+1;
    }
    return 0;
}
int riempivettore(int n, vector<int>v)
{
    srand(time(0));
    int i, x;
    i=0;
    while(i<n)
    {
       x == 60 + rand()%4;
       v[i] = x;
       i=i+1;
    }
    return 0;
}
int visualizza (int n, vector<int>v)
{
    int i;
    i=0;
    while (i<n)
    {
        cout  << "giro " << i+1 << ": " << v[i] << endl;
        i=i+1;
    }
    return 0;
}
int tempomigliore (int n, vector<int>v)
{
  int i, imin, min;
  i = imin = min = 0; 
  while (i<n)
  {
    if (v[i]>min)
    {
       
    }
    else
    {
        min = v[i];
        imin = i;
    }
    i = i+1;
  }
  cout << "il suo giro più veloce è il " << imin + 1 << "°, eseguito in soli " << min << " secondi." << endl;
  return 0;
}
int tempogara(int n, vector<int>v)
{
    int gara, i;
    gara = i = 0;
    while (i<n)
    {
        gara = gara + v[i];
        i=i+1;
    }
    cout << "la sua gara è durata in tutto " << gara << " secondi." << endl;
    return gara;
}
int main() 
{
    int n, garaverstappen, garahamilton;
    cout << "di quanti giri è stata la gara?" << endl;
    cin >> n;
    vector<int>verstappen(n);
    vector<int>hamilton(n);
    riempivettore(n, verstappen);
    riempivettore(n, hamilton);
    cout << "statistiche di verstappen:" << endl;
    visualizza(n, verstappen);
    tempomigliore(n, verstappen);
    garaverstappen = tempogara(n, verstappen);
    cout << "statistiche di hamilton" << endl;
    visualizza(n, hamilton);
    tempomigliore(n, hamilton);
    garahamilton = tempogara(n, hamilton);
    if (garaverstappen == garahamilton)
    {
        cout << "i due piloti hanno tagliato il traguardo allo stesso momento!" << endl;
    }
    else
    {
        if (garaverstappen>garahamilton)
        {
            cout  << "hamilton ha vinto la gara! ecco tutti i suoi giri, dal più veloce al piu lento:" << endl;
            ordinavettore(n, hamilton);
            visualizza(n, hamilton);
        }
        else
        {
             cout  << "verstappen ha vinto la gara! ecco tutti i suoi giri, dal più veloce al piu lento:" << endl;
            ordinavettore(n, verstappen);
            visualizza(n, verstappen);
        }
        return 0;
    }
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
