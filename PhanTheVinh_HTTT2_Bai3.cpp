#include<iostream>
#include<stdio.h>
#include<iomanip>

using namespace std;

class HANGHOA
{
private:
    char Mahang[20];
    char Tenhang[30];
    float Dongia;
    int Soluong;
public:
    void NHAP();
    void XUAT();
};
void HANGHOA::NHAP()
{
    cout<<"Nhap ma hang: ";
    fflush(stdin);
    gets(Mahang);
    cout<<"Nhap ten hang: ";
    fflush(stdin);
    gets(Tenhang);
    cout<<"Nhap don gia: ";
    cin>>Dongia;
    cout<<"Nhap so luong: ";
    cin>>Soluong;
}
void HANGHOA::XUAT()
{
    cout<<setw(20)<<Mahang<<setw(20)<<Tenhang<<setw(20)<<Dongia<<setw(20)<<Soluong<<setw(20)<<Dongia*Soluong<<endl;

}
int main()
{
    HANGHOA x[100];
    int n;
    do
    {
		cout<<"\nNhap vao so mat hang: ";
		cin>>n;
    }while(n<=0 || n>100);
    for(int i=0; i<n; i++)
    {
        cout<<"\nNhap mat hang "<<i+1<<endl;
        x[i].NHAP();
    }
    cout<<"-----------------------THONG TIN MAT HANG VUA NHAP LA------------------ "<<endl;
    cout<<setw(20)<<"MA HANG"<<setw(20)<<"TEN HANG"<<setw(20)<<"DON GIA"<<setw(20)<<"SO LUONG"<<setw(20)<<"THANH TIEN"<<endl;
    for(int i=0; i<n; i++)
    {
        x[i].XUAT();
    }

    return 0;
}

