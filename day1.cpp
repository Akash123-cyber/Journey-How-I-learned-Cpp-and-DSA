#include <iostream>
using namespace std;
int main(){

    // cin 
    // int a,b,sum;
    // // cin >> a;
    // // cin >> b;
    // cout <<"give space separated input :"<<endl;
    // cin >> a >> b; 
    // sum = a+b;
    // cout << "the value of sum is : " << sum;

    // Program even OR odd
    // int a;
    // cin >> a;
    // if (a%2==0){
    //     cout << "Even"<<endl;

    // }
    // else {
    //     cout <<"Odd"<<endl;
    // }



    // Calculator
    // 
    
    // Program to find the factorial of the given number
    int x;
    cout<<"Enter the number to find its factorial"<<endl;
    cin >> x;
    int f=1;
    for (int i = x; i > 0; i--)
    {
        f=f*i;
    }
    cout <<"Factorial is : " << f <<endl; 
    
}
