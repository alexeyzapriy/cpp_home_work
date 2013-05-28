#pragma once
#include <stdio.h>

class Student
{
public:
    char *family_name;
    char *name;
    char *patronymic;
	char *date;
    char *address;
    unsigned long int phone_number;
    char *email;
    unsigned long int icq;
	char * grup_name;

Student();
Student(char *family_name, char *name, char *patronymic, char *date, char *address, unsigned long int phone_number, char *email, unsigned long int icq, char *grup_name);
Student(const Student& aStudent);
~Student();
	void set_family(char*);
    void set_name(char*);
    void set_patronymic(char*);
    void set_date(char*);
    void set_address(char*);
    void set_phone_number(unsigned long int);
    void set_email(char*);
    void set_icq(unsigned long int);
	void set_grup_name(char*);

    char* get_family();
    char*  get_name();
    char*  get_patronymic();
    char* get_date();
    char*  get_address();
    unsigned long int get_phone_number();
    char*  get_email();
    unsigned long int get_icq();
	char* get_grup_name();

    void show();

    bool operator == (Student& aSudiozi);
    
    bool operator != (Student& aSudiozi);

    bool operator < (Student& aSudiozi);
    
    bool operator > (Student& aSudiozi);

    void write(FILE* aFile);

	void read(FILE* aFile);
};