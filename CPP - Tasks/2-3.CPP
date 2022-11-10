#include<iostream>
using namespace std;
int area_shape;
void area(int s)
{
    area_shape = s * s;
    cout<<"Shape of square: "<<area_shape<<endl;
}
void area(int l, int w)
{
    area_shape = l * w;
    cout<<"Shape of recntangle: "<<area_shape<<endl;
}
void area(float b, float h)
{
    area_shape = 0.5 * b * h;
    cout<<"Shape of triangle: "<<area_shape<<endl;
}
void area(float r)
{
    area_shape = 3.14 * (r*r);
    cout<<"Shape of circle: "<<area_shape<<endl;
}
int main()
{
    int s,l,w;
    float b,h,r;
    cout<<"Side of square: "<<endl;
    cin>>s;
    cout<<"Length and width of rectangle: "<<endl;
    cin>>l>>w;
    cout<<"Base and height of triangle: "<<endl;
    cin>>b>>h;
    cout<<"Radius of circle: "<<endl;
    cin>>r;
    cout<<endl;

    area(s);
    area(l,w);
    area(b,h);
    area(r);
    return 0;
}