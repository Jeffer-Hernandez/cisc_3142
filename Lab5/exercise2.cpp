#include <iostream>
using namespace std;

int main(){
    
    int i=0,j=0,count=0;

    for(i=3 ; i<=100 ; i++){

        count=0;

        for(j=2 ; j<=(i/2)+1 ; j++){ 
        
            if(i%j == 0){
                ++count; 
            }
        }

        if(count==0){
            cout<<i<<",";
        }
    }
    return 0;
}