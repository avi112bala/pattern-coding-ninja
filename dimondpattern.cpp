#include <iostream>

using namespace std;

int main()

{
    int n,i=1,j=1,x,y;
    cin>>n;
    x=(n+1)/2;
    y=x-1;
    

while(i<=x)
{
	 int space=1;
	while(space<=x-i)
	{
		cout<<" ";
		space++;
	}
	
j=1;
	while(j<=i)
	{
    cout<<"*";
    j++;
}
j=1;
while(j<=i-1)
{
	cout<<"*";
	
	j++;
}
cout<<endl;
i++;
}
i=x+1;
while(i<=n)
{
	 int space=y;
	while(space<=i-2)
	{
		cout<<" ";
		space+=1;
	}
	j=i;
	while(j<=n)
	{
		cout<<"*";
		j++;
	}
	j=i;
	while(j<n)
	{
		cout<<"*";
		j++;
	}
	
cout<<"\n";
i++;
	
}
return 0;


}


