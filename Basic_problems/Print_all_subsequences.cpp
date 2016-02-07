/*Given a String print all the subsequences. e.g. for input = abc you need to print “”,
a, b, c, ab, ac, bc, abc.*/

#include <iostream>
using namespace std;

int print_subsequence(char* a,int l,char output[][20]){

    if(a[l] == '\0'){
        output[0][0] = '\0';
        return 1;
    }

    int Size_of_Output = print_subsequence(a,l+1,output);

    for(int i=0;i<Size_of_Output;i++){
        output[i+Size_of_Output][0] = a[l];

        int j=0;

        for(j=0;output[i][j]!= '\0';j++){
            output[i+Size_of_Output][j+1] = output[i][j];
        }
        output[i+Size_of_Output][j+1] = '\0';
    }
    return 2*Size_of_Output;
}

int main(){

    char a[1000],output[1000][20];

    cin>>a;

    int c = print_subsequence(a,0,output);

    for(int i=0;i<c;i++){
        cout<<output[i]<<"\n";
    }
}
