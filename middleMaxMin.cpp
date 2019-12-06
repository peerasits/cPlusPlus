#include <iostream>


using namespace std;



int main(){
    int n;
    cin >>n;

    for(int count = 1;count<=n;count++){
            int x,y,z;

            //intitial
            cin>> x;
            cin>> y;

            while(true){
                cin>>z;
                if(z==0)
                    break;
                if((y>x && y>z)){
                    cout<<"max"<<y;
                }
                else if((y<x && y<z)){
                    cout<<"min"<<y;
                }

                x = y;
                y = z;

            }


    }
    return 0;
}
