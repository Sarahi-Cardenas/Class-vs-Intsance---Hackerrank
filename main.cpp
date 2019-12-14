//
//  main.cpp
//  Class vs Instance
//
//  Created by Sarahi Cardenas Trejo on 11/16/19.
//  Copyright © 2019 Sarahi Cardenas Trejo. All rights reserved.
//
#include <iostream>
using namespace std;

class Person{
public:
    int age;
    Person(int initialAge);
    void amIOld();
    void yearPasses();
};

Person::Person(int initialAge){
    if (initialAge>0){
        age=initialAge;
    }else{
        age = 0;
        cout << "Age is not valid, setting age to 0." << endl;
    }
}

void Person::amIOld(){
    if (age<13){
        cout <<"You are young."<< endl;
    }else if(age>=13 && age<18){
        cout <<"You are a teenager."<<endl;
    }else{
        cout <<"You are old."<<endl;
    }
    
    }

void Person::yearPasses(){
    // Increment the age of the person in here
    age = age + 1;
}

int main(){
    int t;
    int age;
    cin >> t;
    for(int i=0; i < t; i++) {
        cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
            p.yearPasses();
        }
        p.amIOld();
        
        cout << '\n';
    }
}
