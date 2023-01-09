
/* there are two types of header files :
1. system header file : it comes with the compiler
2. userdefined header file : it is written by the programmer
*/

#include<iostream>
// #include"this.h"        // user defined header file  
//--> this will produce an error if this.h is not present in the currenrt directory


using namespace std;

int main(){

    cout<<"this is hello world program";
    return 0;
}