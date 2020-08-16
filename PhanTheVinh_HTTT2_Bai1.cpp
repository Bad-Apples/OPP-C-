#include<iostream>
#include<math.h>
using namespace std;
class HCN
{
private:
    float D,R;
public:
    void NHAP();
    void VE();
    float DIENTICH();
    float CHUVI();
};
    void HCN::NHAP()
    {
        cout<<"Nhap chieu dai HCN: ";
        cin>>D;
        cout<<"Nhap chieu rong HCN: ";
        cin>>R;
    }
    void HCN::VE()
    {
        for(int i=0; i<D; i++)
    {
        for(int j=0; j<R; j++)
            cout<<" * ";
            cout<<endl;
    }
    }
    float HCN::DIENTICH()
    {
        return D*R;
    }
    float HCN::CHUVI()
    {
        return 2*(D+R);
    }


int main()
{
    HCN a;
    a.NHAP();
    a.VE();
    cout<<"DIEN TICH HCN = "<<a.DIENTICH()<<endl;
    cout<<"CHU VI HCN = "<<a.CHUVI();
    return 0;
}
