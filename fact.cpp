#include <iostream>
#include <time.h>
using namespace std;
long long  iterative (int n){
long long fact=1;
for (int i=1;i<=n;i++)
    fact *=i;
return fact;}//iterative
long long recursive (int n){
    if(n==0 || n==1)
        return 1;
    else
        return n *recursive(n - 1);}
double ExecutionTime (int startT,int endT){
double x=((double)endT - startT) / CLOCKS_PER_SEC;
return x;}
int main()
{
     clock_t startTime;
    clock_t endTime;
startTime = clock();
cout<<startTime<<endl;
//cout<<iterative(1000)<<endl;
cout <<recursive(1000)<<endl;
 endTime = clock();
 cout<<endTime<<endl;
cout << "Execution Time in Seconds: " <<ExecutionTime(startTime,endTime)  << endl;
        return 0;}