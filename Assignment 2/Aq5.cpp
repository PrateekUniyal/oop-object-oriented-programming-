#include<iostream>
#include<cmath>
void setcoordinates(int,int,int,int,int,int,int,int);
using namespace std;
class Rectangle{
    private:
    int x1,y1,x2,y2,x3,y3,x4,y4;
    public:

    Rectangle(int X1,int X2,int X3,int X4,int Y1,int Y2,int Y3,int Y4)
    {
        setcoordinates(X1,X2,X3,X4,Y1,Y2,Y3,Y4);
    }
    void setcoordinates(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4)
    {
            if(x1>0 && x1<=20 && x2>0 && x2<=20 && x3>0 && x3<=20 && x4>0 && x4<=20 && y1>0 && y1<=20 && y2>0 && y2<=20 && y3>0 && y3<=20 && y4>0 && y4<=20)
            {
            this->x1=x1;
            this->x2=x2;
            this->x3=x3;
            this->x4=x4;
            this->y1=y1;
            this->y2=y2;
            this->y3=y3;
            this->y4=y4;
            }
            else
            {
                cout<<"All coordinates do not belong to the first quadrant"<<endl;
            }
    }
    int getcoordinates1()
    {
        return x1;
    }
    int getcoordinates2()
    {
        return x2;
    }
    int getcoordinates3()
    {
        return x3;
    }
    int getcoordinates4()
    {
        return x4;
    }
    int getcoordinates5()
    {
        return y1;
    }
    int getcoordinates6()
    {
        return y2;
    }
    int getcoordinates7()
    {
        return y3;
    }
    int getcoordinates8()
    {
        return y4;
    }
    int length()
    {
        return sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    }
    int width()
    {
        return sqrt(pow((x3-x2),2)+pow((y3-y2),2));
    }
    int perimeter()
    {
        return  2*(length()+width());
    }
    int area()
    {
        return length()*width();
    }
    void check_for_square()
    {
        int s1,s2;
        s1=sqrt(pow((x4-x3),2)+pow((y4-y3),2));
        s2=sqrt(pow((x4-x1),2)+pow((y4-y1),2));
        if(s1==s2==length()==width())
        cout<<"The given Rectangle is also a SQUARE"<<endl;
        else
        cout<<"The given Rectangle is not a SQAURE"<<endl;

    }

};
int main()
{
    int x1,x2,x3,x4,y1,y2,y3,y4;
    cout<<"Enter the values for coordinates :";
    cin>>x1>>x2>>x3>>x4>>y1>>y2>>y3>>y4;
    Rectangle r(x1,x2,x3,x4,y1,y2,y3,y4);
    cout<<"Length of Rectangle is :"<<r.length()<<endl;
    cout<<"Width of Rectangle is :"<<r.width()<<endl;
    cout<<"Perimetr of Rectangle is :"<<r.perimeter()<<endl;
    cout<<"Area of Rectangle is :"<<r.area()<<endl;
    r.check_for_square();

}
