#include <iostream>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int f=0;
    if(s =="auto" || s=="break" || s=="case" || s=="char" || s=="const" || s=="continue"|| s=="default" || s=="do" || s=="double" || s=="else" || s=="enum" || s=="extern" || s=="float" || s=="for" || s=="goto" || s=="if"
    || s=="int" || s=="long" || s=="register" || s=="return" || s=="short" || s=="signed" || s=="sizeof" || s=="static"
    || s=="struct" || s=="switch" || s=="typedef" || s=="union" || s=="unsigned" || s=="void" || s=="volatile" || s=="while")
    {
            cout<<"invalid"<<endl;
    }
    else if(s[0]>=65&&s[0]<=90||s[0]>=97&&s[0]<=122||s[0]=='_')
    {
        for (int i = 1; s[i]!='\0'; i++)
        {
            if(s[i]>=65&&s[i]<=90||s[i]>=97&&s[i]<=122||s[i]=='_'||s[i]>=48&&s[i]<=57)
            {
                continue;
            }
            else
            {
                f++;
               break;
            }
        }
        if (f==0)
        {
            cout<<"valid"<<endl;
        }
        else{
            cout<<"invalid"<<endl;
        }
        
        
    }
    else
    {
        cout<<"Invalid"<<endl;
    }
}