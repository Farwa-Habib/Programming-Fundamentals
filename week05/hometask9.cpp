#include <iostream>
using namespace std;
main(){
    int money;
    int targetyears;
    cout<<"Enter money :";
    cin>>money;

    cout<<"Enter years :";
    cin>>targetyears;

    int age=18;
    for(int years=1800;years<=targetyears;years++){
        if(years%2==0){
            money=money-12000;
        }
        else{money=money-(12000+50*age);
        }
        age=age+1;
    }
    if(money>=0){cout<<"Yes ! He will live a carefree life and will have "<<money<<" dollars left."<<endl;
    }
    else{
        int moneyneeded=money*(-1);
        cout<<"He will need "<<moneyneeded<<" dollars to survive."<<endl;

    }

}