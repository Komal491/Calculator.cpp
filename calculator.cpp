#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;

    char operation;
    cout<<"Enter the operation which you want to perform here : ";
    cin>>operation;

    switch(operation){
        
        case '+' :
            {
                cout<<(a+b)<<endl;
                } 
                break;
        case '-' : 
            {
                cout<<(a-b)<<endl;
                }
                break;
        case '*' :
            {
             cout<<(a*b)<<endl;
                }   
                break;
        case '/' :
        {
             cout<<(a/b)<<endl;
            }
                break;
        case '%' : 
        {
            cout<<(a%b)<<endl;
            }
                break;

        default : 
        {
            cout<<"Please enter a valid operation"<<endl;
            }


    }

    cout<<endl;
    

 return 0;
}