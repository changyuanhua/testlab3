#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
void readfile();
void check();
void sort();
int A[10000],a;
int main()
{
	readfile();
	check();
	sort();
	return 0;
}
void readfile()
{
	int i;
	ifstream file;
	file.open("file.in",ios::in);
	if(!file)
	{
		cout << "failed opening" << endl;
		return;
	} 
	else
	{
		for (i = 0;i < 10000;i++)
			file >> A[i];
		if(A[0]<6||A[0]>=10000)
		{
			cout << "The first line is not between 5&10000" << endl;
	        return;
		}
	}
}
void check()
{
	int i,b;
    for(i=1;i<10000;i++)
		if(A[i]!=0)
		{	b++;
		a=b;}
	if(A[0]!=a)
	{
		cout<<a<<endl;
        cout << "The number of first line is not equal to the number of subssequent line " << endl;
	 	return;
	}
}
void sort()
{
	int i,j,b,c;
	for(i=a;i>1;i--)
	{
        for(j=1;j<=i-1;j++)
		{
	       if(A[j]<A[j+1])
		   {
	          b=A[j];
			  A[j]=A[j+1];
			  A[j+1]=b;
		   }
		}
	}
	c=A[1]+A[2]+A[3]+A[4]+A[5];
	cout<< c <<" "<< a <<endl;
	cout<<" "<<A[1]<<" "<<A[2]<<" "<<A[3]<<" "<<A[4]<<" "<<A[5];
}	
 
