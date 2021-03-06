#include <iostream>
#include <vector>
using namespace std;

int y;
bool boool1 = true;
bool boool2 = true;

int size_of_stack(vector <int> v )
{
    y = v.size();
    return y;
}

int top_of_stack(vector <int> v)
{
    if(v.empty()== true){
        cout << "stack is empty, try pushing elements first" << endl;
        boool2 = false;
        return 0;
    }
    y = v.back();
    return y;
}

int pop_stack(vector <int> &v)
{
    if(v.empty()== true){
        cout << "stack is empty, nothing to pop, try pushing elements first" << endl;
        boool1 = false;
        return 0;
    }
    y = v.back();
    v.pop_back();
    return y;
}

void push_stack(vector <int> &v, int x)
{
    v.push_back(x);
}

int main(){

    vector <int> v;

    while(1)
    {

    boool1= true; boool2= true;    
    int a=0;
    cout << "\nchoose an option\n 1) size of stack \n 2) top of stack \n 3) pop from stack \n 4) push in stack\n" << endl;
    cin >> a;
    
    int temp = 0, b;

    switch (a)
    {
    case 1:
        {    temp = size_of_stack(v);
             cout << "size of stack is : "<< temp << endl;
             break;
        }
    case 2:
        {
            temp = top_of_stack(v);
            if(boool2 == false)
            {
                break;
            }
            cout << "top of stack is :" << temp << endl;
            break;
        }
    case 3:
        {
            temp = pop_stack(v);
            if(boool1 == false)
            {
                break;
            }
            cout << "popped element is :" << temp << endl;
            break;
        }
    case 4:
        {
            cout << "enter the int to push" << endl;
            cin >> b;
            push_stack(v,b);
            cout << "element "<< b << " pushed successfully"<< endl;
            break;
        }
    
    default:
        break;
    }

    //cout << temp << endl;

    }

}