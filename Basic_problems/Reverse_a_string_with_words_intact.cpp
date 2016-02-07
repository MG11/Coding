/*Reverse a string keeping the words intact. e.g. Welcome to Coding Blocks -> Blocks Coding to Welcome. Use cin.get to take the input.*/

#include <iostream>
using namespace std;

int main(){
    char ar[100]={0};

    int i=0,j,k=0;

    while(ar[i] != 'i'){
        ar[i] = cin.get();
        i++;
    }


    ar[i]=cin.get();

    while(ar[i] != '\n'){
        char b=cin.get();
        ar[++i]=b;
    }
    ar[i]='\0';

    int m = i;
    cout<<m;

    for(int j=0,k=i-1;j<=(m/2),k>=(m/2);j++,k--){
        char c = ar[j];
        ar[j] = ar[k];
        ar[k] = c;
    }

    i = 0,j = 0;

    for(;j<m;){

        while(ar[j] != ' ' || ar[j] != '\0'){
            j++;
        }

        int n = j-1;
        for(;k<(n/2);k++){
            char c = ar[k];
            ar[k] = ar[j];
            ar[j] = c;
            j--;
        }

        k = n+1;
        j= n+1;
    }

    for(int i=0;i<m;i++){
        cout<<ar[i];
    }
}
