#include<iostream>
using namespace std;
int main(){

   int n;
   cout<<"How many elements do you want to instert "<<(char)26<<" ";
   cin>>n;
   int number[n];
   for(int i=0;i<n;i++){
       cout<<"Enter "<<i+1<<" element of number "<<(char)26<<" ";
       cin>>number[i];
   }

for (int count = 0; count < n; count++) {
    for (int i = 0; i < n - count; i++) {
      if (number[i] > number[i + 1]) {
        int temp = number[i];
        number[i] = number[i + 1];
        number[i + 1] = temp;
      }
    }
  }
   for(int i=0;i<n;i++){
       cout<<"Sorted arrar "<<(char)26<<" "<<number[i]<<endl;
   }
   

   return 0;
}