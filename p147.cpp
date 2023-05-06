#include<iostream>
#include<fstream>
using namespace std;
class student{
	int roll;
	string name;
	int mark;
	public:
		void getdata()
		{
			cout<<"\nEnter roll ,name & mark respectively="<<endl;
			cin>>roll>>name>>mark;
		
		}
		void putdata()
		{
			cout<<endl<<roll<<"\t"<<name<<"\t"<<mark;
		}
};
int main()
{
	student obj[3];
	fstream file;
	file.open("ex.dat",ios::out);
	for(int i=0;i<3;i++){	
	obj[i].getdata();
	file.write((char *)&obj[i],sizeof(obj[i]));
}
	
	file.close();
	file.seekg(0);
	file.open("ex.dat",ios::in);
	cout<<endl<<"roll\tname\tmark"<<endl;
	for(int i=0;i<3;i++)
	{
	file.read((char *)&obj[i],sizeof(obj[i]));
	obj[i].putdata();
}
	file.close();
}
