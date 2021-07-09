#include <iostream>
using namespace std;
int main(){
    int arr[3][3];
    for(int i =0 ; i<3 ; i++){
        for(int j =0 ;j<3;j++){
            cin>>arr[i][j];
        }
    }
    int arr1[3][3] = {
                      {1,1,1},
                      {1,1,1},
                      {1,1,1}
    };
     for(int i =0 ; i<3 ; i++){
        for(int j =0 ;j<3;j++){
            if(arr[i][j]%2!=0){
                if(arr1[i][j] == 1){
                    arr1[i][j] = 0;
                }
                else if (arr1[i][j] == 0){
                    arr1[i][j] = 1;
                }
                 if(arr1[i][j-1] == 1 && i>=0 && i<3 && j-1>=0 && j-1<3){
                    arr1[i][j-1] = 0;
                }
                else if(arr1[i][j-1] == 0 && i>=0 && i<3 && j-1>=0 && j-1<3){
                    arr1[i][j-1] = 1;
                }
                 if(arr1[i][j+1] == 1 && i>=0 && i<3 && j+1>=0 && j+1<3){
                    arr1[i][j+1] = 0;
                }
                else if(arr1[i][j+1] == 0 && i>=0 && i<3 && j+1>=0 && j+1<3){
                    arr1[i][j+1] = 1;
                }
                if(arr1[i-1][j] == 1 && i-1>=0 && i-1<3 && j>=0 && j<3){
                    arr1[i-1][j] = 0;
                }
                else if(arr1[i-1][j] == 0 && i-1>=0 && i-1<3 && j>=0 && j<3){
                    arr1[i-1][j] = 1;

                }
                if(arr1[i+1][j] == 1 && i+1>=0 && i+1<3 && j>=0 && j<3){
                    arr1[i+1][j] = 0;
                }
                else if(arr1[i+1][j] == 0 && i+1>=0 && i+1<3 && j>=0 && j<3){
                    arr1[i+1][j] = 1;
                }
            }
            else{
                continue;
            }
        }
    }
    for(int i =0 ; i<3 ; i++){
        for(int j =0 ;j<3;j++){
            if(arr1[i][j]==1){
                cout<<1;
            }
            else if(arr1[i][j]==0){
                cout<<0;
            }
        }
        cout<<endl;
    }
    return 0;
}
