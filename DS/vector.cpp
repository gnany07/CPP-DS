#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    vector <int> v1;
    int a;


    v1.push_back(15);
    a = v1.size();
    v1.resize(5);
    
    for(int i=0;i<5;i++)
    {
        cout << v1[i]<< endl;

    }

    v1.push_back(20);

    for(int i=0;i<6;i++)
    {
        cout << v1[i] <<endl;
    }

    v1.pop_back();
    v1.resize(10);

    for(int i=0;i<10;i++)
    {
        cout << v1[i] << endl;
    }

    vector <int> v2;

    v2 = { 1,2,3,4};
    for(int i=0;i<4;i++)
    {
        cout << v2[i] << endl;
    }

    cout << "after clear" << endl;

    v1.clear();
    int x = v1.size();
    cout << x << endl;

    for(int i=0; i<4; i++)
    {
        v1.push_back(i);
    }

    for(int i=0; i<v1.size(); i++)
    {
        cout << v1[i] << endl;
    }
}