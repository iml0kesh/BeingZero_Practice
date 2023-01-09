#include<bits/stdc++.h>
using namespace std;

int main(){
   // write your code here
   int t; cin >> t;
   while(t--){
       string s; cin >> s;
       int flag = 0;
       int length = s.length();
       for(int i=0;i<length;i++){
           if(tolower(s[i]) != tolower(s[length-i-1])){
               flag = 1;
               break;
           }
       }
       if(flag == 1){
           cout << "No" << endl;
       } else {
           cout << "Yes" << endl;
       }
   }
    return 0;
}