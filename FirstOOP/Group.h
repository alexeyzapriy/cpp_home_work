#pragma once
class Student;
class Group
{
    int mSize;
    Student** mGroup;
public:
    Group();
    ~Group();

    void add_student(Student* student);
    void sort();
    void show();

    void write(FILE* aFile);

    bool read(FILE* aFile);
};