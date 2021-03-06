#include <iostream>
#include <vector>
using namespace std;

// Enumerate Intput operation
enum oper {
    SIZE_OF_STACK=1,
    TOP_OF_STACK,
    POP_OUT_OF_STACK,
    PUSH_TO_STACK,
    EXIT
};

class Stack
{
    public:
        // vector to store contents of stack
        vector<int> db;
        // Default Constructor
        Stack()
        {
            db.clear();
        }

        // Member functions of stack
        int getsizeofstack()
        {
            int y;

            return db.size();
        }

        int gettopofstack()
        {
            if(db.empty() == true){
                cout << "stack is empty, try pushing elements first" << endl;
                return -1;
            }
            return db.back();
        }

        int popfromstack()
        {
            int y;

            if(db.empty() == true){
                cout << "stack is empty, nothing to pop, try pushing elements first" << endl;
                return -1;
            }
            y = db.back();
            db.pop_back();
            return y;
        }

        void pushtostack(int x)
        {
            db.push_back(x);
        }
};

int main(){
    // Input Operation
    int oper = 0;
    // return value
    int ret_val = 0;
    // Input element;
    int input = 0;

    Stack stack;

    while(true) {
        cout << "\nchoose an option\n 1) size of stack \n 2) top of stack \n "
            "3) pop from stack \n 4) push to stack\n 5) to exit" << endl;
        cin >> oper;

        switch (oper)
        {
            case SIZE_OF_STACK:
                {   ret_val = stack.getsizeofstack();
                    cout << "size of stack is : "<< ret_val << endl;
                    break;
                }
            case TOP_OF_STACK:
                {
                    ret_val = stack.gettopofstack();
                    if(ret_val == -1)
                    {
                        break;
                    }
                    cout << "top of stack is : " << ret_val << endl;
                    break;
                }
            case POP_OUT_OF_STACK:
                {
                    ret_val = stack.popfromstack();
                    if(ret_val == -1)
                    {
                        break;
                    }
                    cout << "popped element is : " << ret_val << endl;
                    break;
                }
            case PUSH_TO_STACK:
                {
                    cout << "enter the int to push" << endl;
                    cin >> input;
                    stack.pushtostack(input);
                    cout << "element " << input << " pushed successfully" << endl;
                    break;
                }
            case EXIT:
                cout << "program exited" << endl;
                return 0;
            default:
                break;
        }
    }
    return 0;
}
