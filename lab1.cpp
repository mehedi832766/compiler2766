#include <iostream>
#include <string.h>
using namespace std;



string espace(string s){
    string s1;
    // cout<<s;
    int j=0,i;
    for(i=0;i<s.length();i++){
        if(s[i]==' '&& s[i+1]==' ')
        {
            continue;
        }
        else
        {
            s1.push_back(s[i]);
        }
    }
    // cout<<s1;
    return s1;
}



void comp(string s1,int i){
    string s2="define";
    int j,f=0;
    for(int j=0;j<s2.length();i++,j++){
        if(s1[i]==s2[j]){
            continue;
        }
        else{
            f++;
            break;
        }
    }
    // cout<<i;
    string s3,s4;
    if(f==0){
        for ( j=i+1 ; s1[j]!=' '; j++)
        {
            // cout<<s1[j];
            s3.push_back(s1[j]);
        }
        for ( j=j+1 ; s1[j]!=';'; j++)
        {
            // cout<<s1[j];
            s4.push_back(s1[j]);
        }
        
        
    }
    else
    {
        return ;
    }
    cout<<s3;
   
    // return s3

}



string mac(string s)
{
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='#'){
            comp(s,i+1);
        }
        else{
            continue;
        }
    }
    return s;
    
}



int main()
{
    int x;
    string s1,s2;
    getline(cin,s1,'`');
    
    cout<<espace(s1);
    mac(s1);
    // cout<<"your input is "<<endl;
    // cout<<s1;
    

    
}