/*Given two strings check if they are permutations of each other.*/

#include <iostream>
using namespace std;

bool check_permutation(char* a1,char* a2,int end,int s1){

    if(end==0)
        return true;

     if(a1[s1] == a2[end]){
        check_permutation(a1,a2,end-1,s1+1);
     }else{
        return false;
     }
}

int main(){

    char a1[100],a2[100];
    bool c = false;
    cin>>a1>>a2;

    int i=0,j=0;
    while(a2[i] != '\0')
        i++;

    while(a1[j] != '\0')
        j++;
    if(i==j){
     c = check_permutation(a1,a2,i-1,0);
        cout<<c;
    }else{
        cout<<c;
    }
}
