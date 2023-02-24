#include <iostream>
using namespace std;
int main()
{
    int x,y;
    
    cout<< "Ingrese un limitante"<<endl;
    cin >> y;
    while(x<= y)
    {
        cout <<  "Ingrese un numero ";
        cin>> x;
    }
    system("PAUSE");
    return 0;
}
