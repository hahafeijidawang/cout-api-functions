
/*
cout api 函数

cout.flush()
cout.put();
cout.write()
cout.width()
cout.fill()
cout.setf(标记)
--------------------------------//他们的功能是一致相同的。
manipulator(操作符、控制符)

flush

endl

oct

dec

hex

setbase

setw

setfill

setprecision

*/


#include<iomanip>

#include <iostream>
#include "string.h"

using namespace std;

int main(){

    //使用类成员函数

    cout<<"<start>";

    cout.width(30);//设置宽度。

    cout.fill('*');

    cout.setf(ios::showbase);//#include<iomanip>显示进制

   cout.setf(ios::internal);//设置 填充啊效果放中间。

    cout<<hex<<123<<"<End>\n";


    cout<<endl<<endl;

    //使用控制符

    cout<<"<Start>"

           <<setw(30)
           <<setfill('*')
           <<setiosflags(ios::showbase)//基数
           <<setiosflags(ios::internal)
           <<hex
           <<123
           <<"<End>\n";












   return 0;
}





int main11()
{

    cout<<"helloc"<<endl;
    cout.put('y').put('z').put('m');

    char *p = "hello itcast";
    cout.write(p,strlen(p))<<endl;
    cout.write(p,strlen(p)-4)<<endl;
    cout.write(p,strlen(p)+4)<<endl;


    cout << "Hello World!" << endl;
    return 0;


}

