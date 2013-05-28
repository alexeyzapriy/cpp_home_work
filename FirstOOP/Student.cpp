#include <iostream>
#include "Student.h"
using std::cout;
using std::endl;

Student::Student()
{
    family_name=NULL;
    name=NULL;
    patronymic=NULL;
    date=NULL;
    address=NULL;
    phone_number=0;
    email=NULL;
    icq=0;
	grup_name=NULL;
}

Student::Student(char *aFamily_name, char *aName, char *aPatronymic, char *aDate, char *aAddress, unsigned long int aPhone_number, char *aEmail, unsigned long int aIcq, char *aGrup_name)
{
    unsigned int len = strlen(aFamily_name);
    family_name = new char[len + 1];
    strcpy(family_name,aFamily_name);

    len = strlen(aName);
    name = new char[len + 1];
    strcpy(name,aName);


    len = strlen(aPatronymic);
    patronymic = new char[len + 1];
    strcpy(patronymic,aPatronymic);

    len = strlen(aAddress);
    address = new char[len + 1];
    strcpy(address,aAddress);

    len = strlen(aEmail);
    email = new char[len + 1];
    strcpy(email,aEmail);

    if(aPhone_number >= 0 && aPhone_number <=  4294967295)
        phone_number = aPhone_number;
    else phone_number = 111111111;

    if(aIcq >= 0 && aIcq <=  4294967295)
        icq = aIcq;
    else icq = 222222222;

	len = strlen(aGrup_name);
    grup_name = new char[len + 1];
    strcpy(grup_name,aGrup_name);

    len = strlen(aDate);
    date = new char[len + 1];
    strcpy(date,aDate);
}
Student::Student(const Student& aStudent)
{
    phone_number = aStudent.phone_number;
    icq = aStudent.icq;

    family_name = new char[strlen(aStudent.family_name) + 1];
	strcpy(family_name, aStudent.family_name);

    name = new char[strlen(aStudent.name) + 1];
    strcpy(name,aStudent.name);

    patronymic = new char[strlen(aStudent.patronymic) + 1];
    strcpy(patronymic,aStudent.patronymic);

    date = new char[strlen(aStudent.date) + 1];
    strcpy(date,aStudent.date);

    address = new char[strlen(aStudent.address) + 1];
    strcpy(address,aStudent.address);

    email = new char[strlen(aStudent.email) + 1];
    strcpy(email,aStudent.email);

    grup_name = new char[strlen(aStudent.grup_name) + 1];
    strcpy(grup_name,aStudent.grup_name);
}
Student::~Student()
{
    delete [] family_name;
    delete [] name;
    delete [] patronymic;
    delete [] date;
    delete [] address;
    delete [] email;
	delete [] grup_name;
}

void Student::set_family(char*aFamily_name)
{
    if(family_name) delete[] family_name;
    unsigned int len = strlen(aFamily_name);
    family_name = new char[len + 1];
    strcpy(family_name,aFamily_name);
}
void Student::set_name(char*aName)
{
    if(name) delete[] name;
    unsigned int len = strlen(aName);
    name = new char[len + 1];
    strcpy(name,aName);
}
void Student::set_patronymic(char*aPatronymic)
{
    if(patronymic) delete[] patronymic;
    unsigned int len = strlen(aPatronymic);
    patronymic = new char[len + 1];
    strcpy(patronymic,aPatronymic);
}
void Student::set_date(char*aDate)
{
    if(date) delete[] date;
    unsigned int len = strlen(aDate);
    date = new char[len + 1];
    strcpy(date,aDate);
}
void Student::set_address(char *aAddress)
{
    if(address) delete[] address;
    unsigned int len = strlen(aAddress);
    address = new char[len + 1];
    strcpy(address,aAddress);
}
void Student::set_phone_number(unsigned long int aPhone_number)
{
    if(aPhone_number > 0 && aPhone_number < 4294967295)
        phone_number = aPhone_number;
    else  phone_number = 1111111111;
}
void Student::set_email(char *aEmail)
{
    if(email) delete[] email;
    unsigned int len = strlen(aEmail);
    email = new char[len + 1];
    strcpy(email,aEmail);
}
void Student::set_icq(unsigned long int aIcq)
{
    if(aIcq > 0 && aIcq < 4294967295)
        icq = aIcq;
    else  icq = 1111111111;
}
void Student::set_grup_name(char *aGrup_name)
{
    if(grup_name) delete[] grup_name;
    unsigned int len = strlen(aGrup_name);
    grup_name = new char[len + 1];
    strcpy(grup_name,aGrup_name);
}
char* Student::get_family()
{
    return family_name;
}
char*  Student::get_name()
{
    return name;
}
char*  Student::get_patronymic()
{
    return patronymic;
}
char*  Student::get_date()
{
    return date;
}
char*  Student::get_address()
{
    return address;
}
unsigned long int Student::get_phone_number()
{
    return phone_number;
}
char*  Student::get_email()
{
    return email;
}
unsigned long int Student::get_icq()
{
    return icq;
}
char*  Student::get_grup_name()
{
	return grup_name;
}
void Student::show()
{
	cout << "family_name  \t" << (family_name?family_name:"noname") << endl << "name  \t\t" << (name?name:"noname") << endl<< "patronymic  \t" << (patronymic?patronymic:"noname") << endl << "birthday  \t" << (date?date:"noname")<< endl << "address  \t" << (address?address:"noname") << endl << "phone_number  \t" << phone_number << endl<< "email  \t\t" << (email?email:"noname") << endl << "icq  \t\t" << icq << endl<< "grup_name  \t\t" << (grup_name?grup_name:"noname") << endl;
}
 bool Student::operator == (Student& aSudiozi)
 {
     if(strcmp(family_name,aSudiozi.family_name)==0 && strcmp(name,aSudiozi.name)==0 && strcmp(patronymic, aSudiozi.patronymic)==0 && strcmp(date, aSudiozi.date)==0 && strcmp(address, aSudiozi.address)==0 && strcmp(email, aSudiozi.email)==0 && strcmp(grup_name, aSudiozi.grup_name)==0 && phone_number==aSudiozi.phone_number && icq==aSudiozi.icq)
     {
         cout<< "equal\n";
        return true;
     } else 
        { 
            cout << "not equal\n";
        return false;
        }
 
 }
    
    bool Student::operator != (Student& aSudiozi)
    {
        if(strcmp(family_name,aSudiozi.family_name)!=0 || strcmp(name,aSudiozi.name)!=0 || strcmp(patronymic, aSudiozi.patronymic)!=0 || strcmp(date, aSudiozi.date)!=0 || strcmp(address, aSudiozi.address)!=0 || strcmp(email, aSudiozi.email)!=0 || strcmp(grup_name, aSudiozi.grup_name)!=0 || phone_number!=aSudiozi.phone_number || icq!=aSudiozi.icq)
     {
         cout<< "not equal\n";
        return true;
     } else 
        { 
            cout << "equal\n";
        return false;
        }
 
    }

     bool Student::operator < (Student& aSudiozi)
 {
     if(strcmp(family_name,aSudiozi.family_name)<0)
     {
         cout<< "less\n";
        return true;
     } else 
        { 
            cout << "no less\n";
        return false;
        }
 
 }
    
    bool Student::operator > (Student& aSudiozi)
    {
        if(strcmp(family_name,aSudiozi.family_name)>0)
     {
         cout<< "more\n";
        return true;
     } else 
        { 
            cout << "no more\n";
        return false;
        }
 
    }

    void Student::write(FILE* aFile)
{

	unsigned int size_str=strlen(family_name);
	fwrite(&size_str,sizeof(int),1,aFile);
	fwrite(family_name,size_str,1,aFile);

	size_str=strlen(name);
	fwrite(&size_str,sizeof(int),1,aFile);
	fwrite(name,size_str,1,aFile);

	size_str=strlen(patronymic);
	fwrite(&size_str,sizeof(int),1,aFile);
	fwrite(patronymic,size_str,1,aFile);

    size_str=strlen(date);
	fwrite(&size_str,sizeof(int),1,aFile);
	fwrite(date,size_str,1,aFile);

	size_str=strlen(address);
	fwrite(&size_str,sizeof(int),1,aFile);
	fwrite(address,size_str,1,aFile);

	size_str=strlen(email);
	fwrite(&size_str,sizeof(int),1,aFile);
	fwrite(email,size_str,1,aFile);

	fwrite(&phone_number, sizeof(int),1,aFile);

	fwrite(&icq,sizeof(int),1,aFile);
	
}
bool Student::read(FILE* aFile)
{
	unsigned int size_str = 0;
	fread(&size_str,sizeof(int),1,aFile);
	family_name=new char[size_str+1];
	fread(family_name,size_str,1,aFile);
	family_name[size_str]='\0';

	fread(&size_str,sizeof(int),1,aFile);
	name=new char[size_str+1];
	fread(name,size_str,1,aFile);
	name[size_str]='\0';

	fread(&size_str,sizeof(int),1,aFile);
	patronymic=new char[size_str+1];
	fread(patronymic,size_str,1,aFile);
	patronymic[size_str]='\0';

    fread(&size_str,sizeof(int),1,aFile);
	date=new char[size_str+1];
	fread(date,size_str,1,aFile);
	date[size_str]='\0';

	fread(&size_str,sizeof(int),1,aFile);
	address=new char[size_str+1];
	fread(address,size_str,1,aFile);
	address[size_str]='\0';

	fread(&size_str,sizeof(int),1,aFile);
	email=new char[size_str+1];
	fread(email,size_str,1,aFile);
	email[size_str]='\0';

	fread(&phone_number,sizeof(int),1,aFile);

	fread(&icq,sizeof(int),1,aFile);
	

	return true;
}
