#include <iostream>
#include <string>
using namespace std;

class college{
    public:
    string place;
    int number;
    int location;
    int test(int a, int b){
        return a+b;
    }

    protected:
    int turnover;

};

class student: public college{
    public:
    int rollno;
    int test(int c, int d){
        return c * d;
    }
};

class markin: public student{
    public:
    int result;
};

class temp{
    public:
    int x = 10;
};

class branch: public student, public temp{
    public:
    string namin;
};

int main()
{
    student stu1;
    markin mar1;
    branch b1;
    college clg1;
    b1.place = " somewhere";
    b1.rollno = 12345;

    cout << b1.place << " " << b1.rollno + b1.x << endl;
    
    int i,j;
    i = clg1.test(10,20);
    j = stu1.test(10,20);
    
    cout << i << "  " << j << endl;
}
