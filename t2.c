#include <iostream>

using namespace std;

int main(){
    int i, j, x, kolom=5;
    for (i=1; i<=kolom; i++){
        if (i==1){
            for ( j=i; j<=kolom; j++){
                cout<<j;
            }
        }else if(i==3){
            for(x=1;x<=i;x++){
                if (x==1||x==3){
                    cout<<i;
                }else{
                    cout<<" ";
                }
            }
        }else{
            cout<<i;
        }
        cout<<endl;
    }
}
