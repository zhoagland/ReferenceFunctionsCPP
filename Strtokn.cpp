#include <iostream>
#include <cstring>
using namespace std;

int main()
{
char telephone[15];//telephone number input in format (123) 456-7890
char *area;//area code e.g. 123
char *num1, *num2;//num1 will hold the first part e.g. 456 and num2 will hold the second part e.g. 7890
char number[8];//the seven digit phone number e.g. 4567890

cout << "Input a phone number in the format (555) 555-5555: ";
cin.getline(telephone, 15);

//write code to break apart the telephone number into tokens
//hint: use strtok, strcpy, and strcat
area=strtok(telephone,"()");
num1=strtok(NULL," ");
num2=strtok(NULL," ");

number=strcat(num1,num2);
cout << "Area code is " << area << " and the number is " << number << endl;

return 0;
}
