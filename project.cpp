#include <iostream>
using namespace std;
struct classes{
	int totalhour,totalweek,classperweek,hour;
};
int main(){
	classes fromuser;
	cout<<"~~calculate Itcp class per semester~~"<<endl;
	cout<<"Total week in semester: ";
	cin>>fromuser.totalweek;
	cout<<"Per week class: ";
	cin>>fromuser.classperweek;
	cout<<"Hour of class per week: ";
	cin>>fromuser.hour;
	int Totalclasses=fromuser.totalweek*fromuser.classperweek;
	int totalhour=fromuser.totalweek*fromuser.hour;
	cout<<"Total classes per semester: "<<Totalclasses<<" class"<<endl;
	cout<<"Total hour of class per semester: "<<totalhour<<" Hours"<<endl;
	
	return 0;
}
