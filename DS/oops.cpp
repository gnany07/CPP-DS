#include <iostream>
using namespace std;
    
class test{
    public:
        int a, b;
        string str;
        void func() // no value returned from function
        {
            cout << "hello world" << endl;
        }

        int func2(int x, int y)// sum is returned
        {
            return x+y;
        }

        int func3(int p);// writing function ouside the class

        test()// creating a constructor without any parameters
        {
            cout << "constructor called" << endl;
        }

        test(int var1, int var2, string str2)// constructor with parameters ,with inititalsing values
        {
            a = var1;b = var2; str = str2; 
            cout << a << b << str << endl;
        }


    };

    int test::func3(int p)
    {
        return p*p;
    }

int main()
{
    test te1, te2; // initializes constructor with no parameters
    test te3(1,2,"uno"),te4(8,9,"dos"); // initialises constructor with corresponding parameters


    te1.a = 3;te1.b = 4;te1.str = " first text";

    te2.a = 5;te2.b = 6;te2.str = " second text";
    
    cout << te1.a << te1.b << te1.str << endl;cout << te2.a << te2.b << te2.str << endl;

    te1.func();te2.func();

    int i = 10, j = 20, k= 0;
    k = te1.func2(i,j);
    cout << k << endl;

    int l;
    l = te2.func3(12);
    cout << l << endl;








}