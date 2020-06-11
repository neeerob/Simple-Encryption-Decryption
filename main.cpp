#include <iostream>
using namespace std;

class system
{
    string message;
    int length;
    int password;
    

    void encryption();
    void decreption();
};



int main()
{
    int option;
    cout<<"Enter your option: "<<endl;
    cout<<"1)Encrypt message 2)Decrept message "<<endl;
    cin>>option;
    switch (option)
    {
    case 1:

        cout<<"You Want to encrypt messsage !"<<endl;
        cout<<"You need to enter a 1 digit password! "<<endl; 
        cout<<"You need to remember this password\nYou need this password to decrept this message ;"<<endl;
        
        

        break;
    
    default:
        break;
    }
}

