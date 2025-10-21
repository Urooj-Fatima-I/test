#include <iostream>
using namespace std;
int main()
// N is size of array taken from user
// x will be used as index of array to take different inputs from user
// sum will store the sum of reciprocals of all entered numbers stored in x 
{   int N ,x=0;
    double sum=0;
    cout<<"How many numbers you want to use in harmonic mean\n";
    cin>>N;
    double h[N];
    cout<<"Enter all numbers one by one and press enter after each input\n";
do 
{ // reading input from user using array and addind their reciprocals 
cin>>h[x];
sum=1/h[x]+sum;
x++;
}
// loop will end when when value of index will become equals to one less than the entered size of array since indexes start from 0 not 1
while(x<=N-1);
cout<<"Harmonic mean of all numbers is: "<<N/sum;

    return 0;
}