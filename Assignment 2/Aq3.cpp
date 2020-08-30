#include<iostream>
using namespace std;
class Date{
    private:
    int month,day,year;
    public:
    Date(int m,int d,int y)//default constructor
    {
        m=10;
        d=14;
        y=2001;
    }//end of constructor
    void setmonth(int month)
    {
        if(month>=1&&month<=12)
        this->month=month;
        else
        this->month=1;;
    }
    int getmonth()
    {
        return month;
    }
    void setday(int day)
    {
        this->day=day;
    }
    int getday()
    {
        return day;
    }
    void setyear(int year)
    {
        this->year=year;
    }
    int getyear()
    {
        return year;
    }
    void Display()
    {
        cout<<"Date is :"<<getmonth()<<"/"<<getday()<<"/"<<getyear()<<endl;
    }
};
int main()
{
    int m,d,y;
    cout<<"Enter the month, day and year :"<<endl;
    cin>>m>>d>>y;
    Date D(m,d,y);
    D.setmonth(m);
    D.setday(d);
    D.setyear(y);
    D.Display();

}
