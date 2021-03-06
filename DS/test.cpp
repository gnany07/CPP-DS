#include <iostream>
using namespace std;

int add(int a, int b)
{
    int temp;
    temp = a + b;
    return temp;
}

int main()
{
    int a , b;
    char c;
    int d;
    a = 10;
    b = 4;
    c = 'g';
    d = add(a,b);
    
    cout << "hello world" << endl;
    a++;
    b = a -b;

    cout << d << endl;

    return 0;
}   
