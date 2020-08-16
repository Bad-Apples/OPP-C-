#include <iostream>
#include<math.h>

using namespace std;

class PTBAC2
{
private:
    float a,b,c;
public:
    void NHAP();
    void XUAT();
    void GIAI();
    PTBAC2();
    PTBAC2(float x, float y, float z);
};
void PTBAC2::NHAP()
{
    cout<<"NHAP PHUONG TRINH BAC 2"<<endl;
    cout<<"NHAP A: ";
    cin>>a;
    cout<<"NHAP B: ";
    cin>>b;
    cout<<"NHAP C: ";
    cin>>c;
}
void PTBAC2::XUAT()
{
    cout<<"PHUONG TRINH VUA NHAP LA: "<<a<<"x2 + "<<b<<"x + "<<c<<endl;
}
void PTBAC2::GIAI()
{
   if(a == 0)
    {
        if(b == 0)
        {
            if (c == 0)
            {
                cout << "Phuong trinh vo so nghiem" << endl;
            } else
            {
                cout << "Phuong trinh vo nghiem" << endl;
            }
        } else
        {
            cout << "Phuong trinh co nghiem duy nhat: " << -c/b << endl;
        }
    } else
    {
        float delta = b*b - 4*a*c;
        if(delta > 0)
        {   cout<<"Phuong trinh co 2 nghiem"<<endl;
            cout << "Nghiem thu nhat x1 = " <<(-b+sqrt(delta))/(2*a)<< endl;
            cout << "Nghiem thu hai x2 = " <<(-b-sqrt(delta))/(2*a)<< endl;
        } else if ( delta == 0)
        {
            cout << "Phuong trinh co nghiem kep: x1 = x2 = " <<-b/2*a<< endl;
        } else {
            cout << "Phuong trinh vo nghiem" << endl;
        }
    }
}
PTBAC2::PTBAC2()
{
    a=b=c=0;
}
PTBAC2::PTBAC2(float x, float y, float z)
{
    a=x;
    b=y;
    c=z;
}

int main()
{
    PTBAC2 P(2,3,4);
    P.XUAT();
    P.GIAI();
    PTBAC2 Q;
    Q.NHAP();
    Q.XUAT();
    Q.GIAI();
    return 0;
}

