//Write a program using switch statements to check if the input lowercase character is vowel or consonant.
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter a Alphabet=";
	cin>>ch;
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		cout<<"It is a vowel";
		break;
		default:
		cout<<"It is a consonant";
	}
	return 0;
}

