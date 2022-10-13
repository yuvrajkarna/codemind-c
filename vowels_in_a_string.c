#include<iostream>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    char ch;
    cin>>ch;
    int n=s.size(),c=0;
    for(int i=0;i<n;i++){
        
        if(s[i]==ch ) {
            cout<<"True"<<endl;
            cout<<i;
            c=1;
            break;
        }
    }if(c==0)
    cout<<"False";
    return 0;
}