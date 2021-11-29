#include <iostream>
using namespace std;

int main()
{
    char s[20];
    cin>>s;
    int i=0;
    while (s[i]!='\0')
    {
        if(s[i]=='a')
        {
            cout<<s[i]<<endl;
            i++;
            continue;
            
        }
        else 
        {
            break;
        }
        
    }

    if (s[i]!='\0'){
        if (s[i]=='b')
        {
            while(s[i]!='\0')
            {
                if(s[i]=='b')
                {
                    i++;
                    continue;
                }
                else
                {
                    break;
                }
                
            }
            if (s[i]!='\0')
            {
                cout<<"not recognised"<<endl;
            }
            else
            {
                cout<<"recognised"<<endl;
            }    

        }
        else
        {
          cout<<"not recognised"<<endl;  
        }
    }
    else
    {
        cout<<"recognised"<<endl;  
    }

    
    
    
    
    // // cout<<s1[i++]<<endl;
    
    
}