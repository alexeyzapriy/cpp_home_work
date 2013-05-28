#include <iostream>
#include "Group.h"
#include "Student.h"
using std::cout;
using std::endl;

Group::Group()
{
    mSize = 0;
	mGroup = NULL;
}

Group::~Group()
{
	for(int i =0; i<mSize; i++)
	{
		delete mGroup[i];
	}
    delete [] mGroup;
}

void Group::add_student(Student* student)
{
    Student** newArray;
    newArray = new Student* [mSize + 1];
    for(int i=0; i < mSize; i++){
        newArray[i] = mGroup[i];    
    }
    newArray[mSize] = student;
    if (mSize > 0){
        delete [] mGroup;
    }
    mGroup = newArray;
    mSize++;
}

void Group::sort()
{
    int i, j;
    Student *temp;
    for(i=1;i<mSize;i++){  // цикл проходов, i - номер прохода
        temp = mGroup[i]; // временное хранение

        // поиск места элемента в готовой последовательности 
        for (j=i-1; j>=0 && *mGroup[j] > *temp; j--)
            mGroup[j+1]=mGroup[j];  	// сдвигаем элемент вправо
        mGroup[j+1] = temp; // место найдено, вставить элемент
    }
}

void Group::show()
{
    for(int i=0;i<mSize;i++) mGroup[i]->show();
}

void Group::write()
{
	 FILE* file = fopen ("myfile.bin" , "wb");
	if(file==NULL){
		cout<<"Error\n";
		return;
	}
	fwrite(&mSize,sizeof(int),1,file);
			for(int i=0;i<mSize;i++)
				mGroup[i]->write(file);
    
	fclose(file);
}

void Group::read()
{
	 FILE* file = fopen ("myfile.bin" , "rb");
	if(file==NULL){
		cout<<"Error\n";
		return;
	}
	Group* fake_mass=new Group;
//	mGroup=fake_mass;
	for(int i=0;i<mSize;i++)
				mGroup[i]->read(file);
		
			
    
	fclose(file);
    
}