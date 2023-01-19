/* Syntax  of inheritance & its visibility in c++ */

#include <iostream>
using namespace std;

// base class

class user
{
    // int id;
public:
    int id;
    float salary;
    user(int inpid)
    {
        id = inpid;
        salary = 46.56;
    }
    user(){}
};

// derived class
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class member / method etc...
};

note:

    1. Default visibility made is private.
    2. Public Visibility Mode: Public members of the base class
    becomes Public members of the Derived class.
    3. Private Visibility Mode: Public members of the base class
    becomes private members of the Derived class.
    4. Private members are never inherited.
*/

class admin : public user
{
public:
    int rights = 9;
    admin(int adminid)
    {
        id = adminid;
    }
};
int main()
{
    user user1(545), user2(5465);
    cout << user1.salary << endl
         << user1.id << endl;
    cout << user2.salary << endl
         << user2.id << endl;
    admin nikhil(123456);
    cout<<nikhil.rights<<endl;
    cout<<nikhil.id<<endl;

    return 0;
}