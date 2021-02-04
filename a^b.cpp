int pow(int a,int b)
{
	if(b==0)
	return 1;
	
	return a*pow(a,b-1);

}

#include<iostream>
using namespace std;
int main()
{
	int *p=new int;
	int *p1=new int;
	cin>>*p;
	cin>>*p1;
/*	cout<<*p<<endl;
	cout<<*p1<<endl;*/
	 
	 int ans=pow(*p,*p1);
	 cout<<"A^B:"<<ans;
}
