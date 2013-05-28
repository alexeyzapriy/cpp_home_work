#include <iostream>
#include "Group.h"
#include "Student.h"
using std::cout;
using std::endl;

Group::Group()
{
    mSize = 0;
}

Group::~Group()
{
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
        for (j=i-1; j>=0 && mGroup[j] > temp; j--)
            mGroup[j+1]=mGroup[j];  	// сдвигаем элемент вправо
        mGroup[j+1] = temp; // место найдено, вставить элемент
    }
}

void Group::show()
{
    for(int i=0;i<mSize;i++) mGroup[i]->show();
}

void Group::write(FILE* aFile)
{
    for(int i=0;i<mSize;i++) mGroup[i]->write(aFile);
}

bool Group::read(FILE* aFile)
{
    bool res = true;
    for(int i=0;i<mSize;i++){
        if (!mGroup[i]->read(aFile)){
            res = false;
        }
    }
    return res;
}