#include <iostream>
#include <cmath> 

using namespace std;

int main()
{
    float a;
    float p;
    float ri;
    float rf;
    float day;
    float j;
    
    cout<<"Enter principal amount: "<<endl;
    cin>>p;
    cout<<"Enter interest rate to increment: "<<endl;
    cin>>ri;
    cout<<"Enter the amount of days: "<<endl;
    cin>>j;
    rf=ri/100;
    
    for(int day=1;day<=j;day++){
        a=p*pow(1+rf, day);
        cout<<day<<"-------"<<a<<endl;
    }
    
    
    
}