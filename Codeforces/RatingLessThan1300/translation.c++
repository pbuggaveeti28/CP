#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    reverse(s1.begin(),s1.end());
    if(s2==s1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
/*
input : 
code
edoc
output :YES
*/