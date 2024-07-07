#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <conio.h>
#include <cwchar>
#include <windows.h>
#include <vector>
#include <climits>
#include <queue>

using namespace std;
#define size 18
class available
{
	public:
		public:
	    string model;
    	string brand;
    	bool AC;
    	bool autom;
	    available *next;

	available push(available **n,string brand,string model,bool AC,bool autom);
	protected:
};
class commute
{
		public:
	bool AC;
	bool autom;	
	string brand;
	string model;
		void printcommute(commute *c);
	protected:
};
class dat{
	string contact;
	string fname, lname;
	string cnic;
	public:
	void setdata();
	void setfname(string fname);
	void setlname(string lname);
	void setcontact(string contact);
	void setcnic(string cnic);
	void getdata();
	string getfname();
	string getlname();
	string getcontact();
	string getcnic();
	void storedata();
	void searchdata();
	void moddata();
	void display();
//	void sortdata();
//	int partition(string *arr, int low, int high,string *sar);
//	void quickSort(string *arr, int low, int high,string *sar);
};
class login
{	string type;
	string password;
	string fullname;
	string name;
	public:
		login();
		void settype();
		void setpassword();
		string gettype();
		string getpassword();
		string getfullname();
		int signin();
		int access();
		int signup();
		void welcome(string uname);
		string getname();
	protected:
};
class mapping{
	private:
		string destination_name;
		string source_name;
	public:
		int bill;
		void parent_path(int i, int parent[]);
		void display(int source, int destination, int distance[], int parent[]);
		void dijkstra(int map[size][size], int source, int destination);
		int sourceinput();
		int destinationinput();
		void stop_names();
		int time_hour(int distance[], int destination);
		int time_taken(int distance[],int destintaion);
		float billing(int distance[], int destination);
		void take_route();
		int citysource();
		int citydestination();
		void city_names();
		void take_city();
		string getdestination();
		string getsource();

};
class transport
{
	public:
	bool AC;
	bool autom;	
	string brand;
	string model;
	int days;
		void printtransport(transport *t);
	protected:
};
class uhaul
{
	public:
	int height;
	int width;
	int length;
	int volume;
	int feultank;
	bool towcar;
	int capacity;
	uhaul *node;
	int days;

	void printuhaul();
};
class service
{
	int height;
	int width;
	int length;
	int volume;
//	transport* good;
	bool towcar;
	int capacity;
	int days;
	char choice;
	int feultank;
	string brand;
	string model;
	int bill;
	bool AC;
	bool autom;
	uhaul *u1=new uhaul();
	transport *t1=new transport();
	commute *c1=new commute;
	public:
	void getuhauldetails(string name,string destination, string source);
	void getcommutedetails(string name, string source, string destination);
	void gettransportdetails(string name);
	char getchoice();
	bool isavailable(string brand,string model,available *h);
	available* setbrands();
	void recommendtransport(string name,bool ac,bool autom,available *h, transport *t);
	void recommendcommute(string name,bool ac,bool autom,available *h, commute *c,string source, string destination);
	void billuhaul();
	void billcommute();
	void billtransport();
	int getbill();
	void storebill(int bill);
	void displayuhual();
	void displaycommute();
	void displaytransport();
};

/*class Car {
public:
    string make;
    string model;
    string licensePlate;
    bool available;

    Car(string make, string model, string licensePlate)
        : make(make), model(model), licensePlate(licensePlate), available(true) {}
};

class CarRentalSystem {
private:
    vector<Car> cars;
    int numCars;

public:
    CarRentalSystem() : numCars(0) {}

    void addCar(const Car& car) {
        cars.push_back(car);
        numCars++;
    }

    bool rentCar(const string& licensePlate) {
        for (int i = 0; i < numCars; i++) {
            if (cars[i].licensePlate == licensePlate && cars[i].available) {
                cars[i].available = false;
                return true;
            }
        }
        return false;
    }

    bool returnCar(const string& licensePlate) {
        for (int i = 0; i < numCars; i++) {
            if (cars[i].licensePlate == licensePlate && !cars[i].available) {
                cars[i].available = true;
                return true;
            }
        }
        return false;
    }

    void displayAvailableCars() {
        cout << "Available cars:" << endl;
        for (int i = 0; i < numCars; i++) {
            if (cars[i].available) {
                cout << cars[i].make << " " << cars[i].model << " (" << cars[i].licensePlate << ")" << endl;
            }
        }
        cout << endl;
    }
};

class Graph {
private:
    int numVertices;
    vector<vector<pair<int, int> > > adjList;

public:
    Graph(int numVertices) : numVertices(numVertices), adjList(numVertices) {}

    void addEdge(int src, int dest, int weight) {
        adjList[src].push_back(make_pair(dest, weight));
        adjList[dest].push_back(make_pair(src, weight));
    }

    void dijkstraShortestPath(int startVertex) {
        priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;
        vector<int> distances(numVertices, INT_MAX);

        pq.push(make_pair(0, startVertex));
        distances[startVertex] = 0;

        while (!pq.empty()) {
            int currentVertex = pq.top().second;
            pq.pop();

            for (vector<pair<int, int> >::iterator it = adjList[currentVertex].begin(); it != adjList[currentVertex].end(); ++it) {
                int neighborVertex = (*it).first;
                int neighborWeight = (*it).second;

                int newDistance = distances[currentVertex] + neighborWeight;
                if (newDistance < distances[neighborVertex]) {
                    distances[neighborVertex] = newDistance;
                    pq.push(make_pair(newDistance, neighborVertex));
                }
            }
        }

        cout << "Shortest distances from vertex " << startVertex << ":" << endl;
        for (int i = 0; i < numVertices; i++) {
            cout << i << ": " << distances[i] << endl;
        }
    }
};*/
available available::push(available **n,string brand,string model,bool AC,bool autom){
		available* temp = new available();  
	    temp->brand=brand;
	    temp->model=model;
	    temp->AC=AC;
	    temp->autom=autom;

		temp->next = (*n);   
		(*n)= temp; 
		//return *temp;   
}
void commute::printcommute(commute *c){
			cout<<"Service: Commute";
			cout<<"\nBRAND: "<<c->brand;
			cout<<"\nMODEL: "<<c->model;
			cout<<"\nAC/non-AC: ";
			if(c->AC==1){
				cout<<"AC";

				}
			   else {
				cout<<"non- AC"; 
			    }
			cout<<"\nAutomatic/Manual: ";
			if(c->autom==1){
				cout<<"Auto";
			 }
			   else {
				cout<<"Manual";
				}
}
void dat::setdata(){
	system("cls");
	cout<<"\nEnter First Name: ";
	cin>>fname;
	this->setfname(fname);
	cout<<"\nEnter Last Name: ";
	cin>>lname;
	this->setlname(lname);
	cout<<"\nEnter Your CNIC No: ";
	cin>>cnic;
	this->setcnic(cnic);
	cout<<"\nEnter Your Phone No: ";
	cin>>contact;
	this->setcontact(contact);
	storedata();
}
void dat::setfname(string fname){
	this->fname=fname;
}
void dat::setlname(string lname){
	this->lname=lname;
}
void dat::setcontact(string contact){
	this->contact=contact;
}
void dat::setcnic(string cnic){
	this->cnic=cnic;
}
string dat::getfname(){
	return fname;
}
string dat::getlname(){
	return lname;
}
string dat::getcontact(){
	return contact;
}
string dat::getcnic(){
	return cnic;
}
void dat::getdata(){
	cout<<"\nCustomer Data\n\n";
	cout<<"\nFirst Name: "<<getfname();
	cout<<"\nLast Name: "<<getlname();
	cout<<"\nContact: "<<getcontact();
	cout<<"\nCNIC No: "<<getcnic();
}
void dat::storedata(){
	fstream f2;
	f2.open("data.txt",ios::app);
		f2<<"\n"<<getfname()<<" ";
		f2<<getlname()<<" ";
		f2<<getcnic()<<" ";
		f2<<getcontact();
	f2.close();	
	//sortdata();
}
void dat::searchdata(){
	string line;
	string first,last,cn,no,fName,lName;
	char choice;
	int flag;
	int pos=0;
	system("color F0");
	system("cls");
	fstream file2;
	file2.open("data.txt",ios::in);

	do{
		cout << "\n\n\t\t-----------Search User Data-------------\n\n";
			flag=0;
			file2.seekg(0,ios::beg);

				cout<<endl<<"Enter First Name: ";
				cin>>first;
				cout<<"Enter Last Name: ";
				cin>>last;
				if(file2.is_open()){

				while (file2)
				{

					getline (file2,line);
					pos=line.find(" ");
					fName=line.substr(0,pos);
					line = line.substr(pos+1,line.length());
					pos=line.find(" ");
					lName=line.substr(0,pos);
					line = line.substr(pos+1,line.length());
					cn=line.substr(0,pos);
					line = line.substr(pos+1,line.length());
					no = line;
					if(fName==first && lName==last)
					{

						cout<<"\nFound!!"<<endl;
						cout<<endl<<"First Name: "<<fName<<endl;
						cout<<"Last Name: "<<lName<<endl;
						cout<<"CNIC Number: "<<cn<<endl ;
						cout<<"Phone Number: "<<no<<endl ;
						flag=1;
						break;
					}
				}

				}
			else
			{

				cout << "Unable to open file"<<endl;
				exit(0);
			}
			if(flag==0)
			{

				cout<<"User Data Not Found"<<endl;
			}
			cout << "\nDo you want to search another?(y/n) ";
			cin >> choice;

			system("cls");
	}while(choice=='y');

	file2.close();

	return;
}
void dat::moddata()
{
	system("cls");
	system("color F0");
	string line, fName, lName, LName, FName, no,cn;
    int pos=0,flag=0;
    cout << "\n\n\t\t-----------Modify User Data-------------\n\n";
    afgh:
    cout << "Please enter the first name of record you want to modify: ";
    cin>>FName;
    cout << "\nPlease enter the last name of record you want to modify: ";
    cin>>LName;

    ifstream myfile;
    ofstream temp;
    myfile.open("data.txt");
    temp.open("temp.txt");

    while (!myfile.eof())
    {
  	getline (myfile,line);

	pos=line.find(" ");
	fName=line.substr(0,pos);

	line = line.substr(pos+1,line.length());
	pos=line.find(" ");
	lName=line.substr(0,pos);

	line = line.substr(pos+1,line.length());
	cn=line.substr(0,pos);

	line = line.substr(pos+1,line.length());
	no = line;

	if(!(fName==FName && lName==LName))
	{

      	temp << fName <<" "<< lName <<" "<< cn<<" "<<no<< endl;

      }
    else
    {
    		flag++;
    		break;
		}

  }
  ofstream temp2;
  	temp2.open("t2.txt");
  while(!myfile.eof()){

  	getline(myfile,line);
  	temp2<<line<<endl;
  }
  temp2.close();
  if(flag==0)
  {
  	 cout<<"\nRecord not found!! Try Again.\n\n";
	 goto afgh;
  }
  myfile.close();
  temp.close();
  remove("data.txt");
  rename("temp.txt", "data.txt");


	ifstream temp3;
	temp3.open("t2.txt");
	string fname2, lname2, no2,cn2;
	fstream myfile2("data.txt",ios::app);
	cout << "\n\nEnter New First Name : ";
	cin >> fname2;
	myfile2 << fname2 << " ";
	cout << "\nEnter New Last Name : ";
	cin >> lname2;
	myfile2 << lname2 << " ";
	cout << "\nEnter New CNIC Number : ";
	cin >> cn2;
	myfile2 << cn2<< " ";
	cout << "\nEnter New Phone Number : ";
	cin >> no2;
	myfile2 << no2<<endl;
	while(!temp3.eof()){
		getline(temp3,line);
		myfile2 <<line <<endl;
	}
	myfile2.close();
	temp3.close();
	remove("t2.txt");
	return;
}
void dat::display(){
	string line;
	string first,last,cn,no,fName,lName;
	int pos=0;
	system("color F0");
	system("cls");
	fstream file2;
	file2.open("data.txt",ios::in);
		cout << "\n\n\t\t-----------Display User Data-------------\n\n";
						file2.seekg(0,ios::beg);
				if(file2.is_open()){

				while (! file2.eof() )
				{

					getline (file2,line);
					pos=line.find(" ");
					fName=line.substr(0,pos);
					setfname(fName);
					line = line.substr(pos+1,line.length());
					pos=line.find(" ");
					lName=line.substr(0,pos);
					setlname(lName);
					line = line.substr(pos+1,line.length());
					cn=line.substr(0,pos);
					setcnic(cn);
					line = line.substr(pos+1,line.length());
					no = line;
					setcontact(no);
					getdata();
				}

				}
			else
			{

				cout << "Unable to open file"<<endl;
				exit(0);
			}
	file2.close();

	return;
}
login::login()
{
}
void login::settype(){
	cout<<setw(50)<<"Are you User or Admin?\n";
	cout<<setw(50)<<"Enter your Domain: ";
	cin>>type;
	//this->type=type;
}
void login::setpassword(){
	char ch;
	password="";
	cout<<endl<<setw(50)<<"Enter Password: ";
	ch=_getch();
	while(ch !=13){
		password.push_back(ch);
		cout<<'*';
		ch=_getch();
	}
	this->password=password;
}
string login::gettype(){
	return type;
}
string login::getpassword(){
	return password;
}
int login::signin(){
			int n=0;
			oncemore:
			string uname,line;
			fstream file1;
			int flag=0;
			int pos=0;
			system("cls");
			cout<<setw(50)<<"Sign -In\n";
			cout<<"\nPlease Enter the User Name: ";
			cin>>name;
			file1.open("user.txt",ios::in);
			file1.seekg(0,ios::beg);
			while(file1){
				getline(file1,line);
				pos=line.find(" ");
				uname=line.substr(0,pos);
				line=line.substr(pos+1,line.length());
				if(uname==name){
					flag=1;
					cout<<line;
					break;
				}
			}
			file1.close();
			if(flag==1){
				for(int i=0;i<3;i++){//3 tries for password
					setpassword();
					cout<<endl<<getpassword();
					if(getpassword()==line){
						cout<<"\nSign-In Succesful\n";
						welcome(uname);
						break;
					}
					else{
						cout<<"\nSorry! Incorrect Password";
					}	
				}
			}
			else{
				cout<<"\nIncorrect User Name\n";
				cout<<"\nPress <1> to Sign-Up\nOR\nPress <2> to Sign-In Again\n";
				int choice;
				cin>>choice;
				switch (choice){
					case 1:{
						n=signup();
						//cout<<"\nwe will go to sign up\n";//sign up
						break;
					}
					case 2:{
						goto oncemore;//sign in
						break;
					}
					default:{
						cout<<"Wrong choice";
						return 0;
						break;
					}
				}
			}
			return n;
		}
int login::access(){
	again:
	settype();
	setpassword();
	if(getpassword()=="boss" && gettype()=="admin" ){
		cout<<"\nAdmin access granted!\n";
		return 2;
	}
	else if(getpassword()=="user" && gettype()=="user"){
		cout<<"\nUser access granted!\n";
		return 1;
	}
	else{
		char choice;
		cout<<"\nSorry Wrong choice\nDo You Want To Enter Again?";
		cout<<"\nPress 'y' to enter Again\nOR \n press 'n' to exit\n";
		cin>>choice;
		if(choice=='y'){
			goto again;
		}
		else {
			return 0;	
		}
	}
}
int check(string a)
{
	int flag=0;
	string b;
	fstream f1;
	f1.open("user.txt",ios::in);
	while(f1)
	{
		f1 >> b;
		if(b==a)
		{
			flag = 1; break;
		}
	}
	f1.close();
	if(flag==1)
	{
		cout << "\nSorry! Username already exists. \nPlease try another: ";
		return 1;
	}
	return 0;
}

int login::signup(){
	string uname, line;
	int flag;
	fstream f1;
	f1.open("user.txt",ios::in|ios::out|ios::app);
	system("cls");
	cout<<setw(50)<<"Sign-Up\n";
	retry:
	cout<<setw(50)<<"Please Enter User name: ";
	cin>>name;
	flag=check(name);
	if(flag==1){
		goto retry;
	}
	//cout<<"\nPlease Enter Password: ";
	setpassword();
	f1<<"\n"<<name<<" "<<getpassword();
	cout<<"\nAccount created Succesfully\n";
	return 1;
	f1.close();
	system("pause");
	return 0;

}
void login::welcome(string uname){
	fstream f3;
	string line,fname,lname;
	int pos=0,flag=0;
	f3.open("data.txt",ios::in);
	f3.seekg(0,ios::beg);
			while(f3){
				getline(f3,line);
				pos=line.find(" ");
				fname=line.substr(0,pos);
				line=line.substr(pos+1,line.length());
				pos=line.find(" ");
				lname=line.substr(0,pos);
				line=line.substr(pos+1,line.length());
				if(uname==fname || uname==lname){
					flag=1;
					break;
				}
			}
			f3.close();
			if(flag==1){
			system("cls");
			cout<<"\n\n--------------Welcome "<<fname<<" "<<lname<<"--------------\n\n";	
			}
			this->fullname=fname+" "+lname;

}
string login::getfullname(){
	return fullname;
}
string login::getname(){
	return name;
}
void service::getuhauldetails(string name,string destination, string source){
			cout<<"\nBook U-Haul\n";
			cout<<"For how many days you want it?\t";
			cin>>days;
			cout<<"\n\tEnter height..\t";
			cin>>height;
			cout<<"\n\tEnter Width..\t";
			cin>>width;
			cout<<"\n\tEnter length..\t";
			cin>>length;
			cout<<"\n\tShould it be a towingcar..\t";
			cin>>towcar;
			uhaul* temp=new uhaul();
   	 	    temp->length=length;
   	        temp->height=height;
   	        temp->width=width;
   	        volume=length*height*width;
   	        temp->volume=volume;
   	        temp->days=days;
   	        if(temp->volume <= 402){
   	        this->capacity=402;
			temp->capacity=402;
		}
			else if(temp->volume <= 764){

			this->capacity=764;
		}
			else if(temp->volume <= 1016){
				this->capacity=1016;
		}
			else if(temp->volume <= 1688){
			this->capacity=1688;
		}
	    if( temp->capacity == 402){
			this->feultank=31;
		}
			else if(temp->volume == 764){
			this->feultank=40;
		}
			else if(temp->volume == 1016){
			this->feultank=40;
		}
			else if(temp->volume == 1688){
			this->feultank=60;
		}
		temp->capacity=capacity;
		temp->feultank=feultank;
		temp->towcar=towcar;
		system("cls");
		this->u1=temp;
		billuhaul();
		//temp->printuhaul();
		fstream f1;
		f1.open("service.txt", ios::out | ios::app);
		f1 <<name<<" U-haul";
		f1.close();
		fstream f2;
		f2.open("uhaul.txt", ios::out | ios::app);
		f2<<name<<" "<< temp->days <<" "<< temp->capacity<<" "<<temp->feultank<<" "<<temp->towcar<<" "<<source<<" "<< destination<<endl;
		f2.close();
}
void service::getcommutedetails(string name,string source, string destination){
	cout<<"\nBook A Ride (Commute)\n";
	cout<<"\n\tPress 1 for a AC car..\t";
	cin>>AC;		     
	cout<<"\n\tPress 1 for Auto..\t";
	cin>>autom;
	commute *c=new commute();
	available *h=new available();
	h=setbrands();
	 if(c !=NULL){
		 c->AC=AC;
		 c->autom=autom;
		recommendcommute(name,AC,autom,h,c,source,destination);
		}
		billcommute();
}
void service::gettransportdetails(string name){
	cout<<"\nBook Transport\n";
	cout<<"For how many days you want it?\t";
	cin>>days;
	cout<<"\n\tPress 1 for a AC car..\t";
	cin>>AC;		     
	cout<<"\n\tPress 1 for Auto..\t";
	cin>>autom;
	transport *t=new transport();
	available *h=new available();
	h=setbrands();
	 if(t !=NULL){
		 t->AC=AC;
		 t->autom=autom;
		 t->days=days;
		recommendtransport(name,AC,autom,h,t);
		billtransport();

		}
}
char service::getchoice(){
		cout<<"\n\n---------Choose The Service---------\n\n";
		cout<<"<a> U-haul\n";
		cout<<"<b> Transport\n";
		cout<<"<c> Commute\n";
		cout<<"Enter your choice: ";
		cin>>choice;
		return choice;
	}

bool service::isavailable(string brand, string model, available *h){
	while(h != NULL){
		if(brand == h->brand){
			if(model == h->model){
				return true;
			}
			else{
				cout<<"\n\tUnfortunately, this car has been booked\n";
				return false;
			}
		}
		else{
			cout<<"\n\tSorry! we donot have this brand\n";
			return false;
		}
		h= h->next;
	}
	return h;
}	

available* service::setbrands(){
	        available* head=new available();
		    available* first=new available();
		    available* second=new available();
		    available* third=new available();
		    available* fourth=new available();
		    available* fifth=new available();
		    available* six=new available();
		    available* seven=new available();

		    head->brand= "toyota";
		    head->model= "corolla";
		    head->AC=1;
		    head->autom=0;
		    first->brand= "suzuki";
		    first->model= "swift";
		    first->AC=1;
		    first->autom=0;
		    second->brand= "changan";
		    second->model= "alsvin";
		    second->AC=1;
		    second->autom=1;
		    third->brand= "toyota";
		    third->model= "mira";
		    third->AC=0;
		    third->autom=1;
		    fourth->brand= "toyota";
			fourth->model= "yaris";
		    fourth->AC=1;
		    fourth->autom=1;
		    fifth->brand= "suzuki";
			fifth->model= "mehran";
		    fifth->AC=0;
		    fifth->autom=0;
		    six->brand= "suzuki";
			six->model= "alto";
		    six->AC=0;
		    six->autom=0;
		    seven->brand= "honda";
		    seven->model= "civic";
		    seven->AC=0;
		    seven->autom=1;

		    head->next=first;
		    first->next=second;
		    second->next=third;
		    third->next=fourth;
		    fourth->next=fifth;
		    fifth->next=six;
		    six->next=seven;
		    seven->next=NULL;

		    return head;
}	
void service::recommendtransport(string name,bool ac, bool autom,available *h,transport *t){
	int i=0,j=0,k=1;
	int choice;
			string arr[3][2];
			while(h != NULL){
				if(t->AC == h->AC  && t->autom== h->autom){

					cout<<"\n\t"<<k<<"\t"<<h->brand<<"\t"<<h->model<<"\t\n";
					arr[i][j] = h->brand;
					arr[i][j+1] = h->model;
					i++;
					k++;
				}
				h= h->next;

			}
			cout<<"\n\tEnter your choice..\t";
			cin>>choice;
			for( i=0,j=0;i<3;i++){
				if(choice == i+1){
					t->brand = arr[i][j];
					t->model = arr[i][j+1];
					break;
				}
			}
			this->t1=t;
		fstream f1;
		f1.open("service.txt", ios::out | ios::app);
		f1 << name<<" transport";
		f1.close();
		fstream f2;
		f2.open("transport.txt", ios::out | ios::app);
		f2<<name<<" "<< t->model<<" "<<t->brand<<" "<<t->AC<<" "<<t->autom<<" "<< t->days<<endl;
		f2.close();
}	
void service::recommendcommute(string name,bool ac, bool autom,available *h,commute *c,string source, string destination){
	int i=0,j=0,k=1;
	int choice;
			string arr[3][2];
			while(h != NULL){
				if(c->AC == h->AC  && c->autom== h->autom){

					cout<<"\n\t"<<k<<"\t"<<h->brand<<"\t"<<h->model<<"\t\n";
					arr[i][j] = h->brand;
					arr[i][j+1] = h->model;
					i++;
					k++;
				}
				h= h->next;

			}
			cout<<"\n\tEnter your choice..\t";
			cin>>choice;
			for(i=0;i<3;i++){
				if(choice == i+1){
					c->brand = arr[i][0];
					c->model = arr[i][1];
					break;
				}

			}
			this->c1=c;
			fstream f1;
		f1.open("service.txt", ios::out | ios::app);
		f1 <<name<<" commute";
		f1.close();
		fstream f2;
		f2.open("commute.txt", ios::out | ios::app);
		f2<< name <<" "<< c->model<<" "<<c->brand<<" "<<c->AC<<" "<<c->autom<< " " <<source<<" "<< destination<<endl;
		f2.close();
}
void service::billuhaul(){
	if(u1->capacity==402){
		this->bill=8;
	}
	else
	if(u1->capacity==764){
		this->bill=10;
	}
	else
	if(u1->capacity==1016){
		this->bill=12;
	}
	else{
		this->bill=14;
	}
	if(u1->towcar==1){
		bill+=10;
	}
	this->bill=bill*u1->days;
}
void service::billcommute(){
	if(c1->AC==1){
		this->bill=10;
	}
	else{
		this->bill=5;
	}
	if(c1->autom==1){
		this->bill=bill+10;
	}
	else{
		this->bill=bill+5;
	}
}
void service::billtransport(){
		if(c1->AC==1){
		this->bill=10;
	}
	else{
		this->bill=5;
	}
	if(c1->autom==1){
		this->bill=bill+10;
	}
	else{
		this->bill=bill+5;
	}
	this->bill=bill*t1->days;
}
int service::getbill(){
	return bill;
}
void service::storebill(int bil){
	fstream f1;
	f1.open("service.txt", ios::out | ios::app);
		f1 <<" "<<bil<< endl;
		f1.close();
		this->bill=bil;
}
void service::displayuhual(){
	u1->printuhaul();
	cout<<"\nTotal Bill: "<<getbill()<<" $";
}
void service::displaycommute(){
	c1->printcommute(c1);
	cout<<"\nTotal Bill: "<<getbill()<<" $";
}
void service::displaytransport(){
	t1->printtransport(t1);
	cout<<"\nTotal Bill: "<<getbill()<<" $";
}
void transport::printtransport(transport *t){

	        cout<<"Service: Transport\n";
	        cout<<"\nDays: "<<t->days; 
			cout<<"\nBRAND: "<<t->brand;
			cout<<"\nMODEL: "<<t->model;
			cout<<"\nAC/non-AC: ";
			if(t->AC==1){
				cout<<"AC";

				}
			   else {
				cout<<"non- AC"; 
			    }
			cout<<"\nAutomatic/Manual: ";
			if(t->autom==1){
				cout<<"Auto";
			 }
			   else {
				cout<<"Manual";
				}
}
void uhaul::printuhaul(){
	cout<<"Service: UHAUL";
	cout<<"\nNo. Of Days: "<<days;
	cout<<"\nCapacity: "<<capacity<<" cu.ft";
	cout<<"\nFeul Tank: "<<feultank<<" gallons";
	cout<<"\nCar Towing Applicable: "<<towcar;
}
int main(){
	dat d1;
	mapping M;
	service S;
	system("cls");
	cout<<setw(65)<<"_________________________________________"<<endl;
	cout<<setw(50)<<"Welcome"<<setw(50)<<endl<<endl;
	cout<<setw(50)<<"Lost In The City"<<setw(50)<<endl;
	cout<<setw(50)<<"Car Rental System"<<setw(50)<<endl;
	cout<<setw(65)<<"_________________________________________"<<endl;
	login l1;
	int s=l1.access();
	if(s==1){
		int c1;
	system("cls");
	cout << "\n\n\t\t-----------WELCOME USER-------------\n\n";
	cout << "Please Sign-In or Sign-Up to Continue\n\n";
	cout<<"\t1.  Sign-In to an Existing Account\n";
	cout<<"\t2.  Create a new Account\n";
	cout<<"\t3.  Exit\n";
	cout << "\nPlease Enter your choice: ";
	cin>>c1;
	int bill=0;
	if(c1==1){
		int n=l1.signin();	
		if(n==1){
			d1.setdata();
			}
			string name=l1.getfullname();
			char cc=S.getchoice();
			system("cls");
			if(cc=='a'){
            	cout << "\n\n\t\t-----------U-Haul Service-------------\n\n";
				S.getuhauldetails(name,M.getdestination(),M.getsource());
				M.take_city();
				bill=M.bill+S.getbill();
				S.storebill(bill);
				S.displayuhual();
			}	
			else
			if(cc=='b'){
				S.gettransportdetails(name);
				M.take_city();
				bill=M.bill+S.getbill();
				S.storebill(bill);
				S.displaytransport();
			}
			else 
			if(cc=='c'){
				S.getcommutedetails(name,M.getsource(),M.getdestination());
				M.take_route();
				bill=M.bill+S.getbill();
				S.storebill(bill);
				S.displaycommute();
			}
		}
	else if(c1==2){
		int n=l1.signup();	
		if(n==1){
			d1.setdata();
			l1.welcome(l1.getname());
			char cc=S.getchoice();
			string name=l1.getfullname();
			if(cc=='a'){
				S.getuhauldetails(name,M.getdestination(),M.getsource());
				M.take_city();
				bill=M.bill+S.getbill();
				S.storebill(bill);
				S.displayuhual();
			}	
			else
			if(cc=='b'){
				S.gettransportdetails(name);
				M.take_city();
				bill=M.bill+S.getbill();
				S.storebill(bill);
				S.displaytransport();
			}
			else 
			if(cc=='c'){
				S.getcommutedetails(name,M.getsource(),M.getdestination());
				M.take_route();
				bill=M.bill+S.getbill();
				S.storebill(bill);
				S.displaycommute();
			}
			}
			}
		else if(c1==3){
		system("pause");
		exit(0);
	}
		}	
	else if(s==2){
		int c1;
		system("cls");
		cout << "\n\n\t\t-----------WELCOME ADMIN-------------\n\n";
		cout<<"\t1.  Search a User's Data\n";
		cout<<"\t2.  Modify a User's Data\n";
		cout<<"\t3.  Display All Data\n";
		cout<<"\t4.  Exit\n";
		cout << "\nPlease Enter your choice: ";
		cin>>c1;
		if(c1==1){
			d1.searchdata();
		}
		else if(c1==2){
		d1.moddata();	
		//d1.sortdata();
		}
		else if(c1==3){
		//display function will be put here	
		d1.display();
		}
		else if(c1==4){
			system("pause");
			exit(0);	
		}
		else {
			cout<<"Wrong entery!!!";
		}

	}
	return 0;
}