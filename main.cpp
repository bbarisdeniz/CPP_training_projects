#include<iostream>
#include<string>
using namespace std;

int main(){
    
string alphabet{"abcdefghijklmnopDqrstuvwxyzABCDEFGGHIJKLMNOPQRSTUVWXYZ1234567890'. "};
string key{"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompcıasro987654321*=% "};
string s1{};
int count;
int k;
int i;
cout<<"Enter a string:";
getline(cin,s1);
count=s1.length();

for (i=0;i<count;i++){
k=alphabet.find(s1.at(i));

s1.at(i)=key.at(k); 


    
}
cout<<"\n"<<s1;


}
