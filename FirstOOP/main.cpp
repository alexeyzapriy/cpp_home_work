#include "Student.h"
#include "Group.h"
#include <iostream>
#include <stdio.h> 
#include <conio.h>
using std::cout;
using std::cin;
using std::endl;

void main()
{
	Student I("Zapriy","Roman","Igorevich", "9_May_1983" ,"pr_Moskovskiy_138_1",662156437,"zapriy.05@mail.ru",848743658, "21PR31"); 
    cout<<" example \n\n";
    I.show();

    cout<<endl;

    Student temp1("Zapriy","Roman","Igorevich", "9_May_1983" ,"pr_Moskovskiy_138_1",662156437,"zapriy.05@mail.ru",848743658, "21PR31");

    I==temp1;
    I!=temp1;

    Student Boroda("Boroda","Panteleymon","Nikodimovich","1_May_1999", "ul_Gagarina_67_2",834587364,"jdsvfu@mail.ru", 78465879, "21PR31");

    temp1==Boroda;
    temp1!=Boroda;

    I>Boroda;
    I<Boroda;

    Group* group = new Group;
	group->add_student(new Student ("Zapriy","Roman","Igorevich", "9_May_1983" ,"pr_Moskovskiy_138_1",662156437,"zapriy.05@mail.ru",848743658, "21PR31"));
    group->add_student(new Student ("Boroda","Panteleymon","Nikodimovich","1_May_1999", "ul_Gagarina_67_2",834587364,"jdsvfu@mail.ru", 78465879, "21PR31"));
    group->add_student(new Student ("Zapriy","Roman","Igorevich", "9_May_1983" ,"pr_Moskovskiy_138_1",662156437,"zapriy.05@mail.ru",848743658, "21PR31"));
    group->show();
    group->sort();
    cout<<"?????????????????????????????????????????????????????????????????????????\n";
    group->show();

   
    group->write();
	
	delete group;
	cout<<"?????????????????????????????????????????????????????????????????????????\n";
	/*Group* group2 = new Group[];

	group2->read();
	group2->show();
*/
}