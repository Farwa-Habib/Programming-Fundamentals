#include<iostream>
using namespace std;
main(){
    int stars=5;
    
    for( int rows=1;rows<=stars;rows++){
        for(int columns=1;columns<=rows;columns++)
        {
            cout<<"*";
        }
cout<<endl;
    }
    
    
for(int rows=stars-1;rows>=1;rows--){
    for(int columns=1;columns<=rows;columns++){
        cout<<"*";
    }
cout<<endl;
}


return 0;
    }

