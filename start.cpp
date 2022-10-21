#include"bits\stdc++.h"

using namespace std;

string op;

float num1;

float num2;

float sum;

string validops = ("+","-","*","/");

string errormsg1 = "please restart and choose a valid op (*, +, -, /)..";

int main(){

    cout<<"welcome to my simple calculator."<<endl<<"choose an opertator(*, +, /, -) to start please...";
    cin>>op;

    if (op != validops){

        cout<<errormsg1;
        abort();

    }

    cout<<"enter num 1___"<<endl;
    cin>>num1;

    cout<<"enter num 2___"<<endl;
    cin>>num2;


    if(op == "+"){

        sum = num1 + num2;

        cout<<sum;
    }

    else if(op == "*"){

        sum = num1 * num2;

        cout<<sum;
    }

    else if(op == "/"){

        sum = num1 / num2;

        cout<<sum;
    }

    else if(op == "-"){

        sum = num1 - num2;

        cout<<sum;
    }




}