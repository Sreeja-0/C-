#include<iostream>
using namespace std;
int main()
    {
        /*program for checking the eligibility for a job using nested if statements
        where,
        1. if age < 18, print not eligible.
        2. if age >= 18 and age <=54, print eligible for job.
        3. if age >=55 and age <=57, print eligible for job, but retirement soon.
        4. if age >57, print retirement time. */s
        int age;
        cout<<"enter your age: ";
        cin>>age;
        if(age<18)
        {
            cout<<"Not eligible for job.";
        }
        else if(age>=18 && age<=54)
        {
            cout<<"Eligible for job.";
            if(age>=55 && age<=57)
            {
                cout<<"Eligible for job, but retirement soon.";
            }
        }
        else
            {
                cout<<"Retirement time.";
            }
        return 0;
    }

