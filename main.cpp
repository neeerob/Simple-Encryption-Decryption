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
    int option,password;
    cout<<"Enter your option: "<<endl;
    cout<<"1)Encrypt message 2)Decrept message "<<endl;
    cin>>option;
    switch (option)
    {
    case 1:

        cout<<"You Want to encrypt messsage !"<<endl;
        cout<<"You need to enter a 1 digit password! "<<endl; 
        cout<<"You need to remember this password\nYou need this password to decrept this message! ;"<<endl;
        cin>>password;
        if(password>10 || password == 0)
        {
            
        }
        
        cout<<"Your message will encrypt with your password!"<<endl;
        
        void encryption();
        
        

    
        break;
        
    case 2:

        cout<<"You want to decrept your message !"<<endl;
        cout<<"[Note:You need to enter your 1 digit password that you previously entered to encrypt!]"<<endl;



        break;


    
    default:
        break;
    }
}

