#include <iostream>
#include <iomanip>
#include <math.h>

//Define function here
#define f(x) x*x

using namespace std;

int main() 
{
    //cout << fixed << setprecision(4);
    //Rule definition
    cout << "' Trapezoidal rule is a rule that used to find the approximation of a definite integral '" << "\n" << "\n";

    //Inputs:
    int n;
    cout << " Enter the number of SubIntervals: ";
    cin >> n;
    cout << endl;

    float Upper , Lower;

    cout << " Enter the lower limit (a): ";
    cin >> Lower;
    cout << endl;

    cout << " Enter the upper limit (b): ";
    cin >> Upper;

    // Finding step size 
    float h;
    h = (Upper - Lower) / n;     

    // Finding integration value 
    float integration = 0.0 , sigma=0.0;

    integration = f(Upper) + f(Lower);

    cout << endl;
    cout << "==============Table==============" <<"\n"<<"\n";
    cout << "\tX\t"<<" |"<<"\t" <<"F(X)"<<endl;
    cout << "  --------------------------------"<<endl;
    cout << "\t" << Lower<<"\t\t"<<f(Lower)<<endl;           

    for (int i = 1; i <= n - 1; i++)  
    {                      

    sigma = Lower + i * h;
    integration = integration + 2 * (f(sigma));
    cout << endl;
    cout <<"\t"<<sigma <<"\t\t" << f(sigma) << endl;

    }

    cout << endl;
    cout << "\t" << Upper << "\t\t" << f(Upper)<<endl; 
    cout << "====================================" << "\n\n";
       
    integration = integration * h / 2; //Final result

    cout << " Required value of integration is: " << integration << endl;

    return 0; 
}
