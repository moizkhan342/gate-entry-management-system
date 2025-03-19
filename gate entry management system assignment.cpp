#include<iostream>
#include<string>
#include<ctime>
using namespace std;

int main()
{
    
	string entryType; 
    string studentid,studentname;  
    string ahsanchishti = "ahsanchishti",saadsheikh = "saadsheikh",moizfarooq ="moizfarooq",rehman ="rehman",atherkhan ="atherkhan",syedmoizali ="syedmoizali";
    string teachername,teachercnic;
    string azharkhaskheli,haibatullahchanna,asadkhan,adnanashraf,fawadkhan;
    string cnicnumber ="413041301",cnicnumberr ="413041302",cnicnumberrr ="413041303",cnicnumberrrr ="413041304",cnicnumberrrrr ="413041305";
    string moizfarooqid ="24BSSW036",saadid ="24BSSW098",ahsanid ="24BSSW066",syedmoizid ="42BSSW024",rehmanid ="24BSSW100",atherid ="24BSSW054";
    string CNIC;
    string name,reason;
    string id,password;
    string moiz;
    string iduniversitygatesystem= "0000";
	time_t now=time(0);
	tm*ltm = localtime(&now);
	cout<<"LOGIN PAGE"<<endl;
	cout<<"ENTER ID NUMBER";
	cin>>id;
	cout<<"ENTER PASSWORD";
	cin>>password;
	if(id == iduniversitygatesystem || password == moiz)
	{cout<<"Login Successful"<<endl;
	}
	else{cout<<"Login failed tryagain";
	}
	
	cout << "PLEASE ENTER THE TYPE OF ENTRY"<<endl;
	cout<<"FOR STUDENTS ENTRY"<<endl;
	cout<<"FOR TEACHERS ENTRY"<<endl;
	cout<<"FOR VISITORS ENTRY"<<endl;
	cout<<"FOR POINT ENTRY"<<endl;
    
        cin >> entryType; 
         if (entryType == "student") {
         cout << "Enter your student ID: " << endl;
         cin >> studentid;  

         cout << "Enter your name: " << endl;
         cin >> studentname;  

        
         if (studentid == ahsanid || studentname == ahsanchishti) {
            cout << "Entry successful" << endl;
         } else if (studentid == saadid ||  studentname == saadsheikh){
            cout << "Entry successful" << endl;
         }
         else if(studentid == moizfarooqid || studentname == moizfarooq)
         {cout<<"Entry successful";
		 }
		 else if(studentid == syedmoizid || studentname == syedmoizali)
		 {cout<<"Entry successful";
		 }
		 else if(studentid == rehmanid || studentname == rehman)
		 {cout<<"Entry successful";
		 }
		 else if(studentid == atherid || studentname ==atherkhan )
        	{cout<<"Entry successful";
		 }
		  else {
        cout << "Invalid entry type" << endl;
 		}
    	}
        else if (entryType == "teacher") {
        
        cout << "Enter teacher name." << endl;
        cin>>teachername;
	    
		cout<<"Enter teacher cnic number"<<endl;
	    cin>>teachercnic;
	
	    if(teachername == azharkhaskheli || teachercnic == cnicnumber)
	    { cout<<"Entry successful";
	    }
	    else if(teachername == haibatullahchanna || teachercnic ==cnicnumberr)
	    { cout<<"Entry successful"; 
		}
		else if(teachername == asadkhan || teachercnic == cnicnumberrr)
	    { cout<<"Entry successful";
	    }
		else if(teachername == adnanashraf || teachercnic == cnicnumberrrr)
		{cout<<"Entry successful";
		}
		else if(teachername == fawadkhan || teachercnic == cnicnumberrrrr)
		{cout<<"Entry succcessful";
		 }
		  else {
        cout << "Invalid entry type" << endl;
     }
     }
     else if (entryType == "visitor") {
        
		cout << "Enter your CNIC number." << endl;
        cin>>CNIC;
        cout<<"Enter your name"<<endl;
        cin>>name;
        cout<<"Reason for visiting"<<endl;
        cin>>reason;
        cout<<"Time of entry:";
        cout<<(ltm->tm_hour)<<":";
        if((ltm->tm_min)<10)
        cout<<"0";
        cout<<(ltm->tm_min)<<endl;
        
        cout<<"Your Information:"<<endl;
        cout<<"CNIC NUMBER:"<<CNIC<<endl;
        cout<<"NAME:"<<name<<endl;
        cout<<"Entry successful.";
	 }
      
     
     else {
        cout << "Invalid entry type" << endl;
     }
 
     return 0;
     }
