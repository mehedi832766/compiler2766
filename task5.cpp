#include <iostream>
using namespace std;
int main()
{
    string str,ls,rs;
    getline(cin,str);
    char n;
    int k=0,f=0,f1=0,f3=0;
    n=str[0];
    
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]=='|'){
            k=i;
        }
    }
    if(k!=0){
        for(int i=3;i<k;i++){
            ls.push_back(str[i]);
        }
        for(int i=k+1;i<str.length();i++){
            rs.push_back(str[i]);
        }
        
         // check recursion
    if(ls[0]==n||rs[0]==n)
    {
        cout<<"left"<<endl;
        f=99;
    }
    if(ls[ls.length()-1]==n||rs[rs.length()-1]==n)
    {
        cout<<"right"<<endl;
        f3=99;
    }
    
    
        for(int i=1;i<ls.length()-1;i++){
             if(ls[i]==n)
                {
                   cout<<"general"<<endl;
                   f1=i;
                   break;
                }
        }
        for(int i=1;i<rs.length()-1;i++){
             if(rs[i]==n)
                {
                   cout<<"general"<<endl;
                   f1=i;
                   break;
                }
        }
        if (f1==0&&f==0&&f3==0)
        {
            cout<<"no"<<endl;
        }
        

        
    
    // termination
    if(f==99){
        char temp;
        if(ls[0]==n){
            
            for (int i = 0; i < ls.length()-1; i++)
            {
                temp=ls[i];
                ls[i]=ls[i+1];
                ls[i+1]=temp;
            }
            ls.push_back('`');
            cout<<"after termination\n"<<n<<"`=>"<<ls<<endl;
            rs.push_back(n);
            rs.push_back('`');
            cout<<n<<"=>"<<rs<<endl;
            
        }
        else{
            cout<<rs<<endl;
            for (int i = 0; i < rs.length()-1; i++)
            {
                temp=rs[i];
                rs[i]=rs[i+1];
                rs[i+1]=temp;
            }
            rs.push_back('`');
            cout<<"after termination\n"<<n<<"`=>"<<rs<<endl;
            ls.push_back(n);
            ls.push_back('`');
            cout<<n<<"=>"<<ls<<endl;
         }
    }
    }
    else{
        // recursion
                if(str[3]==n)
        {
            cout<<"left"<<endl;
            f=99;
        }
        if(str[str.length()-1]==n)
        {
            cout<<"right"<<endl;
            f3=99;
            
        }
        
            for(int i=1;i<str.length()-1;i++){
                if(str[i]==n)
                    {
                    cout<<"general"<<endl;
                    f1=i;
                    }
            }
            if (f1==0&&f==0&&f3==0)
            {
                cout<<"no"<<endl;
            }   
        
        // termination
        if(f==99){
        char temp;
            
            for (int i = 3; i < str.length()-1; i++)
            {
                temp=str[i];
                str[i]=str[i+1];
                str[i+1]=temp;
            }
            str.push_back('`');
            for (int i = str.length()-1; i >1 ; i--)
            {
                temp=str[i];
                str[i]=str[i-1];
                str[i-1]=temp;
            }
            str.push_back('`');
        
            cout<<"after termination\n "<<str<<endl;
    
            
        
    }
   
    
    }
}
