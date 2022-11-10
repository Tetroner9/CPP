#include <iostream>
using namespace std;
float area_shape;
void area(int s)
{
    area=s*s*s;
    cout<<"Volume of cube is:"<<area<<endl;
}
void vol(float w,float h,float l)
{
    area=w*h*l;
    cout<<"Volume of cuboid is:"<<area<<endl;
}
void vol(float r,float he)
{
    area=3.14*(r*r)*he;
    cout<<"Volume of cylinder is:"<<area<<endl;
}
int main()
{
    float s,w,h,l,r,he;
    cout<<"Enter side of cube:";
    cin>>s;
    cout<<"Enter width, height and length of cuboid:";
    cin>>w>>h>>l;
    cout<<"Enter radius and height of cylinder:";
    cin>>r>>he;
    cout<<endl;
    area(s);
    vol(w,h,l);
    vol(r,he);
    return 0;
}

