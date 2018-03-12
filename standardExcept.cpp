#include<iostream>
#include
using namespace std;
class CanGoWrong{
    
public:
    CanGoWrong(){
    char *pMemory=new char[111111];
        delete[] pMemory;
    }
};
int main(){

    try{
        CanGoWrong wrong;
    }
    catch (bad_alloc &e ){
        cout << "catch exception " <<e.what()<< endl;
    }
    cout << "still running " << endl;
    return 0;
}
