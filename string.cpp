#include <iostream>
using namespace std;
#include <string>
struct table
{
    string n;
    string t;
    string ty;
};

table list[50];

void insert(string name,string token,string type){
    // lookup();
}


int main()
{
   string s;
   char c[10][10];
   getline(cin,s,'`');
   
   int k=0,i=0,f,e;
    for ( i = 0,f=0; s[i] != '\0'; i++,f++){
        for ( k = i, e=0; s[k] != ' '; k++,e++){
            // getchar();
            c[f][e]=s[k];
            
    }
    // cout<<c<<endl;
    i=k;
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout<<c[i][j];
        }
        cout<<endl;
        
        
    }
    
    cout<<c<<endl;
   
}