//
//  main.cpp
//  C++课堂上机
//
//  Created by 萨缪 on 2019/3/7.
//  Copyright © 2019年 萨缪. All rights reserved.
//


#include <iostream>
using namespace std;
class Animal{
public:
    int age;
    int getAge();
    Animal(int a);
};

class Dog : public Animal
{
public:
    string color;
    Dog(int ag, string co);
    void showInfor();
};

void Dog::showInfor()
{
    cout<<"age:"<<getAge()<<endl;
    cout<<"color:"<<color<<endl;
}

Dog::Dog(int ag, string co):Animal(ag)
{
    age = ag;
    color = co;
}

Animal::Animal(int a)
{
    age = a;
}

int Animal::getAge()
{
    return age;
}


/* 请在这里填写答案 */

int main(){
    Animal ani(5);
    cout<<"age of ani:"<<ani.getAge()<<endl;
    Dog dog(5,"black");
    cout<<"infor of dog:"<<endl;
    dog.showInfor();
}


//#include <iostream>
//using namespace std;
//const double PI=3.1415926;
//class Circle{
//protected:
//    double radius;
//public:
//    Circle(double r){
//        radius=r;
//    }
//    double getArea(){
//        return PI*radius*radius;
//    }
//};
//// 你提交的代码将嵌入在这里
//class Cylinder :public Circle
//{
//    double height;
//public:
//
//    Cylinder(double r, double h);
//};
//Cylinder::Cylinder(double r, double h):Circle(r)
//{
//    height = h;
//}
//int main()
//{
//    double r,h;
//    cin>>r>>h;
//    Cylinder Cy1(r,h) ;
//    cout<<Cy1.getArea()<<endl;
//    return 0;
//}



//#include <iostream>
//#include <cmath>
//#define PI 3.1415926
//using namespace std;
//
//class shape {// 抽象类
//public:
//    double getArea(){
//        return -1;
//
//    };// 求面积
//    double getPerimeter(){
//        return -1;
//
//    }; // 求周长
//};
//class Circle
//{
//private:
//    double r;
//public:
//    double getArea(){
//        return PI * r * r;
//    }
//    double getPerimeter(){
//        return 2 * PI * r;
//    }
//    Circle(double xr);
//};
//Circle::Circle(double xr)
//{
//    r = xr;
//}
////你提交的代码将嵌入到这里
//class RTriangle : public shape
//{
//private:
//    double x;
//    double y;
//public:
//    double getPerimeter() {
//        return x + y + sqrt(x * x + y * y);
//    }
//    double getArea() {
//        return x * y / 2;
//    }
//    RTriangle(double l,double h);
//};
//RTriangle::RTriangle(double l,double h)
//{
//    x = l;
//    y = h;
//}
//int main() {
//    double r;
//    cin>>r;
//    Circle c(r);
//    cout<<c.getArea()<<endl;
//    cout<<c.getPerimeter()<<endl;
//    return 0;
//}

//#include <iostream>
//#include <math.h>
//using namespace std;
//class Point
//{
//public:
//Point(double xi, double yi) {
//    X=xi;
//    Y=yi; }
//double GetX() {
//    return X;
//}
//double GetY() {
//    return Y;
//}
//
//friend double Distance( Point& a, Point& b);
//private:
//double X, Y;
//};
//double Distance( Point& a, Point& b)
//{
//    double dx=a.X-b.X;
//    double dy=a.Y-b.Y;
//    return sqrt(dx*dx+dy*dy);
//}
//int main()
//{
//    Point p1(3.0, 5.0), p2(4.0, 6.0);
//    double d=Distance(p1, p2);
//    cout<<"The distance is "<<d<<std::endl;
//    return 0;
//}


//#include <iostream>
//#include <string>
//using namespace std;
//class Circle
//{
//public:
//    Circle(float r) {
//        radius=r;
//        ++count;
//    }
//    ~Circle() {
//        --count;
//    }
//    static int num() {
//        return count;
//    } //静态成员函数
//private:
//    float radius;
//    static int count; //静态数据成员
//};
//int main()
//{
//    Circle cir1(1.0);
//    cout<<Circle::num()<<endl;
////    Circle cir2(2);
////    cout<<cir2.num()<<endl;
////    Circle cir3(3);
////    cout<<cir3.num()<<endl;
//    return 0;
//}


//#include <iostream>
//#include <string>
//using namespace std;
//class Student{
//public:
//    int year;
//    int score1;
//    int score2;
//    int score3;
//    int score4;
//    void setValue(int n);
//    void print();
//};
//
//void Student::setValue(int n)
//{
//    year = n;
//    score1 = n;
//    score2 = n;
//    score3 = n;
//    score4 = n;
//}
//
//void Student::print()
//{
//    cout<<"year:"<<year<<" score1:"<<score1<<" score2:"<<score2<<" score3:"<<score3<<" score4:"<<score4<<endl;
//}
//
//int main(){
//    for (int i = 0; i < 5; i++) {
//        if (i == 0 || i == 1) {
//            Student stu;
//            stu.setValue(i);
//            stu.print();
//        } else {
//            Student * stu = new Student;
//            stu->setValue(i);
//            cout<<stu->year<<stu->score1<<stu->score2<<stu->score3<<stu->score4<<endl;
//        }
//    }
//
//    return 0;
//}



//#include <iostream>
//#include <string>
//using namespace std;
//const int K=2;
//const int N=20;
//class Student{
//    string name;
//    Student *welcome[K];
//    Student *pair;
//public:
//    void init(string &name, Student *a, Student *b) {
//        this->name=name;
//        welcome[0]=a;
//        welcome[1]=b;
//        pair=NULL;
//    }
//    void printPair();
//    void addPair();
//};
//
///* 请在这里填写答案 */
//
//int main(){
//    Student male[N], female[N];
//    int m, f, i, j, a, b;
//    string name;
//    cin>>m;
//    for(i=0;i<m;i++){
//        cin>>name>>a>>b;
//        male[i].init(name, &female[a], &female[b]);
//    }
//    cin>>f;
//    for(i=0;i<f;i++){
//        cin>>name>>a>>b;
//        female[i].init(name, &male[a], &male[b]);
//    }
//    for(i=0;i<m;i++) male[i].addPair();
//    for(i=0;i<f;i++) female[i].addPair();
//    for(i=0;i<m;i++) male[i].printPair();
//    return 0;
//}
//
//


//#include <iostream>
//#include <string>
//using namespace std;
//class Score
//{
//
//    float computer;
//    float english;
//    float mathematics;
//public:
//    Score(float x1, float y1, float z1);
//    Score();
//    void print();
//    void modify(float x2, float y2, float z2);
//};
//class Student
//{
//private:
//    int number;
//    char *name;
//public:
//    Score score;
//    Student(int number1,char *name1,float c,float e,float m);
//    Student(int number1,char *name1);//构造函数的声明
//    void modify(float c,float e,float m);
//    ~Student(); //析构函数的声明
//    void print();
//};
//
//int main()
//{  int numberi;
//    char namei[15];
//    float c,e,m;
//
//    cout<<"Enter number:\n"; cin>>numberi;
//    cout<<"Enter name:\n"; cin>>namei;
//    cout<<"Enter score(computer,english,math):\n"; cin>>c>>e>>m;
//    Student stu1(numberi,namei,c,e,m); //创建对象stu1时执行了初始化
//
//    cout<<"Enter number:\n"; cin>>numberi;
//    cout<<"Enter name:\n"; cin>>namei;
//    Student stu2(numberi,namei);// 创建对象stu2时执行了初始化
//    stu2.score.modify(87,96,100); //对象stu2调用成员函数modify( )
//
//    stu1.print();  //对象stu1调用成员函数print( )
//    stu2.print();  //对象stu2调用成员函数print( )
//    return 0;
//}
//using namespace std;
////构造函数的定义
//Student::Student(int number1,char *name1,float c,float e,float m):score(c,e,m)
//{
//    number=number1;
//    name=new char[strlen(name1)+1]; //申请动态内存单元
//    strcpy(name,name1);
//}
//
//Student::Student(int number1,char *name1):score()
//{
//    number=number1;
//    name=new char[strlen(name1)+1]; //申请动态内存单元
//    strcpy(name,name1);
//}
////析构函数的定义
//Student::~Student()
//{
//    delete[] name;  //释放动态内存单元
//}
//void Student::print()
//{
//    cout<<"number: "<<number<<" name: "<<name<<endl;
//    cout<<" score: ";
//    score.print();
//}
//
//void Student::modify(float c,float e,float m)
//{
//    score.modify(c,e,m);
//}
//
//Score::Score(float x1,float y1, float z1)
//{
//    computer=x1;
//    english=y1;
//    mathematics=z1;
//}
//
//Score::Score()
//{
//    computer=0;
//    english=0;
//    mathematics=0;
//}
//
//void Score::print()
//{
//    cout<<"computer:"<<computer<<endl;
//    cout<<"english:"<<english<<endl;
//    cout<<"mathematics:"<<mathematics<<endl;
//}
//
//void Score::modify(float x2, float y2, float z2)
//{
//    computer=x2;
//    english=y2;
//    mathematics=z2;
//}
//


//#include <iostream>
//using namespace std;
//class Score{ //Score类定义
//public:
//    float computer;
//    float english;
//    float mathematics;
//    Score(float x1, float y1, float z1);
//    Score( );
//    void print( );
//    void modify(float x2, float y2, float z2);
//};
//
//Score::Score(float x1, float y1, float z1)
//{
//    computer = x1;
//    english = y1;
//    mathematics = z1;
//}
//
//void Score::modify(float x2, float y2, float z2)
//{
//    computer = x2;
//    english = y2;
//    mathematics = z2;
//}
//
//void Score::print()
//{
//    cout<<computer<<english<<mathematics<<'\n';
//}
//
//class Student
//{
//private:
//    int number;
//    char * name;
//    float score;
//    Score * realScore;
//public:
//    Student(int number1, char * name1, float score1, Score * allScore1);//构造函数声明
//    ~Student();//析构函数的声明
//    void modify(float score1, Score * allScore1)
//    {
//        realScore->computer = allScore1->computer;
//        realScore->english = allScore1->english;
//        realScore->mathematics = allScore1->mathematics;
//        score = score1;
//    }
//    void print();
//};
//
//Student::Student(int number1, char * name1, float score1, Score * allScore1)
//{
//    number = number1;
//    name = name1;
//    score = score1;
//    realScore->computer = allScore1->computer;
//    realScore->english = allScore1->english;
//    realScore->mathematics = allScore1->mathematics;
//}
//
//int main()
//{
//    Score * xScore = new Score(1,2,3);
//    const char * p = "asd";
////    Student stu(4,*p,5,xScore);
//
////    Student stu()
//}

//class Rectangle {
//public:
//    double length,width;
//    double caculateS();
//    void setXY(double l, double y);
//
//};
//
//void Rectangle::setXY(double l, double y)
//{
//    length = l;
//    width = y;
//}
//
//double Rectangle::caculateS()
//{
//    return length * width;
//}
//
//#include <iostream>
//using namespace std;
//int main()
//{
//    Rectangle rect;
//    rect.setXY(1, 2);
//    cout<<rect.caculateS();
//    return 0;
//}

//class Date {
//    int d, m, y;
//public:
//    int day( ) const
//    {
//        return d;
//
//    }
//    int month( ) const
//    {
//        return m;
//
//    }
//    int year( ) const;
//    // ...
//};
//// const是函数原型的一个组成部分，因此在函数定义部分也要带const关键字。
//inline int Date::year( ) const
//{
////    y++;
//    return y;
////    return y++;
//}




//class Student
//{
//private:
//    int number;
//    char * name;
//    float score;
//public:
//    Student(int number1, char * name1, float score1);//构造函数声明
//    ~Student();//析构函数的声明
//    void modify(float score1)
//    {
//        score = score1;
//    }
//    void print();
//};
//
//#include <iostream>
//#include <string>
//using namespace std;
////构造函数的定义
//Student::Student(int number1, char * name1, float score1)
//{
//    number = number1;
//    name = new char[strlen(name1)*1];//申请动态内存单元
//    strcpy(name, name1);
//    score = score1;
//}
////析构函数的定义
//Student::~Student()
//{
//    delete [] name;//释放动态内存单元
//}
//
//void Student::print()
//{
//    cout<<"number: "<<number<<"name: "<<name<<" score: "<<score<<'\n';
//}
//
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//    int number1;
//    char name1[15];
//    float score1;
//    cout<<"Enter number:\n"; cin>>number1;
//    cout<<"Enter name:\n"; cin>>name1;
//    cout<<"Enter score:\n"; cin>>score1;
//    Student stu1(number1, name1, score1);//创建对象stu1时执行初始化
//
//    cout<<"Enter number:\n"; cin>>number1;
//    cout<<"Enter name:\n"; cin>>name1;
//    Student stu2(number1,name1,score1);//创建对象stu2时执行初始化
//    stu2.modify(87);//对象stu2调用成员函数modify()
//
//    stu1.print(); //对象stu1调用成员函数print()
//    stu2.print();
//    return 0;
//}

//#include <iostream>
//#include <iomanip>
//#include <cmath>
//using namespace std;
//
////你的代码将被嵌在这里
//class Point{
//public:
//    double x,y;
//    void setX(double x1);
//    void setY(double y1);
//    double getX();
//    double getY();
//};
//
//void Point::setX(double x1)
//{
//    x = x1;
//}
//
//void Point::setY(double y1)
//{
//    y = y1;
//}
//
//double Point::getX()
//{
//    return x;
//}
//
//double Point::getY()
//{
//    return y;
//}
//
//int main()
//{
//    Point p1, p2;
//    double x1, y1, x2, y2;
//    cin >> x1 >> y1 >> x2 >> y2;
//    p1.setX(x1);
//    p1.setY(y1);
//    p2.setX(x2);
//    p2.setY(y2);
//    double x = p1.getX() - p2.getX();
//    double y = p1.getY() - p2.getY();
//    double len = sqrt(x * x + y * y);
//    cout << fixed << setprecision(2) << len << endl;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//class counter{
//    int value;
//public:
//    counter(int number);
//    void increment(); //给原值加1
//    void decrement(); //给原值减1
//    int getvalue();   //取得计数器的值
//    void print();     //显示计数器的值
//};
//
//counter::counter(int number)
//{
//    value = number;
//}
//
//void counter::increment()
//{
//    value = value + 1;
//}
//
//void counter::decrement()
//{
//    value = value - 1;
//}
//
//int counter::getvalue()
//{
//    return value;
//}
//
//void counter::print()
//{
//    cout<<value;
//}
//
//int main()
//{
//    counter count(2);
//    count.increment();
//    cout<<count.getvalue();
//    count.decrement();
//    cout<<count.getvalue();
//    count.print();
//    return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//class Coach{
//    string name;
//    int winRate;
//public:
//    Coach(string n, int wr){
//        name=n; winRate=wr;
//    }
//    void show();
//};
//class Club{
//    string name;
//    Coach c;
//    int year;
//public:
//    Club(string n1, int y, string n2, int wr);
//    void show();
//};
//int main(){
//    string n1, n2;
//    int year, winRate;
//    cin>>n1>>year>>n2>>winRate;
//    Club c(n1,year, n2, winRate);
//    c.show();
//    return 0;
//}
//
//void Coach::show()
//{
//    cout<<name<<winRate<<'\n';
//}

/* 请在这里填写答案 */


//#include <iostream>
//#include <string>
//using namespace std;
//class Student{
//    int rank;
//    string name;
//public:
//    int getRank(){
//        return rank;
//    }
//    Student(string name, int rank)
//    :name(name), rank(rank)
//    {
//
//    }
//    ~Student()
//    {
//        cout<<name<<endl;
//    }
//};
//int main(){
//    int rank, count=0;
//    const int SIZE=100;
//    Student *pS[SIZE];
//    string name;
//    cin>>rank;
//    while(count<SIZE && rank>0){
//        cin>>name;
//        pS[count++] = new Student(name, rank);
//        cin>>rank;
//    }
//
//    /* 请在这里填写答案 */
//    for (int i = 0; i < count; i++) {
//        for (int j = 1; j < count; j++) {
//            int x1 = pS[i]->getRank();
//            int y1 = pS[j]->getRank();
//            if (x1 > y1) {
//                Student * temp = NULL;
//                temp = pS[i];
//                pS[i] = pS[j];
//                pS[j] = temp;
//            }
//        }
//    }
//    return 0;
//}



//#include <iostream>
//using namespace std;
////你提交的代码将嵌入到这里
//class Rectangle {
//public:
//    double width = 1;
//    double height = 1;
//    Rectangle(double w, double h);
//    double getArea();
//    double getPerimeter();
//};
//
//Rectangle::Rectangle(double w, double h)
//{
//    width = w;
//    height = h;
//}
//
//double Rectangle::getArea()
//{
//    return width * height;
//}
//
//double Rectangle::getPerimeter()
//{
//    return width * 2 + height * 2;
//}
//
//int main()
//{
//    double m,n;
//    cin>>m;
//    cin>>n;
//    Rectangle a(m,n);
//    cout<<a.getArea()<<endl;
//    cout<<a.getPerimeter()<<endl;
//    return 0;
//}



//#include <iostream>
//using namespace std;
//// 你提交的代码将被嵌入到这里
//
//class Triangle {
//public:
//    double width;
//    double height;
//    void t(double w, double h);
//    double getArea();
//    Triangle(double w, double h);
//};
//
//void Triangle::t(double w, double h)
//{
//    width = w;
//    height = h;
//}
//
//double Triangle::getArea()
//{
//    return width * height / 2;
//}
//
//Triangle::Triangle(double w, double h)
//{
//    width = w;
//    height = h;
//}
//
//int main( )
//{
//    double w,h;
//    cin>>w>>h;
//    Triangle t(w,h);
//    cout<<"The area of the Triangle is: "<<t.getArea( )<<endl;
//}


//#include"iostream"
//using namespace std;
//
//class Point
//{
//public:
//    double x1,y1;
//    void setX(double x) {
//        x1 = x;
//    }
//    void setY(double y) {
//        y1 = y;
//    }
//    double getX() {
//        return x1;
//    }
//    double getY() {
//        return y1;
//    }
//
////    double width, height;
////    void set(double m, double n) {
////        width = m;
////        height = n;
////    }
////    double getArea() {
////        return width * height;
////    }
////    double getPerimeter() {
////        return width * 2 + height * 2;
////    }
//};
//
//int main()
//{
//
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//class Stock {
//public:
//    void set(char s[], char n[]);
//    double changePercent();
//    double previousClosingPrice;
//    double currentPrice;
//    char * symbol;
//    char * name;
//};
//
//void Stock::set(char s[], char n[])
//{
//    symbol = s;
//    name = n;
////    strcpy(symbol, s);
////    strcpy(name, n);
//}
//
//double Stock::changePercent()
//{
//    return (currentPrice-previousClosingPrice) / previousClosingPrice;
//}
//
//int main( ) {
//    char s1[10],n1[20];
//    cin>>s1>>n1;
//    Stock stock;
//    stock.set(s1, n1);
//    // 输入前一日收盘价
//    cin>>stock.previousClosingPrice;
//
//    // 输入当前成交价
//    cin>>stock.currentPrice;
//
//    // 显示股票信息
//    cout<<stock.name<<" price changed: " <<(stock.changePercent() * 100)<<"%";
//    return 0;
//}

