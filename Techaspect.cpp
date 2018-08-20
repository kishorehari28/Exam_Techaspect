#include<iostream.h>
using namespace std;
int main()
{
	int opt;
	label p:
	cout<<"1. Submit Data\n2. List Flights,";
	if(opt==1)
	{
		submitdata()
	}
}

class flight
{
	public:
		int flightno,price;
		char airname[10],dest[10],src[10],arrdate[10],depdate[10];
		void submitdata()
		{
			cout<<"Enter Flight no:";
			cin>>flightno;
			cout<<"\nFlight Name:";
			gets(airname);
			cout<<"\nSource:"
			gets(src);
			cout<<"\nDestination:";
			gets(dest);
			cout<<"\nDeparture date:";
			gets(depdate);
			cout<<"\nArrival date:";
			gets(arrdate);
			cout<<"\nPrice";
			cin>>price;
		}
		void displaydata()
		{
			cout<<"\n"<<flightno;
			cout<<"\n"
			puts(flightname);
			cout<<"\n"
			puts(src);
			cout<<"\n"
			puts(dest);
			cout<<"\n"
			puts(deptdate);
			cout<<"\n"
			puts(arrdate);
			cout<<"\n"<<price;
		}
		}
}
