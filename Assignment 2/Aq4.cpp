#include <iostream>
using namespace std;
class Rectangle
{
private:
float length=1,width=1;
public:
void setLength(float l)
{
 length=l;
if((length<0.0)||(length>20.0))
{
cout<<"Length is invalid"<<endl;
}
}
float getLength()
{
return length;
}
void setWidth(float w)
{
width=w;
if((width<0.0)||(width>20.0))
{
cout<<"Width is invalid"<<endl;
}
}
float getWidth()
{
return width;
}
float Perimeter()
{
float p=0.0;
if (((length>0.0)&&(length<20.0))&&((length>0.0)&&(length<20.0)))
{
    p=(2*(length+width));
return p;
}
else{
   return 0;
}
}
float area()
{
float a=0.0;
if (((length>0.0)&&(length<20.0))&&((length>0.0)&&(length<20.0)))
{
    a=length*width;
return a;
}
else{
 return 0;
}

}
};
int main()
{
//float Length;

Rectangle rect;
float x=0.0,y=0.0,p1,a1;
cout<<"Enter the length of the rectangle"<<endl;
cin>>x;
cout<<"Enter the width of the rectangle"<<endl;
cin>>y;

rect.setLength(x);

rect.setWidth(y);
p1=rect.Perimeter();
a1=rect.area();
if(p1!=0){
cout<<"perimeter of rectangle is "<<p1<<endl;
}
//cout<<p1<<endl;
if(a1!=0){
cout<<"Area of rectangle is "<<a1<<endl;
}
//cout<<a1<<endl;
return 0;
}











































