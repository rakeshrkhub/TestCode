#include <iostream>

using namespace std;

int main()
{
     int i, j, rows;
 	cin>>rows;
	for(i = 1; i <= rows/2; i++)
	{
		for(j = 1; j <= rows/2 - i+1; j++)
		{
			cout<<"    ";
		}
        for(j = 1; j <= i * 2 - 1; j++)
        {
            cout<<"*   ";
        }
		cout<<"\n";
	}


	   for(j=1;j<=rows;j++)
	        cout<<"*   ";

	cout<<"\n";

    for(i = (rows - 1)/2; i > 0; i--)
	{
		for(j = 1; j <= rows/2 - i+1; j++)
		{
			cout<<"    ";
		}
        for(j = 1; j <= i * 2 - 1; j++)
        {
            cout<<"*   ";
        }
		cout<<"\n";
	}

    return 0;
}
