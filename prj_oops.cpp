/*
    CURRENCY CONVERTER
*/

#include <bits/stdc++.h>

using namespace std;

class currency
{
    double amt;
    double fact;
    friend class convert;
public:
    currency();
    void setAmt(double amount);
    void setFact(double factor);
    double getFact();
    double toIndRupee();
    double toSecond();
//    int toSecond();
};

class convert
{

public:
    currency c1;
    void setAmt(double amount)
    {
        c1.amt=amount;
    }
    void setFact(double factor){
        c1.fact=factor;
    }
    double getFact()
    {
        return c1.fact;
    }

    double toIndRupee()
    {
        return c1.amt/c1.fact;
    }

};


//class constructor
currency :: currency()
{
    amt=0;
    fact=1;
   // cout<<"class intialised"<<endl;
}

void currency::setAmt(double amount)
{
    amt=amount;
}

void currency::setFact(double factor)
{
    fact=factor;
}

double currency::getFact()
{
    return fact;
}

double currency::toIndRupee(){
    return amt/fact;
}

class Ind_Rupee:currency
{
    public:
     double cf=1;

};

class Pak_Rupee:currency
{
    public:
     double cf=2.14;

};

class Yuan:currency
{
    public:
     double cf=0.087;

};

class US_Dollar:currency
{
    public:
     double cf=0.013;

};
class Yen:currency
{
    public:
     double cf=1.48;

};

class Pound:currency
{
    public:
     double cf=0.0097;

};

class Euro:currency
{
    public:
     double cf=0.011;

};

class Aus_Dollar:currency
{
    public:
     double cf=0.018;

};

class Dinar:currency
{
    public:
     double cf=0.0040;

};

class Taka:currency
{
    public:
     double cf=1.14;

};

double currency::toSecond(){
    return fact*amt;
}

vector <int> toSecond(double x);

int main()
{
    while(1){
        cout<<"Enter operation choice :"<<endl;
        cout<<"1. Convert one to single other currrency"<<endl;
        cout<<"2. Convert one to all other curency"<<endl;
        cout<<"Enter Choice"<<endl;
        int op_choice;
        cin>>op_choice;
        cout<<"Currency choices"<<endl;
        cout<<"1. Indian Rupee\n2. Pakistani Rupee\n3. Yuan\n4. US Dollar\n5. Yen"<<endl;
        cout<<"6. Pound\n7. Euro\n8. Australian Dollar\n9. Dinar\n10. Taka"<<endl;
        if(op_choice==1){
            int a1,a2;
            cout<<"Enter first currency to convert from :"<<endl;
            cin>>a1;
            cout<<"Enter second currency to convert to :"<<endl;
            cin>>a2;
            cout<<"Enter Amount"<<endl;
            double a3;
            cin>>a3;
            double x;
            switch(a1){
                            case 1: {Ind_Rupee ir;
                                    currency c1;
                                    c1.setFact(ir.cf);
                                    c1.setAmt(a3);
                                    x=c1.toIndRupee();
                                    //x=a3;
                                    cout<<a3<<" Indian Rupee = ";
                            }
                            break;

                            case 2: {Pak_Rupee pr;
                                    currency c1;
                                    c1.setAmt(a3);
                                    c1.setFact(pr.cf);
                                    x=c1.toIndRupee();
                                    cout<<a3<<" Pakistani Rupee = ";
                            }
                            break;
                            case 3: {Yuan yu;
                                    currency c1;
                                    c1.setAmt(a3);
                                    c1.setFact(yu.cf);
                                    x=c1.toIndRupee();
                                    cout<<a3<<" Yuan = ";
                            }
                                    break;
                            case 4: {US_Dollar usd;
                                    currency c1;
                                    c1.setAmt(a3);
                                    c1.setFact(usd.cf);
                                    x=c1.toIndRupee();
                                    cout<<a3<<" US Dollar = ";
                            }
                                    break;
                            case 5: {Yen ye;
                                    currency c1;
                                    c1.setAmt(a3);
                                    c1.setFact(ye.cf);
                                    x=c1.toIndRupee();
                                    cout<<a3<<" Yen = ";
                            }
                                    break;
                            case 6: {Pound po;
                                    currency c1;
                                    c1.setAmt(a3);
                                    c1.setFact(po.cf);
                                    x=c1.toIndRupee();
                                    cout<<a3<<" Pound = ";
                            }
                                    break;
                            case 7: {Euro eu;
                                    currency c1;
                                    c1.setAmt(a3);
                                    c1.setFact(eu.cf);
                                    x=c1.toIndRupee();
                                    cout<<a3<<" Euro = ";
                            }
                                    break;
                            case 8: {Aus_Dollar au;
                                    currency c1;
                                    c1.setAmt(a3);
                                    c1.setFact(au.cf);
                                    x=c1.toIndRupee();
                                    cout<<a3<<" Australian Dollar = ";
                            }
                                    break;
                            case 9: {Dinar di;
                                    currency c1;
                                    c1.setAmt(a3);
                                    c1.setFact(di.cf);
                                    x=c1.toIndRupee();
                                    cout<<a3<<" Dinar = ";
                            }
                                    break;

                            case 10: {Taka ta;
                                    currency c1;
                                    c1.setAmt(a3);
                                    c1.setFact(ta.cf);
                                    x=c1.toIndRupee();
                                    cout<<a3<<" Taka = ";
                            }
                                    break;
                            default : cout<<"Wrong First Selection"<<endl;

            }
                        switch(a2)
                        {
                            case 1: cout<<x<<" Indian Rupee"<<endl;
                                    break;
                            case 2: {Pak_Rupee pr;
                                    currency c1;
                                    c1.setAmt(x);
                                    c1.setFact(pr.cf);
                                    double res=c1.toSecond();
                                    cout<<res<<" Pakistani Rupee"<<endl;
                            }
                                    break;
                            case 3: {Yuan yu;
                                    currency c1;
                                    c1.setAmt(x);
                                    c1.setFact(yu.cf);
                                    double res=c1.toSecond();
                                    cout<<res<<" Yuan"<<endl;
                            }
                                    break;
                            case 4: {US_Dollar usd;
                                    currency c1;
                                    c1.setAmt(x);
                                    c1.setFact(usd.cf);
                                    double res=c1.toSecond();
                                    cout<<res<<" US Dollar"<<endl;
                                    }
                                    break;
                            case 5: {Yen ye;
                                    currency c1;
                                    c1.setAmt(x);
                                    c1.setFact(ye.cf);
                                    double res=c1.toSecond();
                                    cout<<res<<" Yen"<<endl;
                                    }
                                    break;
                            case 6: {Pound po;
                                    currency c1;
                                    c1.setAmt(x);
                                    c1.setFact(po.cf);
                                    double res=c1.toSecond();
                                    cout<<res<<" Pound"<<endl;
                                    }
                                    break;
                            case 7: {Euro eu;
                                    currency c1;
                                    c1.setAmt(x);
                                    c1.setFact(eu.cf);
                                    double res=c1.toSecond();
                                    cout<<res<<" Euro"<<endl;
                                    }
                                    break;
                            case 8: {Aus_Dollar au;
                                    currency c1;
                                    c1.setAmt(x);
                                    c1.setFact(au.cf);
                                    double res=c1.toSecond();
                                    cout<<res<<" Australian Dollar"<<endl;
                                    }
                                    break;
                            case 9: {Dinar di;
                                    currency c1;
                                    c1.setAmt(x);
                                    c1.setFact(di.cf);
                                    double res=c1.toSecond();
                                    cout<<res<<" Dinar"<<endl;
                                    }
                                    break;
                            case 10: {Taka ta;
                                    currency c1;
                                    c1.setAmt(x);
                                    c1.setFact(ta.cf);
                                    double res=c1.toSecond();
                                    cout<<res<<" Taka"<<endl;
                                    }
                                    break;
                            default : cout<<"Wrong Second Selection"<<endl;
                        }
        }

        else if(op_choice==2){
            int a1;
            double a3;
            cout<<"Enter the currency to be converted to all other :"<<endl;
            cin>>a1;
            cout<<"Enter Amount"<<endl;
            cin>>a3;
            double x;
            switch(a1){
                            case 1: {Ind_Rupee ir;
                                    convert c1;
                                    c1.setFact(ir.cf);
                                    c1.setAmt(a3);
                                    x=c1.toIndRupee();
                                    //x=a3;
                                    //cout<<c1.getFact()<<endl;

                                    cout<<a3<<" Indian Rupee = "<<endl;
                                    vector <int> res=toSecond(x);
                            }
                            break;

                            case 2: {Pak_Rupee pr;
                                    convert c1;
                                    c1.setAmt(a3);
                                    c1.setFact(pr.cf);
                                    x=c1.toIndRupee();

                                    cout<<a3<<" Pakistani Rupee = "<<endl;
                                    vector <int> res=toSecond(x);
                            }
                            break;
                            case 3: {Yuan yu;
                                    convert c1;
                                    c1.setAmt(a3);
                                    c1.setFact(yu.cf);
                                    x=c1.toIndRupee();

                                    cout<<a3<<" Yuan = "<<endl;
                                    vector <int> res=toSecond(x);
                            }
                                    break;
                            case 4: {US_Dollar usd;
                                    convert c1;
                                    c1.setAmt(a3);
                                    c1.setFact(usd.cf);
                                    x=c1.toIndRupee();

                                    cout<<a3<<" US Dollar = "<<endl;
                                    vector <int> res=toSecond(x);
                            }
                                    break;
                            case 5: {Yen ye;
                                    convert c1;
                                    c1.setAmt(a3);
                                    c1.setFact(ye.cf);
                                    x=c1.toIndRupee();

                                    cout<<a3<<" Yen = "<<endl;
                                    vector <int> res=toSecond(x);
                            }
                                    break;
                            case 6: {Pound po;
                                    convert c1;
                                    c1.setAmt(a3);
                                    c1.setFact(po.cf);
                                    x=c1.toIndRupee();

                                    cout<<a3<<" Pound = "<<endl;
                                    vector <int> res=toSecond(x);
                            }
                                    break;
                            case 7: {Euro eu;
                                    convert c1;
                                    c1.setAmt(a3);
                                    c1.setFact(eu.cf);
                                    x=c1.toIndRupee();

                                    cout<<a3<<" Euro = "<<endl;
                                    vector <int> res=toSecond(x);
                            }
                                    break;
                            case 8: {Aus_Dollar au;
                                    convert c1;
                                    c1.setAmt(a3);
                                    c1.setFact(au.cf);
                                    x=c1.toIndRupee();

                                    cout<<a3<<" Australian Dollar = "<<endl;
                                    vector <int> res=toSecond(x);
                            }
                                    break;
                            case 9: {Dinar di;
                                    convert c1;
                                    c1.setAmt(a3);
                                    c1.setFact(di.cf);
                                    x=c1.toIndRupee();

                                    cout<<a3<<" Dinar = "<<endl;
                                    vector <int> res=toSecond(x);
                            }
                                    break;

                            case 10: {Taka ta;
                                    convert c1;
                                    c1.setAmt(a3);
                                    c1.setFact(ta.cf);
                                    x=c1.toIndRupee();

                                    cout<<a3<<" Taka = "<<endl;
                                    vector <int> res=toSecond(x);
                            }
                                    break;
                            default : cout<<"Wrong First Selection"<<endl;

                    }


        }
        else{
            cout<<"Invalid Choice"<<endl;
            continue;
        }
        cout<<"Do you want to continue?"<<endl;
        char c;
        cin>>c;
        if(c=='n' || c=='N'){
            break;
        }
    }
    return 0;
}


 vector <int> toSecond(double x)
    {
        vector <int> v;
       // double x=c1.toIndRupee();
       int j=1;
                        switch(j)
                        {
                            case 1: {cout<<x<<" Indian Rupee"<<endl;
                                    v.push_back(x);}
                                   // break;
                            case 2: {Pak_Rupee pr;
                                    currency c2;
                                    c2.setAmt(x);
                                    c2.setFact(pr.cf);
                                    double res=c2.toSecond();
                                    cout<<res<<" Pakistani Rupee"<<endl;
                                    v.push_back(res);
                            }
                                    //break;
                            case 3: {Yuan yu;
                                    currency c2;
                                    c2.setAmt(x);
                                    c2.setFact(yu.cf);
                                    double res=c2.toSecond();
                                    v.push_back(res);
                                    cout<<res<<" Yuan"<<endl;
                            }
                                    //break;
                            case 4: {US_Dollar usd;
                                    currency c2;
                                    c2.setAmt(x);
                                    c2.setFact(usd.cf);
                                    double res=c2.toSecond();
                                    v.push_back(res);
                                    cout<<res<<" US Dollar"<<endl;
                                    }
                                    //break;
                            case 5: {Yen ye;
                                    currency c2;
                                    c2.setAmt(x);
                                    c2.setFact(ye.cf);
                                    double res=c2.toSecond();
                                    v.push_back(res);
                                    cout<<res<<" Yen"<<endl;
                                    }
                                    //break;
                            case 6: {Pound po;
                                    currency c2;
                                    c2.setAmt(x);
                                    c2.setFact(po.cf);
                                    double res=c2.toSecond();
                                    v.push_back(res);
                                    cout<<res<<" Pound"<<endl;
                                    }
                                    //break;
                            case 7: {Euro eu;
                                    currency c2;
                                    c2.setAmt(x);
                                    c2.setFact(eu.cf);
                                    double res=c2.toSecond();
                                    v.push_back(res);
                                    cout<<res<<" Euro"<<endl;
                                    }
                                    //break;
                            case 8: {Aus_Dollar au;
                                    currency c2;
                                    c2.setAmt(x);
                                    c2.setFact(au.cf);
                                    double res=c2.toSecond();
                                    v.push_back(res);
                                    cout<<res<<" Australian Dollar"<<endl;
                                    }
                                    //break;
                            case 9: {Dinar di;
                                    currency c2;
                                    c2.setAmt(x);
                                    c2.setFact(di.cf);
                                    double res=c2.toSecond();
                                    v.push_back(res);
                                    cout<<res<<" Dinar"<<endl;
                                    }
                                    //break;
                            case 10: {Taka ta;
                                    currency c2;
                                    c2.setAmt(x);
                                    c2.setFact(ta.cf);
                                    double res=c2.toSecond();
                                    v.push_back(res);
                                    cout<<res<<" Taka"<<endl;
                                    }
                                    //break;
                            //default : cout<<"Wrong Second Selection"<<endl;
                            //break;
                        }
                        return v;
    }
