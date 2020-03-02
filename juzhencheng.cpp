#include<iostream>

using namespace std;
int main()
{
	
	int i , j;
	int m[3][3] , n[3][3];
	//input m
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			cin>>m[i][j];
		}
		
	//input n
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			cin>>n[i][j];
		}
	//yunsuan&output
	int a , b;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			b = 0;
			for(a=0;a<3;a++)
			{
				b+=m[i][a]*n[a][j];
			}
			cout<<b<<' ';
		}
		cout<<endl;
	}
	return 0;
}////////////////////////////////////////danbu tiaoshi??????!!!!!!!
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
