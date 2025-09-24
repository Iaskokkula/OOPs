#include<iostream>

using namespace std;
// int summ(int a ,int b ){
//     int c;
//     c = a+b;
//     return c;
// }
struct student{
    int marks;
};
int main()
{
    // int k = summ(4,5);
    struct  student s1;
    s1.marks = 45;
    
    // cout<<"the sum is "<<summ(4,5)<<endl;
    return 0;
}