#include<iostream>
#include<string>
using namespace std;

int main(){
size_t count{};
string string1{};    
size_t index1;
int i;
size_t n;
int decrease=0;
int k=0;
cout<<"Enter your string: ";
getline(cin,string1);
count=string1.size();

for (index1=1;index1<=count;index1++){
    for(n=0;n<index1;n++){
    cout<<string1.at(n);
    }
    
    
    if(index1>1){
    k++;    
    for(i=0;i<k;i++){
    cout<<string1.at(decrease-i);    
    }   
    decrease++;   
    }
    cout<<endl;
    }
}

