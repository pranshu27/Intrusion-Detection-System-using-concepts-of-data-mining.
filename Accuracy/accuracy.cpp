#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{   
    int ctr=0;
    double acc;
    char str[10],str1[10];
    ifstream fin,fin1;
    fin.open("predicted.txt");
    fin1.open("test_new.txt");

 

    while(!fin.eof())
    {
        fin >> str;
        fin1 >> str1;
        cout<<str<<" "<<str1<<endl;
        if(strcmp(str,str1)==0) ctr++;
        
    }
    cout<<endl;
    fin.close();
    fin1.close();
    acc =((double)ctr/22544)*100;
    cout<<"Required Accuracy "<<acc<<"%"<<endl;
    

}