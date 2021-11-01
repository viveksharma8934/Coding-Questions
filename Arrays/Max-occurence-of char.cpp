#include <iostream>
#include<string>

using namespace std;

int main(){
    string s="qhwrqrkqr";

    int freq[26];

    for(int i=0;i<26;i++){
        freq[i]=0;
    }
    int mx=0;
    char ans;
    for(int i=0;i<s.length();i++){
        freq[s[i]-'a']++;
    }

    for(int i=0;i<26;i++){
        if(freq[i]>mx){
            mx=freq[i];
            ans=i+'a';
        }
    }

    cout<<mx<<" "<<ans<<endl;
}