#include <iostream>
using namespace std;
int main()
{
    string s;
    string keyword[48]={"asm","double","new","switch","auto","else","operator","template","break","enum","private","this","case","extern","protected","throw","catch","float","public","try","char","for","register","typedef","class","friend","return","union","const","goto","short","unsigned","continue","if","signed","virtual","default","inline","sizedof","void","delete","int","static","volatile","do","long","struct","while"};
    int flag=0, key=0;
    cout<<"Enter a string"<<endl;
    cin>>s;
    
    if(s[0]=='_'||s[0]>='a'&&s[0]<='z'||s[0]>='A'&&s[0]<='Z'){
        cout<<"First letter is fine"<<endl;
    }
    else{
        cout<<"Not a valid identifier"<<endl;
    }
    
    for(int i=1;i<s.length();i++){
        if(s[i]>='a'&& s[i]<='z'||s[i]>='A'&& s[i]<='Z'||s[i]>=0 && s[i]<=9){
            flag=0;
        }
        else{
            flag=1;
            break;
        }
    }
    for(int i=0;i<48;i++){
        if(keyword[i]==s){
            key=1;
            break;
        }
        else{
            key=0;
        }
    }
    if(flag==1){
        cout<<"Invalid"<<endl;
    }
    else{
        if(key==1){
            cout<<"Invalid"<<endl;
        }
        else{
            cout<<"Valid"<<endl;
        }
    }
    
    return 0;
}
