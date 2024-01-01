#include <iostream>
using namespace std;

int main()
{
    int n1;
    int n2, max;

    cout << "Enter first number: ";
    cin>>n1;

    cout<<"Enter second number: ";
    cin>>n2;
    
    // do while loop is used
    do
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            cout << "LCM = " << max;
            break;
        }
        else
            ++max;
    } while (true);
    
    return 0;
}