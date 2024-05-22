#include<iostream>
using namespace std;

int main(){

    float weight;
    float height;
    cout<<"Enter the Weight(Kg): ";
    cin>>weight;
    cout<<"Enter the Height(M): ";
    cin>>height;

    float bmi= weight / (height* height);

    if(bmi<18.5){
        cout<<"You are UnderWeight"<<endl;
    }else{
        if(bmi>25){
            cout<<"You are OverWeight"<<endl;
        }else{
            cout<<"You are Normal Weight"<<endl;
        }


    }

    cout<<"BMI:"<<bmi;

    system("pause>0");

    return 0;





}