#include"iostream"

using namespace std;

char op;

float num1;

float num2;

float result;


string errormsg1 = "please restart and choose a valid op (*, +, -, /)..";

int main() {

    cout << "welcome to my simple calculator." << endl << "choose an opertator(*, +, /, -) to start please...";
    cin >> op;

    if (op !='+'&&op!='-'&&op!='*'&&op!='/') {

        cout << errormsg1;
        exit(0);
    }
    cout << "enter num 1___" << endl;
    cin >> num1;

    cout << "enter num 2___" << endl;
    cin >> num2;


    if (op ==   '+') {

        result = num1 + num2;

        cout << result;
    }
    else if (op == '*') {

        result = num1 * num2;

        cout << result;
    }
    else if (op == '/') {

        result = num1 / num2;

        cout << result;
    }
    else if (op == '-') {

        result = num1 - num2;

        cout << result;
    }

}
    else if(op == "-"){

        result = num1 - num2;

        cout<< result;
    }




}
