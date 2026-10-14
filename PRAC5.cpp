#include <iostream>
#include <string>
using namespace std;

class Cal{
    public:
    int n1,n2;
    double res;

    void deiv(){
        cout<<"EEnter 2 Num: ";
        cin>>n1>>n2;
        try{
            if(n2 == 0){
                throw "DIVISON BY ZERO NOT POSSIBLE";
            }
            res = static_cast<double> (n1) /n2;
            cout<<"RESULT : "<< res;

        }
        catch(const char  *e){
            cout<<e;
        }
    }
};

int main(){
    Cal c;
    c.deiv();
    return 0;
}