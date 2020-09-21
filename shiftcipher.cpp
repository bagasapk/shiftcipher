/*Nama: Anugerah Prima Bagaskara
Kelas: B
NPM : 140810180006
Shift Cipher
*/

#include<iostream>
#include<string.h>
using namespace std;
int main() {
    char words[100],ch;
    int i, j, length,choice,key;
    
    cout<<"1. Words :\n";cin.getline(words,100);
    cout<<endl;
    cout << "2. Key: ";
    cin >> key;
    length = strlen(words);
    cout<<endl;
    cout<<"Input your choice \n\t1. Encryption \n\t2. Decryption \n";
    cin>>choice;
    if (choice==1){
      for(int i = 0; words[i] != '\0'; ++i) {
         ch = words[i];
         if (ch >= 'a' && ch <= 'z'){
            ch = ch + key;
            if (ch > 'z') {
               ch = ch - 'z' + 'a' - 1;
            }  
            words[i] = ch;
         }
         else if (ch >= 'A' && ch <= 'Z'){
            ch = ch + key;
            if (ch > 'Z'){
               ch = ch - 'Z' + 'A' - 1;
            }
            words[i] = ch;
         }
      }
      printf("Encrypted message: %s", words);
  	}
   	else if (choice == 2) {
      for(int i = 0; words[i] != '\0'; ++i) {
         ch = words[i];
         if(ch >= 'a' && ch <= 'z') {
            ch = ch - key;
            if(ch < 'a'){
               ch = ch + 'z' - 'a' + 1;
            }
            words[i] = ch;
         }
         else if(ch >= 'A' && ch <= 'Z') {
            ch = ch - key;
            if(ch < 'A') {
               ch = ch + 'Z' - 'A' + 1;
            }
            words[i] = ch;
         }
      }
      cout << "Decrypted message: " << words;
   }
}
