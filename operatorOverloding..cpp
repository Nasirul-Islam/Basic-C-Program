#include <iostream>
using namespace std;

class test{
    int a,b;
public:
    test(int x, int y){
        a=x; b=y;
    }

    show(){
        cout<<a<<" "<<b<<endl;
    }
    test operator +(test ob){
        test temp(0,0);
        temp.a=a+ob.a;
        temp.b=b+ob.b;
        return temp;
    }

};
int main(){
    test a(10, 20),b(20,30),c(0,0);
    c=a+b;
    c.show();
}
