#include<iostream>
using namespace std;
#include<string.h>
int main(int argc, char **argv)
{
    // string str1 = "a2";
    // string str3 = "012";
    // string &str2 = str1;
    // str2 = str3;
    // char* str4 = "c121231212312312312";
    // cout<< sizeof(str2)<<endl;
    // cout<< sizeof(str4)<<endl;

    int a =10;
    int c = 8;
    int* p = &c;
    // 指针指向地址
    cout<<"a: "<< a<<endl;
    cout<<"p address: "<<p<<endl;
    cout<<"p value: "<<*p<<endl;
    c = 100;
    cout<<"p address: "<<p<<endl;
    cout<<"p value: "<<*p<<endl;

    
    a = *p;
    c = 10;
    cout<<"a: "<< a<<endl;
    cout<<"a: "<< *(&a)<<endl;
    cout<<"p address: "<<p<<endl;

    //引用
    int &q = a;
    cout<<"a address: "<< &a<<endl;
    cout<<"q address: "<< &q<<endl;
    cout<<"p address: "<<p<<endl;
    cout<<"p address: "<<&p<<endl;

    // 指针的引用
    int* &b = p;
    cout<<"b address: "<<b<<endl;
    cout<<"b value: "<<*b<<endl;

    //数组
    int array[5] = {0,0,0,0,10};
    cout<<"address of head pointer: "<<&array<<endl;
    cout<<"address of head pointer: "<<array<<endl;

    // 数组的引用

    int(&g)[5] = array;
    cout<<"array citation: "<<&g<<endl;
    int (*g_p)[5] = &array;
    cout<<"array pointer: "<< g_p[0]<<endl;

    //引用的数组
    // int& d[5] = array; // error


    // // int* const
    // int* const s = &a;
    // int*& p1 = s;   //error
    // int* const& p2 = s;
    // const int*& p3 = s;//error
    // const int* const& p4 = s;

    // // const int*
    // const int* t = &a;
    // t = b;
    // *t = 10;  // const int  //error
    // int*& q1 = t; //error
    // const int*& q2 = t;
    // int* const& q3 = t; //error
    // const int* const& q4 = t;

    // int array2D [3][2] = {1,2, 2,3, 4,6};

    // cout<<array2D[1][1]<<endl;

    // int **x = new int*[3];
    
    int* data_ptr = new int[3];
    cout<<(&data_ptr)<<endl;
    cout<<data_ptr<<endl;
    cout<<*data_ptr<<endl;
    cout<<(data_ptr[0])<<endl;
    cout<<&(data_ptr[0])<<endl;
    cout<<&(data_ptr[1])<<endl;
    delete []data_ptr;
    cout<<"======================="<<endl;
    int data_ptr1[3] = {1,2,3};
    cout<<*data_ptr1<<endl;
    cout<<(&data_ptr1)<<endl;
    cout<<data_ptr1<<endl;
    cout<<(data_ptr1[0])<<endl;
    cout<<&(data_ptr1[0])<<endl;
    cout<<&(data_ptr1[1])<<endl;

    cout<<endl;
    cout<<"======================="<<endl;

    char d[5] = "ascx";
    cout<<d<<endl;
    cout<<d[1]<<endl;
    cout<<&d<<endl;
    cout<<sizeof(d)/sizeof(d[0])<<endl;


    char* d1[5] = {"12", "avs", "1231245", "zw2", "zdfg4"};
    cout<<d1<<endl;
    cout<<d1[1]<<endl;
    cout<<&d1<<endl;
    cout<<sizeof(d1)/sizeof(d1[0])<<endl;

    // 
    int i[5];
    int *i1 = new int[5];
    cout<<"size of i: " << sizeof(i)<<endl;
    cout<<"i: "<<i<<endl;
    cout<<"&i: "<<&i<<endl;
    cout<<"i[0]: "<<i[2]<<endl;
    cout<<"size of i1: " << sizeof(*i1)<<endl;
    cout<<"i1: "<<i1<<endl;
    cout<<"&i1: "<<&i1<<endl;
    cout<<"&i1[0]: "<<&i1[0]<<endl;
    cout<<"&i1[1]: "<<&i1[1]<<endl;
    cout<<"i1[0]: "<<i1[2]<<endl;
    // int(* i)[5] = {1,2,3,4,5};
    return 0;
}