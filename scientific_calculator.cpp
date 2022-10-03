#include <iostream>
#include <math.h>
#define pi 3.14159

using namespace std;

double radian(double x)
{
    return ((x/180)*pi);
}

int main(){

    int output;
    char x;

    cout<<"Enter the operation: "<<endl;
    cout<<"1. Addition (+)"<<endl;
    cout<<"2. Subtraction (-)"<<endl;
    cout<<"3. Multiplication (*)"<<endl;
    cout<<"4. Division (/)"<<endl;
    cout<<"5. Power (^)"<<endl;
    cout<<"6. Square_Root (@)"<<endl;
    cout<<"7. Cube_Root (#)"<<endl;
    cout<<"8. x_Root (x)"<<endl;
    cout<<"9. Log_e (!)"<<endl;
    cout<<"10. Log_10 (~)"<<endl;
    cout<<"11. Trignometric function: (T)"<<endl;
    cout<<"12. Area of 2d objects: (A) "<<endl;

    cin>>x;

    switch(x)
    {
        case '+':
        {
            float a, b;
            cout<<"Enter two integers: ";
            cin>>a>>b;
            cout<<"Sum : "<<a+b;
        }
        break;
        case '-':
        {
            float a, b;
            cout<<"Enter two integers: ";
            cin>>a>>b;
            cout<<"Difference : "<<a-b;
        }
        break;
        case '*':
        {
            float a, b;
            cout<<"Enter two integers: ";
            cin>>a>>b;
            cout<<"Product : "<<a*b;
        }
        break;
        case '/':
        {
            float a, b;
            cout<<"Enter two integers: ";
            cin>>a>>b;
            cout<<"Division : "<<a/b;
        }
        break;
        case '^':
        {
            float a, b;
            cout<<"Enter the no: ";
            cin>>a;
            cout<<"\nEnter the power: ";
            cin>>b;
            cout<<a<<" raise to the power "<<b<<" : "<<pow(a,b);
        }
        break;
        case '@':
        {
            float a;
            cout<<"Enter the integer: ";
            cin>>a;
            cout<<"Square root of "<<a<<": "<<pow(a,0.5);
        }
        break;
        case '#':
        {
            float a;
            cout<<"Enter the integer: ";
            cin>>a;
            cout<<"Cube root of "<<a<<": "<<pow(a,1.0/3.0);
        }
        break;
        case 'x':
        {
            float a, b;
            cout<<"Enter the integer: ";
            cin>>a;
            cout<<"\nEnter the root: ";
            cin>>b;
            cout<<a<<" ^ ("<<b<<"^-1): "<<pow(a,1.0/b);
        }
        break;
          case '!':
        {
            float a;
            cout<<"Enter the integer: ";
            cin>>a;
            cout<<"Log_e("<<a<<"):"<<log(a);
        }
        break;
          case '~':
        {
            float a;
            cout<<"Enter the integer: ";
            cin>>a;
            cout<<"Log_10("<<a<<"):"<<log10(a);
        }
        break;
          case 'T':
          {
            int x;
            cout<<"1. Sin(x)"<<endl;
            cout<<"2. Cos(x)"<<endl;
            cout<<"3. Tan(x)"<<endl;
            cout<<"4. Cot(x)"<<endl;
            cout<<"5. Sec(x)"<<endl;
            cout<<"6. Cosec(x)"<<endl;

            cin>>x;
                       
            switch(x)
            {
                case 1:
                {
                    double x, v;
                    cout<<"Values: 1. Radians  2. Degree"<<endl;
                    cin>>v;
                    if(v == 2)
                    {
                        cout<<"Enter the degree: ";
                        cin>>x;
                        x = radian(x);
                    }
                    else
                    {
                        cout<<"Enter radians: ";
                        cin>>x;
                    }
                    cout<<"Sin("<<x<<") : "<<sin(x);
                }
                break;
                case 2:
                {
                    double x, v;
                    cout<<"Values: 1. Radians  2. Degree"<<endl;
                    cin>>v;
                    if(v == 2)
                    {
                        cout<<"Enter the degree: ";
                        cin>>x;
                        x = radian(x);
                    }
                    else
                    {
                        cout<<"Enter radians: ";
                        cin>>x;
                    }
                    cout<<"Cos("<<x<<") : "<<cos(x);
                }
                break;
                case 3:
                {
                    double x, v;
                    cout<<"Values: 1. Radians  2. Degree"<<endl;
                    cin>>v;
                    if(v == 2)
                    {
                        cout<<"Enter the degree: ";
                        cin>>x;
                        x = radian(x);
                    }
                    else
                    {
                        cout<<"Enter radians: ";
                        cin>>x;
                    }
                    cout<<"Tan("<<x<<") : "<<tan(x);
                }
                break;
                case 4:
                {
                    double x, v;
                    cout<<"Values: 1. Radians  2. Degree "<<endl;
                    cin>>v;
                    if(v == 2)
                    {
                        cout<<"Enter the degree: ";
                        cin>>x;
                        x = radian(x);
                    }
                    else
                    {
                        cout<<"Enter radians: ";
                        cin>>x;
                    }
                    cout<<"Cot("<<x<<") : "<<cos(x)/sin(x);
                }
                break;
                case 5:
                {
                    double x, v;
                    cout<<"Values: 1. Radians  2. Degree "<<endl;
                    cin>>v;
                    if(v == 2)
                    {
                        cout<<"Enter the degree: ";
                        cin>>x;
                        x = radian(x);
                    }
                    else
                    {
                        cout<<"Enter radians: ";
                        cin>>x;
                    }
                    cout<<"Sec("<<x<<") : "<<1.0/cos(x);
                }
                break;
                case 6:
                {
                    double x, v;
                    cout<<"Values: 1. Radians  2. Degree"<<endl;
                    cin>>v;
                    if(v == 2)
                    {
                        cout<<"Enter the degree: ";
                        cin>>x;
                        x = radian(x);
                    }
                    else
                    {
                        cout<<"Enter radians: ";
                        cin>>x;
                    }
                    cout<<"Cosec("<<x<<") : "<<1.0/sin(x);
                }
                break;
            }
            
        }
        break;  
        case 'A':
        {
            int x;
            cout<<"1. Square"<<endl;
            cout<<"2. Rectangle"<<endl;
            cout<<"3. Circle"<<endl;
            cout<<"4. Triangle"<<endl;

            cin>>x;

            switch(x)
            {
                case 1:
                {
                    float a;
                    cout<<"Enter the side of square: ";
                    cin>>a;
                    cout<<"Area: "<<a*a<<" Perimeter: "<<4*a;
                }
                break;
                case 2:
                {
                    float a, b;
                    cout<<"Enter the dimension of rectangle: ";
                    cin>>a>>b;
                    cout<<"Area: "<<a*b<<" Perimeter: "<<2*a*b;
                }
                break;
                case 3:
                {
                    float r;
                    cout<<"Enter the radius of circle: ";
                    cin>>r;
                    cout<<"Area: "<<pi*r*r<<" Perimeter: "<<2*pi*r;
                }
                break;
                case 4:
                {
                    float a, b;
                    cout<<"Enter the height and base of triangle: ";
                    cin>>a>>b;
                    cout<<"Area: "<<0.5*a*b;
                }
                break;
            }
        }
        break;
        default:
        {
            cout<<"Error - wrong input";
        }
    }

    return 0;
}
