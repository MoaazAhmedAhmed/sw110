#include <iostream>
using namespace std;

class Friend_Demo
{
   private:
    int i_private;
   protected:
    int i_protected;
   public:
    int i_public;
};

void friendDemo_Func()
{
    Friend_Demo fd;
   
    fd.i_private    = 10;
    fd.i_protected  = 15;
    fd.i_public     = 20;
   
    cout << fd.i_private << endl;
    cout << fd.i_protected << endl;
    cout << fd.i_public << endl;
}

int main()
{
    friendDemo_Func();

    return 0;
}