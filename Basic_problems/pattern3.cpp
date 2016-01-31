/*Write pseudo-codes which reads number of lines N and prints the following patterns. [Two
different pseudo-code for both patterns

   *
  ***
 *****
*******
 *****
  ***
   *
*/


#include <iostream>
using namespace std;

int main(){
    int N;

    cout<<"Enter the number N";
    cin>>N;


        for(int j = (N/2),i=0;j>=0,i<=(N/2);i++,j--){
            for(int k = 0;k<j;k++){
                cout<<" ";
            }

            for(int k =0;k<=i;k++){
                cout<<"*";
            }

            for(int k=0;k<i;k++){
                cout<<"*";
            }
            cout<<endl;
        }

        for(int j = 1,i=(N/2);j<=(N/2),i>=0;i--,j++){
            for(int k = 0;k<j;k++){
                cout<<" ";
            }

            for(int k = 0;k<=i-1;k++){
                cout<<"*";
            }

            for(int k = 0;k<i-1;k++){
                cout<<"*";
            }

            cout<<endl;

        }

    }



