#include <iostream>
using namespace std;

class System
{
    public:

    char message[100];
    char temporaryMess;
    int length;
    int password;
    int i;

    

    void encryption();
    void decreption();
};
void System :: encryption()
{
    cout<<"Enter password : ";
    cin>>password;
        if(password>10 || password <= 0)
        {
            cout<<"You entered more then 1 degit!"<<endl;
            return encryption();
        }
        
        cout<<"Your message will encrypt with your password!"<<endl;
        cout<<"Enter a message to encrypt![Note: You need to write '-' in space! ] "<<endl;
        cout<<"Message : ";
        cin>>message;


    
       for(i = 0; message[i] != '\0'; ++i)
    {
        temporaryMess = message[i];
        
        if(temporaryMess >= 'a' && temporaryMess <= 'z'){
            temporaryMess = temporaryMess + password;
            
            if(temporaryMess > 'z'){
                temporaryMess = temporaryMess - 'z' + 'a' - 1;
            }
            
            message[i] = temporaryMess;
        }
        else if(temporaryMess >= 'A' && temporaryMess <= 'Z'){
            temporaryMess = temporaryMess + password;
            
            if(temporaryMess > 'Z'){
                temporaryMess = temporaryMess - 'Z' + 'A' - 1;
            }
            
            message[i] = temporaryMess;
        }
    }

    
    cout << "Encrypted message -> " << message<<endl;
    cout<<endl;
        


}


int main()
{
    System runSystem;
    int option,password;
    cout<<"Enter your option: "<<endl;
    cout<<"1)Encrypt message 2)Decrept message "<<endl;
    cin>>option;
    switch (option)
    {
    case 1:
        cout<<"-------------- Note :--------------------------"<<endl;
        cout<<"* You Want to encrypt messsage !"<<endl;
        cout<<"* You need to enter a 1 digit password! "<<endl; 
        cout<<"* You need to remember this password!\n* You need this password to decrept this message! "<<endl;
        cout<<"------------------------------------------------"<<endl;
        runSystem.encryption();
        
        

    
        break;
        
    case 2:

        cout<<"You want to decrept your message !"<<endl;
        cout<<"[Note:You need to enter your 1 digit password that you previously entered to encrypt!]"<<endl;



        break;


    
    default:
        break;
    }
}

