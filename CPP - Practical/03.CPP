#include<iostream>
#include<string.h>
using namespace std;

class Hospital
{
    public:
    int AvailableBeds;
    float ratings,bed_price;
    string hospital_name,location;
    string contact_no;
    geth_data()
    {
        cout<<"\nHospital Name: ";
        getline(cin,hospital_name);
        cout<<"Location: ";
        getline(cin,location);
        cout<<"Ratings: ";
        cin>>ratings;
        cout<<"Bed Price: ";
        cin>>bed_price;
        cout<<"Available Beds: ";
        cin>>AvailableBeds;
        cout<<"Contact No: ";
        getline(cin,contact_no);
    }
    updateh_data()
    {
        cin.ignore();
        cout<<"\nHospital Name: ";
        getline(cin,hospital_name);
        cout<<"Location: ";
        getline(cin,location);
        cout<<"Ratings: ";
        cin>>ratings;
        cout<<"Bed Price: ";
        cin>>bed_price;
        cout<<"Available Beds: ";
        cin>>AvailableBeds;
        cout<<"Contact No: ";
        cin>>contact_no;
    }
    printh_data()
    {
        cout<<"Hospital Name: "<<hospital_name<<endl;
        cout<<"Location: "<<location<<endl;
        cout<<"Ratings: "<<ratings<<endl;
        cout<<"Bed Price: "<<bed_price<<endl;
        cout<<"Available Beds: "<<AvailableBeds<<endl;
        cout<<"Contact No: "<<contact_no<<endl;
    }
};
class Patient:public Hospital
{
    public:
    string patient_name,p_hospital_name;
    int patient_id;
    getp_data()
    {
        cin.ignore();
        cout<<"\nPatient Name: ";
        getline(cin,patient_name);
        cout<<"Patient ID: ";
        cin>>patient_id;
        cout<<"Hospital Name: ";
        getline(cin,p_hospital_name);
        cin.ignore();
    }
    updatep_data()
    {
        cin.ignore();
        cout<<"\nPatient Name: ";
        getline(cin,patient_name);
        cout<<"Patient ID: ";
        cin>>patient_id;
        cout<<"Hospital Name: ";
        getline(cin,p_hospital_name);
        cin.ignore();
    }
    printp_data()
    {
        cout<<"Patient Name: "<<patient_name<<endl;
        cout<<"Patient ID: "<<patient_id<<endl;
        cout<<"Hospital Name: "<<p_hospital_name<<endl;
    }
};
int main()
{
    int n,choice;
    Patient p;
    Patient pn[20];
    p.geth_data();
    char cam='y';
    cout<<"Enter No. of Patients: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        pn[i].getp_data();
    }
    while(cam=='y')
    {
        cout<<"\nEnter your choice:\n1.Print Hospital Data\n2.Print Patient Data\n3.Search Patient by Hospital Name\n4.Search Hospital Beds\n5.Update Data\n6.Exit";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Hospital Info: \n"<<endl;
            p.printh_data();


            break;
        case 2:
            cout<<"Patients Info: \n"<<endl;
            for(int i=0;i<n;i++)
            {
                pn[i].printp_data();
            }
            break;
        case 3:
            cout<<"Enter Hospital Name: \n"<<endl;
            break;
        case 4:
            cout<<"";
            break;
        case 5:
            char ch;
            cout<<"What would you like to change? h or p\n(Changing Data will result in deletion of old data)";
            cin>>ch;
            if(ch=='h')
            {
                p.updateh_data();
            }
            else if(ch=='p')
            {
                cout<<"Enter No. of Patients: ";
                cin>>n;
                for(int i=0;i<n;i++)
                    {
                        pn[i].updatep_data();
                    }
            }
            else{
                cout<<"\nWrong Choice";
            }
            break;
        case 6:
            exit(0);
            break;
        default:
            cout<<"\nWrong Choice!";

        }
        cout<<"\nDo you wish to continue? y or n";
        cin>>cam;


    }

    return 0;
}

