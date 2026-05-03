#include <iostream>
using namespace std;
int position(int matrix[][2],int rowsize);
int main(){
    int rowsize;
    cout<<"Enter the size of rows :";
    cin>>rowsize;
    int matrix[rowsize][2];
cout<<"The sum of elements in the matrix is :"<<position(matrix,rowsize);
return 0;

}
int position(int matrix[][2],int rowsize){
    int sum=0;
    for(int i=0;i<rowsize;i++){
        for(int j=0;j<3;j++){
            cout<<"The element of the matrix ["<<i<<"]["<<j<<"]=";
            cin>>matrix[i][j];
            sum=sum+matrix[i][j];
        }
    }
    return sum;
}