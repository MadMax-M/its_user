#include<iostream>
#include<fstream>

using namespace std;

void insert (int * a, int i)
{
	int i1,temp,n,k;
	k = i;
	while(i >= 0)
	{
		cout << "           1111111" << endl;
		i1 = (i-1)/2;
		if (a[i1] < a[i])
		{
			temp = a[i1];
			a[i1] = a[i];
			a[i] = temp;
		}
		if (i == 0)
			break;
		i = i1;
	}
	for( n =0 ; n <= k ; n ++)
	{
		cout << a[n] << " " ;
	}
	cout << "***********************" << endl;
	return;
}
int main()
{
	ifstream fin;
	fin.open("input.txt");
	int a[40];
	int i = 0;
	while (!fin.eof( ))
	{
		cout << "111111111111111" << endl;
		fin >> a[i];
		cout << a[i]  << endl;
		insert(a,i);
		i++;
	}
	for(int n =0 ; n < i ; n ++)
	{
		cout << a[n] << " " ;
	}
	return 0;

}
