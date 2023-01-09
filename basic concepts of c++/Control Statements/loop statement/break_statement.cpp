    /* */

#include<iostream>
using namespace std;

int main(){

//     for(int i=0; i<=100; i++)
//     {
//         if(i==2){        // exit the loop ( go backside )
//             break;
//         }
//         cout<<i<<endl;
//     }

for(int i=0; i<=100; i++)
{
    if(i==2){        // continue the loop ( skip the value & go to next )
        continue;
    }
    cout<<i<<endl;
}
    return 0;
}