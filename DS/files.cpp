#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file1("test.txt");
    
    file1 << "this  is a file ";

    file1.close();

    string str;

    ifstream file2("test2.txt");

    while(getline(file2,str))
    {
        cout << str;
    }

    file2.close();

}