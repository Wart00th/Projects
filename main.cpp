#include <iostream>//allows use of the std::cout object
using namespace std;

int Distance(double t, double speed){
	
	double Discal=t*speed;
	cout<<"Distance calculated: "<<Discal<<" km"<<endl;

	return Discal; 
}

int Time(double distance, double speed){
	
	double Timecal=distance/speed*60;
	cout<<"Time calculated: "<<Timecal<<" mins"<<endl;

	return Timecal;
}

int Speed(double distance, double t){
	
	double Speedcal=distance/t;
	cout<<"Speed calculated: "<<Speedcal<<" kmph"<<endl;

	return Speedcal;
}

int main(){
    
    double distance=0;
    double t=0;
    double speed=0;
	
    cout <<"Enter Distance (km): "<<endl;
	cin >> distance;
	cout << "You entered " << distance << endl;
	
	cout<<"Enter time (hr/min): "<<endl;
	cin>>t;
	cout<<"You entered: "<<t<<endl;
	
	cout<<"Enter speed (kmph): "<<endl;
	cin>>speed;
	cout<<"You entered: "<<speed<<endl;

	Distance(t,speed);
	Time(distance,speed);
	Speed(distance,t);

    return 0;
}
