/*Q2. Read an integer and check whether it is even or odd.
Q3. Take two integers as input and print the larger one using if-else.
Q4. Read three integers and print the largest number.
Find the roots of a quadratic equation ax2 + bx + c = 0. (Handle real and
imaginary roots using if-else.)*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
int a,b,c;
float d;
float root1,root2;
cout<<"Enter 1st number"<<endl;
cin>>a;
cout<<"enter 2nd number"<<endl;
cin>>b;
cout<<"enter 3rd number"<<endl;
cin>>c;
d=(b*b)-(4*a*c);
if (d>0){
    root1=(-b+sqrt(d))/(2*a);
    root2=(-b-sqrt(d))/(2*a);
    cout<<"The roots are real and distinct and are "<<root1<<" and "<<root2<<""<<endl;
    
}
else if(d==0){
    root1=(-b+sqrt(d))/(2*a);

    cout<<"the roots are real and equal and it is "<<root1<<""<<endl;

}
else{
    float realPart = -b / (2.0 * a);
        float imaginaryPart = sqrt(-d) / (2.0 * a);
        cout << "The roots are complex and imaginary:" << endl;
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
}


return 0;
}