#include<iostream>
#include<math.h>

using namespace std;

class Hinhtron
{
public:
    float r;
    float chuvi()
    {
        return 2*r*M_PI;
    }
    float dientich()
    {
        return r*r*M_PI;
    }
};
int main()
{
    Hinhtron a;
    cout<<"Nhap ban kinh hinh tron: ";
    cin>>a.r;
    cout<<"Chu vi hinh tron = "<<a.chuvi()<<"(cm)"<<endl;
    cout<<"Dien tich hinh tron = "<<a.dientich()<<"(cm2)";
    return 0;
}

