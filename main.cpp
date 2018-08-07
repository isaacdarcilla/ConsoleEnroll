#include <iostream>
#include <stdlib.h>

using namespace std;

string name;
/**
 * \KINDER
 *
 */

int kinder(int pay=0, int partial=0){
    string con; int x, y;
    cout<<"  ----------------------\n"<<endl;
    cout<<"  Subjects\n"<<endl;
    cout<<"  Mother Tongue - 3 Units"<<endl;
    cout<<"  English       - 3 Units"<<endl;
    cout<<"  Math          - 3 Units"<<endl;
    cout<<"  -----------------------"<<endl;
    cout<<"  Total           9 Units\n"<<endl;
    cout<<"  Expenses\n"<<endl;
    cout<<"  Tuition          P1,800"<<endl;
    cout<<"  Miscellaneous    P1,800"<<endl;
    cout<<"  -----------------------"<<endl;
    cout<<"  Total            P3,600\n"<<endl;
    cout<<"  Downpayment atleast 30%\n"<<endl;
    cout<<"Do you want to pay in full [Y/N]? ";
    cin>>con;
    if(con=="N"){
        cout<<"Enter amount of partial payment: ";
        cin>>pay;
        if(cin.fail()){cout<<"\nError: INPUT NOT VALID."<<endl; return 0;}
        if(pay<1080 || pay>3600){
            cout<<"\nError: PAYMENT EXCEEDED OR SUFFICIENT.\n";
            system("cls");
            cout<<"  ----------------------"<<endl;
            cout<<"          KINDER\n";
            return kinder();
        }else{
            cout<<"\n  Partial payment    : P"<<pay<<endl;
            x=3600-pay;
            y=x/4;
            cout<<"  Balance            : P"<<x<<endl;
            cout<<"  Payment Per Quarter: P"<<y<<endl;
            cout<<"  Paid by            : "<<name<<endl;
        }
    }else if(con=="Y"){
        cout<<"\n  Full payment      : P3,600"<<endl;
        cout<<"  Balance           : P0"<<endl;
        cout<<"  Paid by           : "<<name<<endl;
    }else{
        system("cls");cout<<"  ----------------------"<<endl;cout<<"          KINDER\n";
        return kinder();
    }
}
/**
 * \GRADE 1
 *
 */

int grade_one(int pay=0, int partial=0){
    string con; int x, y;
    cout<<"  -----------------------\n"<<endl;
    cout<<"  Subjects\n"<<endl;
    cout<<"  English       - 3 Units"<<endl;
    cout<<"  Filipino      - 3 Units"<<endl;
    cout<<"  Math          - 3 Units"<<endl;
    cout<<"  Science       - 3 Units"<<endl;
    cout<<"  -----------------------"<<endl;
    cout<<"  Total          12 Units\n"<<endl;
    cout<<"  Expenses\n"<<endl;
    cout<<"  Tuition          P3,000"<<endl;
    cout<<"  Miscellaneous    P1,800"<<endl;
    cout<<"  -----------------------"<<endl;
    cout<<"  Total            P4,800\n"<<endl;
    cout<<"  Downpayment atleast 30%\n"<<endl;
    cout<<"Do you want to pay in full [Y/N]? ";
    cin>>con;
    if(con=="N"){
        cout<<"Enter amount of partial payment: ";
        cin>>pay;
        if(cin.fail()){cout<<"\nError: INPUT NOT VALID."<<endl; return 0;}
        if(pay<1440 || pay>4800){
            cout<<"\nError: PAYMENT EXCEEDED OR SUFFICIENT.\n";
            system("cls");
            cout<<"  ----------------------"<<endl;
            cout<<"         GRADE 1\n";
            return grade_one();
        }else{
            cout<<"\n  Partial payment    : P"<<pay<<endl;
            x=4800-pay;
            y=x/4;
            cout<<"  Balance            : P"<<x<<endl;
            cout<<"  Payment Per Quarter: P"<<y<<endl;
            cout<<"  Paid by            : "<<name<<endl;
        }
    }else if(con=="Y"){
        cout<<"\n  Full payment      : P4,800"<<endl;
        cout<<"  Balance           : P0"<<endl;
        cout<<"  Paid by           : "<<name<<endl;
    }else{
        system("cls");
        cout<<"  -----------------------"<<endl;
        cout<<"         GRADE 1\n";
        return grade_one();
    }
}
/**
 * \GRADE 2
 *
 */
int grade_two(int pay=0, int partial=0){
    string con; int x, y;
    cout<<"  -----------------------\n"<<endl;
    cout<<"  Subjects\n"<<endl;
    cout<<"  English       - 3 Units"<<endl;
    cout<<"  Filipino      - 3 Units"<<endl;
    cout<<"  Math          - 3 Units"<<endl;
    cout<<"  Science       - 3 Units"<<endl;
    cout<<"  Makabayan     - 3 Units"<<endl;
    cout<<"  -----------------------"<<endl;
    cout<<"  Total          15 Units\n"<<endl;
    cout<<"  Expenses\n"<<endl;
    cout<<"  Tuition          P4,500"<<endl;
    cout<<"  Miscellaneous    P1,800"<<endl;
    cout<<"  -----------------------"<<endl;
    cout<<"  Total            P6,300\n"<<endl;
    cout<<"  Downpayment atleast 30%\n"<<endl;
    cout<<"Do you want to pay in full [Y/N]? ";
    cin>>con;
    if(con=="N"){
        cout<<"Enter amount of partial payment: ";
        cin>>pay;
        if(cin.fail()){cout<<"\nError: INPUT NOT VALID."<<endl; return 0;}
        if(pay<1890 || pay>6300){
            cout<<"\nError: PAYMENT EXCEEDED OR SUFFICIENT.\n";
            system("cls");
            cout<<"  -----------------------"<<endl;
            cout<<"         GRADE 2\n";
            return grade_two();
        }else{
            cout<<"\n  Partial payment    : P"<<pay<<endl;
            x=6300-pay;
            y=x/4;
            cout<<"  Balance            : P"<<x<<endl;
            cout<<"  Payment Per Quarter: P"<<y<<endl;
            cout<<"  Paid by            : "<<name<<endl;
        }
    }else if(con=="Y"){
        cout<<"\n  Full payment      : P6,300"<<endl;
        cout<<"  Balance           : P0"<<endl;
        cout<<"  Paid by           : "<<name<<endl;
    }else{
        system("cls");
        cout<<"  -----------------------"<<endl;
        cout<<"         GRADE 2\n";
        return grade_two();}
}
/**
 * \GRADE 3 [350]
 *
 */
int grade_three(int pay=0, int partial=0){
    string con; int x, y;
    cout<<"  -----------------------\n"<<endl;
    cout<<"  Subjects\n"<<endl;
    cout<<"  English       - 3 Units"<<endl;
    cout<<"  Filipino      - 3 Units"<<endl;
    cout<<"  Math          - 3 Units"<<endl;
    cout<<"  Science       - 3 Units"<<endl;
    cout<<"  Makabayan     - 3 Units"<<endl;
    cout<<"  PE            - 3 Units"<<endl;
    cout<<"  -----------------------"<<endl;
    cout<<"  Total          18 Units\n"<<endl;
    cout<<"  Expenses\n"<<endl;
    cout<<"  Tuition          P6,300"<<endl;
    cout<<"  Miscellaneous    P1,800"<<endl;
    cout<<"  -----------------------"<<endl;
    cout<<"  Total            P8,100\n"<<endl;
    cout<<"  Downpayment atleast 30%\n"<<endl;
    cout<<"Do you want to pay in full [Y/N]? ";
    cin>>con;
    if(con=="N"){
        cout<<"Enter amount of partial payment: ";
        cin>>pay;
        if(cin.fail()){cout<<"\nError: INPUT NOT VALID."<<endl; return 0;}
        if(pay<2430 || pay>8100){
            cout<<"\nError: PAYMENT EXCEEDED OR SUFFICIENT.\n";
            system("cls");
            cout<<"  -----------------------"<<endl;
            cout<<"         GRADE 3\n";
            return grade_three();
        }else{
            cout<<"\n  Partial payment    : P"<<pay<<endl;
            x=8100-pay;
            y=x/4;
            cout<<"  Balance            : P"<<x<<endl;
            cout<<"  Payment Per Quarter: P"<<y<<endl;
            cout<<"  Paid by            : "<<name<<endl;
        }
    }else if(con=="Y"){
        cout<<"\n  Full payment      : P8,100"<<endl;
        cout<<"  Balance           : P0"<<endl;
        cout<<"  Paid by           : "<<name<<endl;
    }else{
        system("cls");
        cout<<"  -----------------------"<<endl;
        cout<<"         GRADE 3\n";
        return grade_three();}
}
/**
 * \GRADE 4 [400]
 *
 */
int grade_four(int pay=0, int partial=0){
    string con; int x, y;
    cout<<"  -----------------------\n"<<endl;
    cout<<"  Subjects\n"<<endl;
    cout<<"  English       - 3 Units"<<endl;
    cout<<"  Filipino      - 3 Units"<<endl;
    cout<<"  Math          - 3 Units"<<endl;
    cout<<"  Science       - 3 Units"<<endl;
    cout<<"  Makabayan     - 3 Units"<<endl;
    cout<<"  PE            - 3 Units"<<endl;
    cout<<"  MAPEH         - 3 Units"<<endl;
    cout<<"  -----------------------"<<endl;
    cout<<"  Total          21 Units\n"<<endl;
    cout<<"  Expenses\n"<<endl;
    cout<<"  Tuition          P8,400"<<endl;
    cout<<"  Miscellaneous    P1,800"<<endl;
    cout<<"  -----------------------"<<endl;
    cout<<"  Total           P10,200\n"<<endl;
    cout<<"  Downpayment atleast 30%\n"<<endl;
    cout<<"Do you want to pay in full [Y/N]? ";
    cin>>con;
    if(con=="N"){
        cout<<"Enter amount of partial payment: ";
        cin>>pay;
        if(cin.fail()){cout<<"\nError: INPUT NOT VALID."<<endl; return 0;}
        if(pay<3060 || pay>10200){
            cout<<"\nError: PAYMENT EXCEEDED OR SUFFICIENT.\n";
            system("cls");
            cout<<"  -----------------------"<<endl;
            cout<<"         GRADE 4\n";
            return grade_four();
        }else{
            cout<<"\n  Partial payment    : P"<<pay<<endl;
            x=10200-pay;
            y=x/4;
            cout<<"  Balance            : P"<<x<<endl;
            cout<<"  Payment Per Quarter: P"<<y<<endl;
            cout<<"  Paid by            : "<<name<<endl;
        }
    }else if(con=="Y"){
        cout<<"\n  Full payment      : P10,200"<<endl;
        cout<<"  Balance           : P0"<<endl;
        cout<<"  Paid by           : "<<name<<endl;
    }else{
        system("cls");
        cout<<"  -----------------------"<<endl;
        cout<<"         GRADE 4\n";
        return grade_four();}
}
/**
 * \GRADE 5 [450]
 *
 */
int grade_five(int pay=0, int partial=0){
    string con; int x, y;
    cout<<"  -----------------------\n"<<endl;
    cout<<"  Subjects\n"<<endl;
    cout<<"  English       - 3 Units"<<endl;
    cout<<"  Filipino      - 3 Units"<<endl;
    cout<<"  Math          - 3 Units"<<endl;
    cout<<"  Science       - 3 Units"<<endl;
    cout<<"  Makabayan     - 3 Units"<<endl;
    cout<<"  PE            - 3 Units"<<endl;
    cout<<"  TLE           - 3 Units"<<endl;
    cout<<"  -----------------------"<<endl;
    cout<<"  Total          24 Units\n"<<endl;
    cout<<"  Expenses\n"<<endl;
    cout<<"  Tuition         P10,800"<<endl;
    cout<<"  Miscellaneous    P1,800"<<endl;
    cout<<"  -----------------------"<<endl;
    cout<<"  Total           P12,600\n"<<endl;
    cout<<"  Downpayment atleast 30%\n"<<endl;
    cout<<"Do you want to pay in full [Y/N]? ";
    cin>>con;
    if(con=="N"){
        cout<<"Enter amount of partial payment: ";
        cin>>pay;
        if(cin.fail()){cout<<"\nError: INPUT NOT VALID."<<endl; return 0;}
        if(pay<3780 || pay>12600){
            cout<<"\nError: PAYMENT EXCEEDED OR SUFFICIENT.\n";
            system("cls");
            cout<<"  -----------------------"<<endl;
            cout<<"         GRADE 5\n";
            return grade_five();
        }else{
            cout<<"\n  Partial payment    : P"<<pay<<endl;
            x=12600-pay;
            y=x/4;
            cout<<"  Balance            : P"<<x<<endl;
            cout<<"  Payment Per Quarter: P"<<y<<endl;
            cout<<"  Paid by            : "<<name<<endl;
        }
    }else if(con=="Y"){
        cout<<"\n  Full payment      : P12,600"<<endl;
        cout<<"  Balance           : P0"<<endl;
        cout<<"  Paid by           : "<<name<<endl;
    }else{
        system("cls");
        cout<<"  -----------------------"<<endl;
        cout<<"         GRADE 5\n";
        return grade_five();}
}
/**
 * \GRADE 6 [500]
 *
 */
int grade_six(int pay=0, int partial=0){
    string con; int x, y;
    cout<<"  -----------------------\n"<<endl;
    cout<<"  Subjects\n"<<endl;
    cout<<"  English       - 3 Units"<<endl;
    cout<<"  Filipino      - 3 Units"<<endl;
    cout<<"  Math          - 3 Units"<<endl;
    cout<<"  Science       - 3 Units"<<endl;
    cout<<"  Makabayan     - 3 Units"<<endl;
    cout<<"  PE            - 3 Units"<<endl;
    cout<<"  TLE           - 3 Units"<<endl;
    cout<<"  EPP           - 3 Units"<<endl;
    cout<<"  -----------------------"<<endl;
    cout<<"  Total          27 Units\n"<<endl;
    cout<<"  Expenses\n"<<endl;
    cout<<"  Tuition         P13,500"<<endl;
    cout<<"  Miscellaneous    P1,800"<<endl;
    cout<<"  -----------------------"<<endl;
    cout<<"  Total           P15,300\n"<<endl;
    cout<<"  Downpayment atleast 30%\n"<<endl;
    cout<<"Do you want to pay in full [Y/N]? ";
    cin>>con;
    if(con=="N"){
        cout<<"Enter amount of partial payment: ";
        cin>>pay;
        if(cin.fail()){cout<<"\nError: INPUT NOT VALID."<<endl; return 0;}
        if(pay<4590 || pay>15300){
            cout<<"\nError: PAYMENT EXCEEDED OR SUFFICIENT.\n";
            system("cls");
            cout<<"  -----------------------"<<endl;
            cout<<"         GRADE 6\n";
            return grade_six();
        }else{
            cout<<"\n  Partial payment    : P"<<pay<<endl;
            x=12600-pay;
            y=x/4;
            cout<<"  Balance            : P"<<x<<endl;
            cout<<"  Payment Per Quarter: P"<<y<<endl;
            cout<<"  Paid by            : "<<name<<endl;
        }
    }else if(con=="Y"){
        cout<<"\n  Full payment      : P15,300"<<endl;
        cout<<"  Balance           : P0"<<endl;
        cout<<"  Paid by           : "<<name<<endl;
    }else{
        system("cls");
        cout<<"  -----------------------"<<endl;
        cout<<"         GRADE 6\n";
        return grade_six();}
}

/** \Irregular
 *
 * \param
 * \param
 * \return
 *
 */

int main()
{
        int acc, i, n, m, reg, stop, l;
        string in;
        cout<<"Enter your name : ";
        getline(cin, name);
        cout<<"Enter your age  : ";
        cin>>i;
        if(i<5){cout<<"\nError: INPUT NOT VALID.\n"; return 0;}

        if(cin.fail()){cout<<"\nError: INVALID DATA TYPE.\n"; return 0;}
        cout<<"Enter month     : ";
        cin>>m;
       // if(m<5){cout<<"\nError: INPUT NOT VALID.\n"; return 0;}
        n=m;
        l=n;
        if(cin.fail()){cout<<"\nError: INVALID DATA TYPE.\n"; return 0;}
        cout<<"\nAre you a regular student or not [Y/N]? ";
        cin>> in;
        reg=i;
        if(in=="Y"){
            if(i==5){
                if(n<6){
                    cout<<"\nError: INPUT NOT VALID.\n"; return 0;
                }
                cout<<"\n  ----------------------\n"<<"  "<<reg<<"."<<m<<" years old - Kinder"<<endl; kinder();}
            if(i==6 && n<=11){
                cout<<"\n  -----------------------"<<"\n  "<<reg<<"."<<m<<" years old - Grade 1"<<endl; grade_one();}
            if(i==7 && n<=11){
                cout<<"\n  -----------------------"<<"\n  "<<reg<<"."<<m<<" years old - Grade 2"<<endl; grade_two();}
            if(i==8 && n<=11){
                cout<<"\n  -----------------------"<<"\n  "<<reg<<"."<<m<<" years old - Grade 3"<<endl; grade_three();}
            if(i==9 && n<=11){
                cout<<"\n  -----------------------"<<"\n  "<<reg<<"."<<m<<" years old - Grade 4"<<endl; grade_four();}
            if(i==10 && n<=11){
                cout<<"\n  -----------------------"<<"\n  "<<reg<<"."<<m<<" years old - Grade 5"<<endl; grade_five();}
            if(i==11 && n<=11){
                cout<<"\n  -----------------------"<<"\n  "<<reg<<"."<<m<<" years old - Grade 6"<<endl; grade_six();}
        }
        else if(in=="N"){
            cout<<"How many years did you stop in school ? ";
            cin>>stop;
            cout<<"\n";
            acc=i;
            acc=acc-stop;
            if(acc==5 && n<=11 && n>=5){
                cout<<"----------------------\n"<<reg<<"."<<m<<" years old - Kinder"<<endl;}
            if(acc==6 && n<=11){
                cout<<"-----------------------\n"<<reg<<"."<<m<<" years old - Grade 1"<<endl;}
            if(acc==7 && n<=11){
                cout<<"-----------------------\n"<<reg<<"."<<m<<" years old - Grade 2"<<endl;}
            if(acc==8 && n<=11){
                cout<<"-----------------------\n"<<reg<<"."<<m<<" years old - Grade 3"<<endl;}
            if(acc==9 && n<=11){
                cout<<"-----------------------\n"<<reg<<"."<<m<<" years old - Grade 4"<<endl;}
            if(acc==10 && n<=11){
                cout<<"-----------------------\n"<<reg<<"."<<m<<" years old - Grade 5"<<endl;}
            if(acc==11 && n<=11){
                cout<<"-----------------------\n"<<reg<<"."<<m<<" years old - Grade 6"<<endl;}
        }
        else{
            cout<<"\nError: INVALID INPUT.\n";
        }
        return 0;
}
