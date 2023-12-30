#include<iostream>
using namespace std;
int main(){
    // mading of the grade system for the student 
    //AA-10
    //AB-9
    //BB-8
    //BC-7
    //CC-6
    //CD-5
    //POOR-4
    //FAIL<4
    int n; cin>>n;
    int marks = (n<4)? 3 : n;
    while(marks>10) marks = marks/10;
    switch(marks){
        case 3 : cout<<"FAIL";
                break;

        case 4 : cout<<"POOR";
                break;
        
        case 5 : cout<<"CD";
                break;
        
        case 6 : cout<<"CC";
                break;
        
        case 7 : cout<<"BC";
                break;

        case 8 : cout<<"BB";
                break;

        case 9 : cout<<"AB";
                break;
        
        case 10 : cout<<"AA";
                break;

        default : cout<<"Please input the mark between 1 and 10";
    }
}