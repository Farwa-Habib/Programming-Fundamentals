#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements :";
    cin>>n;
    if(n<=0){
        cout<<"Invalid input Number of elements must be greater than 0. "<<endl;
        return 0;
    }
    int arr[n];
    int uniquecount=0;
    cout<<"Enter  "<<n<<" number , one per line :"<<endl;
    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        bool iscopy=false;
        for(int x=0; x < uniquecount; x++){
            if(arr[x]==input){
                iscopy=true;
                break;
            }
        }
        if(iscopy){
            cout<<"Already Entered :"<<input<<endl;
        }else{
            arr[uniquecount]=input;
            uniquecount++;
        }
    }
cout<<"Unique numbers entered :";
for(int i=0;i<uniquecount;i++){
    cout<<arr[i] << " ";
}
cout<<endl;
return 0;
}