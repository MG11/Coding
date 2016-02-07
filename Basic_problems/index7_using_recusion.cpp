/* print index 7*/

#include <iostream>
using namespace std;


//Last index 7.
int Last_index_7(int arr[],int a){

    if(a == -1)
        return -1;
    int b[100];

    for(int i = 1;i<a;i++){
        b[i-1] = arr[i];
    }

    int c = Last_index_7(b,a-1);

    if(c == -1 && arr[0] != 7){
        return -1;
    }else{
        return 1+c;
    }
}

//First index 7.
int first_index_7(int arr[],int a){

    if(a==-1)
        return 0;

    if(arr[0] == 7)
        return 0;
    else{
        return 1+first_index_7(arr+1,a-1);
    }
}
//All_index_7!!

int All_index_7(int arr[],int a ,int output[]){

    if(a == -1){
        return 0;
    }
        int b[100];

    for(int i=1;i<a;i++){
        b[i-1] = arr[i];
    }

        int d = All_index_7(b,a-1,output);

    if(arr[0] == 7){
        output[d++] = 0;
    }

    for(int i=0; i<d;i++){
        output[i]++;
    }
    return d;
}

//contain 7!!

bool is_contain_7(int arr[],int a){
    if(a==-1)
        return false;

    if(arr[0]==7)
        return true;
    else{
        return is_contain_7(arr+1,a-1);
    }
}

//Selection_sort_using_recursion!!.

void Selection_sort(int arr[],int a){

    if(a == 1)
        return;


    for(int i=1;i<a;i++){
        if(arr[0]>arr[i]){
           int c = arr[0];
           arr[0] = arr[i];
           arr[i] = c;
        }
    }

    Selection_sort(arr+1,a-1);
}

int main(){

    int n;

    cin>>n;

    int arr[100],output[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    /*int c = All_index_7(arr,n,output);
    cout<<c;
    for(int i=0;i<c;i++){
        cout<<output[i]<<"\t";
    }*/

    Selection_sort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}
