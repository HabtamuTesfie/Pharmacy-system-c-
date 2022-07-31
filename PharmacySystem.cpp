#include<iostream>
#include<fstream>
#include<iomanip>
#include<stdio.h>
#include<windows.h> 
using namespace std;


struct node
{
         int id;
		 char name[50];
		 float price,dis;
		 int quant;
		 node*next;
		 float expired_day,expired_month,expired_year;
};
struct drug{
         int Id;
		 char nam[50];
		 float pric,diss;
		int quantt;
		float expired_day1,expired_month1,expired_year1;	
};
drug pr;
int x,aa,c=0, co=0;
float afterdis,total=0;
void password(int);//function decleration prototype
void introduction();
void admin();
void insertdrug();
void insertDrug_Begin();
void add_Drug_Any_Position( int pos);
void displaydrug();
void displaydrug1();
void sortdrug();
void deletedrug();
void delete_start_node();
void delete_end_node();
void delete_pos(int pos);
void searchdrug();
void modifydrug();
void help();
void Eexit();
void tax();



node*start=NULL;
int n;
void introduction()
{
    cout<<endl<<endl<<endl<<endl;
cout<<"||<-><-><-><-><-><-><-><-><-><-><-><-><-><-><-><-><-><-><-><-><-><||"<<endl;
cout<<"||\t                                                          ||"<<endl;
cout<<"||\tUNIVERSITY OF GONDAR                                      ||"<<endl;
cout<<"||\tCOLLEGUE OF MEDICINE AND HEALTH SCIENCE                   ||"<<endl;
cout<<"||\tDEPARTMENT OF HEALTH INFORMATICS                          ||"<<endl;
cout<<"||\tSTUDENT PROJECT                                           ||"<<endl;
cout<<"||\tABOUT DRUG INFORMATION MANNEGEMENT SYSTEM                 ||"<<endl;
cout<<"||\t\tDATA STRUCTURE AND ALGORITHM                      ||"<<endl;
cout<<"||\t                                                          ||"<<endl;
cout<<"||<-><-><-><-><-><-><-><-><-><-><-><-><-><-><-><-><-><-><-><-><-><||"<<endl<<endl<<endl;

cout<<"____________________________________________________________________\n"<<endl;
cout<<"\t\t\t    GROUP MEMBERS\t\t                                        "<<endl;;
cout<<"\t\t NAME \t\t\t\t\t ID NUMBER \t\t\t\t\t\t                        "<<endl;
cout<<"|\t 1. HABTAMU TESFIE.................................03941/10      |\n";
cout<<"|\t 2. MELIKAM ALEBIA.................................04001/10      |\n";
cout<<"|\t 3. HENOK WULETAW .................................03990/10      |\n";
cout<<"|\t 4. ALEMSHET ASHAGRIE..............................03975/10      |\n";
cout<<"|\t 5.DAWIT BEKELE....................................03997/10      |\n";
cout<<"|\t 6. YINGESU FENTAHUN................................03947/10     |\n";
cout<<"|________________________________________________________________________|"<<endl;
cout<<"\t\t\t\t\tSUBMITTED TO :MIFTAHA"<<endl;
cout<<"\t\t\t\t\tSUBMISSION DATE: JAUNARY 24,2012 E.C"<<endl;
cout<<"\t\t\t\t\tGONDAR,ETHIOPIA"<<endl;
cout<<endl;
cout<<"\t\tWELCOME TO UNIVERSITY OF GONDAR HOSPITAL\n";
}

void password(int n)
{
int c=1234,z;
co++;
 if( co<=3)
   {
               if(n==c)
cout<<"\nYOU ARE LOGGED IN \n\n";
    else if(( co<=3)&&(c!=n))  
	{
cout<<"\nTRY THE CORRECT PASSWORD\n\n";
cin>>z;
     password(z);
   }
   }
   else 
   {
    cout<<"\tI GIVE YOU THREE CHANCE  BUT YOU DIDN'T BE ABEL ENTER  CORRECT PASSWARED";
	  cout<<"SO TRY LATTER\n";

   }
}


void admin()
{
cout<<"\t\t**********************************************************\n";
cout<<"\t\t**                                                      **\n";
cout<<"\t\t**\t\t  ADMINSTRATION PAGE         \t\t**\n";
cout<<"\t\t**\t\t @@@@@@@@@@@@@@@@@@@@2@@@@@@@\t\t**\n";
cout<<"\t\t**\t\t 1. INSERT NEWDRUG           \t\t**\n";
cout<<"\t\t**\t\t 2. DISPLAY DRUG             \t\t**\n";
cout<<"\t\t**\t\t 3. SORT  DRUG BASED ON ID    \t\t**\n";
cout<<"\t\t**\t\t 4. DELETE  DRUG              \t\t**\n";
cout<<"\t\t**\t\t 5. SEARCH  FOR  DRUG         \t\t**\n";
cout<<"\t\t**\t\t 6. TO MODIFY DRUG INFORMATION \t\t**\n";
cout<<"\t\t**\t\t 7. TO CALCULATE TAX          \t\t**\n";
cout<<"\t\t**\t\t 8. EXIT FROM THE PAGE         \t\t**\n";
cout<<"\t\t**\t\t PLASE ENTER YOUR CHOICE(1-8)\t\t**\n";
cout<<"\t\t**                                                      **\n";
cout<<"\t\t**********************************************************\n";
char ch2;
cin>>ch2;
switch(ch2)
{
case '1':
cout<<"\t\t AT WHICH POSITION YOU WANT TO INSERT THE NEW DRUG?\n\t\t CHOOSE FROM A,B OR C  \t\t\n";
cout<<"\t\t @@@@@@@@@@@@@@@@@@@@2@@@@@@@\t\t\n";
cout<<"\t\t A. INSERT NEW DRUG AT THE BEGINNING   \n";
cout<<"\t\t B. INSERT NEW DRUG AT THE END         \n";
cout<<"\t\t C. INSERT NEW DRUG AT ANY POSITION    \n";
	char b;
	int y;
	cin>>b;
	if(b=='A')
	{
   insertDrug_Begin();
   admin();
	}
  else if(b=='B')
 {	
  insertdrug();
  admin();
	}
	 else if(b=='C')
  {	
    cout<<"please enter the position you want to enter the new drug";
	cin>>y;
  add_Drug_Any_Position(y);
  admin();
	}
	else
	{
	cout<<"please enter valid choice(A,B or C)"<<endl;
	}
	break;
case '2':
	cout<<"\t\t WHICH DATA YOU WANT TO DISPLAY?\n\t\t CHOOSE A OR B \t\t\n";
cout<<"\t\t @@@@@@@@@@@@@@@@@@@@2@@@@@@@\t\t\n";
cout<<"\t\t A. DISPLAY THE CURRENT DATA YOU INSERT   \n";
cout<<"\t\t B. DISPLAY THE WHOLE DATA FROM THE FILE   \n";
	char r;
	cin>>r;
	if(r=='A')
	{
	displaydrug1();
	admin();
	}
	else if(r=='B')
	{
	displaydrug();
	admin();
	}
	else
	{
		cout<<"please insert valid character [A OR B]"<<endl;
	}
	break;
case '3':
	 sortdrug();
		admin();
		break;
case '4':
cout<<"\t\t YOU WANT TO DELETE THE DRUG?\n\t\t CHOOSE FROM A,B,C OR D  \t\t\n";
cout<<"\t\t @@@@@@@@@@@@@@@@@@@@2@@@@@@@\t\t\n";
cout<<"\t\t A. DELETE DRUG AT THE BEGINNING TEMPORARLIY \n";
cout<<"\t\t B. DELETE  DRUG AT THE END TEMPORARLIY        \n";
cout<<"\t\t C. DELETE  DRUG AT ANY POSITION TEMPORARLIY    \n";
cout<<"\t\t D. DELETE  DRUG FROM THE FILE PERMANETLY         \n";
	char c;
	int m;
	cin>>c;
	if(c=='A')
	{
   delete_start_node();
   admin();
	}
  else if(c=='B')
 {	
  delete_end_node();
  admin();
	}
	 else if(c=='C')
  {
  cout<<"please enter the position you want to delete the drug";
cin>>m;	
  delete_pos(m);
  admin();
	}
		 else if(c=='D')
  {	
  deletedrug();
  admin();
	}
	else
	{
	cout<<"please enter valid choice(A,B,C & D)"<<endl;
	}
		break;
case '5':
		searchdrug();
		 admin();
		break;
case '6':
	modifydrug();
	 admin();
    break;
    
   case '7':
    tax();
    admin();
    break;

case '8':
		Eexit();
		break;
default:
cout<<"INVALID CHOICE\n\n";
  admin();
}
}
void insertdrug(){	
fstream file;
file.open("pharmacy",ios::out|ios::app); 	
	
node*temp2;

	node*temp=new node;

		cout<<"please enter drug information"<<endl;
	
 cout<<" insert drug id"<<endl;
	cin>>temp->id;
	pr.Id=temp->id;
	while(cin.fail())
    {
		cin.clear();
		cin.ignore();
		cout<<"ID MUST BE NUMBER\n";
		cout<<"ENTER DRUG ID AGAIN :\n";
		cin>>temp->id;
		pr.Id=temp->id;
		}
		ifstream fer("pharmacy");//TO READ A FILE---IFSTREAM
while(fer.read((char*)&pr,sizeof(pr)))//BINARY FILE READING
    {
		if(temp->id==pr.Id)
		{
		cout<<"YOU INSERTED THIS ID BEFORE SO INSERT THE NEW ID\n\n";
			cin>>temp->id;
			pr.Id=temp->id;
		fer.close();
  }
 }
	
	cout<<" insert drug name"<<endl;
	cin>>temp->name;
	strcpy(pr.nam,temp->name);
	while(cin.fail())
    {
		cin.clear();
		cin.ignore();
		cout<<"NAME MUST BE LETTER\n";
		cout<<"ENTER DRUG NAME AGAIN:\n";
		cin>>temp->name;
		strcpy(pr.nam,temp->name);
 }
	cout<<" insert drug price"<<endl;
	cin>>temp->price;
	pr.pric=temp->price;
	while(cin.fail()){
		cin.clear();
		cin.ignore();
		cout<<"PRICE CAN NOT BE LETTER\n";
		cout<<"ENTER DRUG PRICE AGAIN :\n";
		cin>>temp->price;
	pr.pric=temp->price;
 }
	cout<<" how many drugs you want?"<<endl;
	cin>>temp->quant;
	pr.quantt=temp->quant;
	while(cin.fail())
    {
		cin.clear();
		cin.ignore();
		cout<<"QUANTITY MUST NOT BE LETTER\n";
		cout<<"ENTER THE QUANTITY  AGAIN:\n";
			cin>>temp->quant;
	pr.quantt=temp->quant;
    }
	cout<<" insert drug discount"<<endl;
	cin>>temp->dis;
	pr.diss=temp->dis;
	while(cin.fail()){
		cin.clear();
		cin.ignore();
		cout<<"DISCOUNT MUST BE NUMBER\n";
		cout<<"ENTER DRUG DISCOUNT IN % AGAIN: \n";
		cin>>temp->dis;
	pr.diss=temp->dis;
 }
	cout<<" please insert drug expiration day,month and year respectively"<<endl;
	cin>>temp->expired_day>>temp->expired_month>>temp->expired_year;
 pr.expired_day1=temp->expired_day;
 pr.expired_month1=temp->expired_month;
 pr.expired_year1=temp->expired_year;
 temp->next=NULL;
	if(start==NULL){
		start=temp;
	}
	else{
		temp2=start;
		while(temp2->next!=NULL){
			temp2=temp2->next;
		}
		temp2->next=temp;
	}
file.write((char*)&pr,sizeof(pr));
cout<<"DRUG HAS BEEN INSERTED SUCCESSFULLY\n\n";
file.close();
}

void insertDrug_Begin(){
	fstream file;
file.open("pharmacy",ios::out|ios::app);
	node*temp=new node;
cout<<"please enter drug information"<<endl;
 cout<<" insert drug id"<<endl;
	cin>>temp->id;
	pr.Id=temp->id;
	while(cin.fail())
    {
		cin.clear();
		cin.ignore();
		cout<<"ID MUST BE NUMBER\n";
		cout<<"ENTER DRUG ID AGAIN :\n";
		cin>>temp->id;
		pr.Id=temp->id;
		}
		ifstream fer("pharmacy");//TO READ A FILE---IFSTREAM
while(fer.read((char*)&pr,sizeof(pr)))//BINARY FILE READING
    {
		if(temp->id==pr.Id)
		{
		cout<<"YOU INSERTED THIS ID BEFORE SO INSERT THE NEW ID\n\n"<<endl;
		cin>>temp->id;
		pr.Id=temp->id;
		fer.close();
  }
 }
	
	cout<<" insert drug name"<<endl;
	cin>>temp->name;
	strcpy(pr.nam,temp->name);
	while(cin.fail())
    {
		cin.clear();
		cin.ignore();
		cout<<"NAME MUST BE LETTER\n";
		cout<<"ENTER DRUG NAME AGAIN:\n";
		cin>>temp->name;
		strcpy(pr.nam,temp->name);
 }
	cout<<" insert drug price"<<endl;
	cin>>temp->price;
	pr.pric=temp->price;
	while(cin.fail()){
		cin.clear();
		cin.ignore();
		cout<<"PRICE CAN NOT BE LETTER\n";
		cout<<"ENTER DRUG PRICE AGAIN :\n";
		cin>>temp->price;
	pr.pric=temp->price;
 }
	cout<<" how many drugs you want?"<<endl;
	cin>>temp->quant;
	pr.quantt=temp->quant;
	while(cin.fail())
    {
		cin.clear();
		cin.ignore();
		cout<<"QUANTITY MUST NOT BE LETTER\n";
		cout<<"ENTER THE QUANTITY  AGAIN:\n";
			cin>>temp->quant;
	pr.quantt=temp->quant;
    }
	cout<<" insert drug discount"<<endl;
	cin>>temp->dis;
	pr.diss=temp->dis;
	while(cin.fail()){
		cin.clear();
		cin.ignore();
		cout<<"DISCOUNT MUST BE NUMBER\n";
		cout<<"ENTER DRUG DISCOUNT IN % AGAIN: \n";
		cin>>temp->dis;
	pr.diss=temp->dis;
 }
	cout<<" please insert drug expiration day,month and year respectively"<<endl;
	cin>>temp->expired_day>>temp->expired_month>>temp->expired_year;
 pr.expired_day1=temp->expired_day;
 pr.expired_month1=temp->expired_month;
 pr.expired_year1=temp->expired_year;
	temp->next=start;
	start=temp;
	file.write((char*)&pr,sizeof(pr));
cout<<"DRUG HAS BEEN INSERTED SUCCESSFULLY\n\n"<<endl;
file.close();
	
}
void add_Drug_Any_Position( int pos)
{
	fstream file;
file.open("pharmacy",ios::out|ios::app);	
 int counter = 0;
 
node *temp=new node;
cout<<"please enter drug information"<<endl;
 cout<<" insert drug id"<<endl;
	cin>>temp->id;
	pr.Id=temp->id;
	while(cin.fail())
    {
		cin.clear();
		cin.ignore();
		cout<<"ID MUST BE NUMBER\n";
		cout<<"ENTER DRUG ID AGAIN :\n";
		cin>>temp->id;
		pr.Id=temp->id;
		}
		ifstream fer("pharmacy");//TO READ A FILE---IFSTREAM
while(fer.read((char*)&pr,sizeof(pr)))//BINARY FILE READING
    {
		if(temp->id==pr.Id)
		{
		cout<<"YOU INSERTED THIS ID BEFORE SO INSERT THE NEW ID\n\n";
			cin>>temp->id;
			pr.Id=temp->id;
		fer.close();
  }
 }
	
	cout<<" insert drug name"<<endl;
	cin>>temp->name;
	strcpy(pr.nam,temp->name);
	while(cin.fail())
    {
		cin.clear();
		cin.ignore();
		cout<<"NAME MUST BE LETTER\n";
		cout<<"ENTER DRUG NAME AGAIN:\n";
		cin>>temp->name;
		strcpy(pr.nam,temp->name);
 }
	cout<<" insert drug price"<<endl;
	cin>>temp->price;
	pr.pric=temp->price;
	while(cin.fail()){
		cin.clear();
		cin.ignore();
		cout<<"PRICE CAN NOT BE LETTER\n";
		cout<<"ENTER DRUG PRICE AGAIN :\n";
		cin>>temp->price;
	pr.pric=temp->price;
 }
	cout<<" how many drugs you want?"<<endl;
	cin>>temp->quant;
	pr.quantt=temp->quant;
	while(cin.fail())
    {
		cin.clear();
		cin.ignore();
		cout<<"QUANTITY MUST NOT BE LETTER\n";
		cout<<"ENTER THE QUANTITY  AGAIN:\n";
			cin>>temp->quant;
	pr.quantt=temp->quant;
    }
	cout<<" insert drug discount"<<endl;
	cin>>temp->dis;
	pr.diss=temp->dis;
	while(cin.fail()){
		cin.clear();
		cin.ignore();
		cout<<"DISCOUNT MUST BE NUMBER\n";
		cout<<"ENTER DRUG DISCOUNT IN % AGAIN: \n";
		cin>>temp->dis;
	pr.diss=temp->dis;
 }
	cout<<" please insert drug expiration day,month and year respectively"<<endl;
	cin>>temp->expired_day>>temp->expired_month>>temp->expired_year;
 pr.expired_day1=temp->expired_day;
 pr.expired_month1=temp->expired_month;
 pr.expired_year1=temp->expired_year;
struct node *s, *ptr;
 int i;
 s = start;
 while (s != NULL)
 {
 s = s->next;
 counter++;
 }
 if (pos == 1)
 {
 if (start == NULL)
 {
 start = temp;
 start->next = NULL;
 }
 else
 {
 ptr = start;
 start = temp;
 start->next = ptr;
 }
 }
 else if (pos > 1 && pos <= counter+1)
 {
 s = start;
 for (i = 1; i < pos; i++)
 {
 ptr = s;
 s = s->next;
 }
 ptr->next = temp;
 temp->next = s;
 }
 else
 {

 }
file.write((char*)&pr,sizeof(pr));
cout<<"DRUG HAS BEEN INSERTED SUCCESSFULLY\n\n"<<endl;
file.close();
}

void delete_start_node()
   { node *temp;
    if (start== NULL)
    {
    cout << "YOU DOESN'T INSERT TEMPORARY DATA!" << endl;
    }
    else
    {
     temp = start;
     start= start->next;
     delete temp;
     cout<<"DRUG HAS BEEN  DELETED SUCCESSFULLY";
     	}
   }
   void delete_end_node()
   { node *temp1, *temp2;
     if (start== NULL)
          cout << "YOU DOESN'T INSERT TEMPORARY DATA!!" << endl;
     else
        { temp1 = start;
          while (temp1->next != NULL)
             { temp2 = temp1;
               temp1 = temp1->next;
             }
          delete temp1;
          cout<<"DRUG HAS BEEN  DELETED SUCCESSFULLY";
          temp2->next= NULL;
        }
}

void delete_pos(int pos)
{
int i, counter = 0;
 if (start == NULL)
 {
 cout<<"YOU DOESN'T INSERT TEMPORARY DATA!"<<endl;
 }
 else{
 struct node *s, *ptr;
 s = start;
 if (pos == 1)
 {
 start = s->next;
delete s;
cout<<"DRUG HAS BEEN  DELETED SUCCESSFULLY";
 }
 else
 {
 while (s != NULL)
 {
 s = s->next;
 counter++;
 }
 if (pos > 0 && pos <= counter+1)
 {
 s = start;
 for (i = 1;i < pos;i++)
 {
 ptr = s;
 s = s->next;
 }
 ptr->next = s->next;
delete s;
cout<<"DRUG HAS BEEN  DELETED SUCCESSFULLY";
 }
 else
 {
 cout<<"Position out of range"<<endl;
 }
} 
}


}

void deletedrug()
{
cout<<"\t\tDRUG DELETION PAGE \n\n\n\n";
cout<<"INSERT YOUR PASSWORD TO DELETE DRUG\n\n";
cin>>aa;
password(aa);
if(co<=3)
{
cout<<"ENTER DRUG ID  TO BE DELETED \n";
int k;
cin>>k;
fstream file;
file.open("pharmacy",ios::in|ios::out);
fstream file2("temp.text",ios::out);
file.seekg(0,ios::beg);
while(file.read((char*)&pr,sizeof(pr)))
    {
	if(pr.Id!=k)
	  {
	  file2.write((char*)&pr,sizeof(pr));
	  }
	
	  file2.close();
file.close();
	  remove("pharmacy");
   rename("temp.text","pharmacy");
cout<<"DRUG HAS BEEN  DELETED SUCCESSFULLY"<<endl;

}
}
}
void searchdrug(){	
int k,a=0;
node*temp; 
cout<<"\t\tDRUG SEARCH PAGE \n\n\n\n";
fstream file("pharmacy",ios::in|ios::out);
cout<<"ENTER DRUG ID TO SEARCH:";
cin>>k;
//pr.Id=temp->id;
while(cin.fail())
    {
		cout<<"ENTER CORRECT ID TO SEARCH";
		cin.clear();
		cin.ignore();
		cout<<"ENTER DRUG ID TO SEARCH :";
      cin>>k;
}
cout<<"\n\n\tSEARCH RESULT FOR DRUG ID NO.:"<<k<<"\n\n\n\n";
while(file.read((char*)&pr,sizeof(pr)))
    {
		if(k==pr.Id)
		{
		a++;
	cout<<"------------------------------------------------------------------------------"<<endl;
cout<<"/////////////////////////////////////////////////////////////////////////////"<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;	
cout<<"DrugId  Drug name  Drug price  Drug quantity  Drug discount(%) Drug expired date"<<endl;	
cout<<pr.Id<<"\t"<<pr.nam<<"\t     ";
cout<<pr.pric<<"\t   "<<pr.quantt<<"\t          ";
cout<<pr.diss<<"%\t             ";
cout<<pr.expired_day1<<"/";
cout<<pr.expired_month1<<"/";
cout<<pr.expired_year1<<endl;
cout<<"------------------------------------------------------------------------------"<<endl;
cout<<"/////////////////////////////////////////////////////////////////////////////"<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;


		}
   }
if(a==0)
{
cout<<"DRUG WITH ID NO.: "<<pr.Id<<" NOT FOUND";
}
}



void modifydrug()
{
cout<<"\t\tDRUG MODIFICATION PAGE\n\n\n\n";
int number,check=0;;
cout<<"ENTER DRUG ID TO MODIFY\n";
cin>>number;
while(cin.fail())
    {
		cin.clear();
		cin.ignore();
		cout<<"ID MUST BE NUMBER";
		cout<<"ENTER DRUG ID TO MODIFY AGAIN\n";
		cin>>number;
 }
fstream file("pharmacy",ios::in|ios::out|ios::binary);
while(file.read((char*)&pr,sizeof(pr))&&check==0)//binary file reading syntax
{
		if(number==pr.Id)
            {
		check=1;
		cout<<"ENTER NEW ID OF THE DRUG TO MODIFY:";
		cin>>pr.Id;
while(cin.fail())
    {
		cin.clear();
        cin.ignore();
		cout<<"ID CAN NOT BE LETTER\n";
		cout<<"ENTER NEW ID OF THE DRUG TO MODIFY : ";
		cin>>pr.Id;
   }
 cout<<"ENTER NEW QUANTITY OF THE DRUG TO MODIFY: ";
 cin>>pr.quantt;
 while(cin.fail())
      {
		cin.clear();
		cin.ignore();
		cout<<"QUANTITY MUST BE WRITE BY NUMBER\n";
		cout<<"ENTER NEW QUANTITY OF THE DRUG TO MODIFY: ";
		cin>>pr.quantt;
        }
cout<<"ENTER NEW NAME OF THE DRUG TO MODIFY: ";
cin>>pr.nam;
while(cin.fail())
      {
		cin.clear();
		cin.ignore();
		cout<<"NAME MUST BE WRITE BY LETTER\n";
		cout<<"ENTER NEW NAME OF THE DRUG TO MODIFY: ";
		cin>>pr.nam;
        }
cout<<"ENTER NEW PRICE OF THE DRUG TO MODIFY: ";
cin>>pr.pric;
while(cin.fail())
   {
		cin.clear();
		cin.ignore();
		cout<<"PRICE CAN NOT BE LETTER\n";
		cout<<"ENTER NEW PRICE OF THE DRUG: ";
		cin>>pr.pric;
 }
cout<<"ENTER NEW DISCOUNT OF THE DRUG IN %: ";
cin>>pr.diss;
while(cin.fail())
  {
		cin.clear();
		cin.ignore();
		cout<<"ID CAN NOT BE LETTER\n";
		cout<<"ENTER NEW DISCOUNT OF THE DRUG IN %: ";
		cin>>pr.diss;
  }
  	cout<<" please insert the new drug expiration day,month and year respectively"<<endl;
	cin>>pr.expired_day1>>pr.expired_month1>>pr.expired_year1;
  
  
int pos=-1*(sizeof(pr));
file.seekp(pos,ios::cur);
file.write((char*)&pr,sizeof(pr));
cout<<"\nRECORD HAS BEEN MODIFIED SUCCESSFULLY\n\n\n";
	 }
}
file.close();
if(check==0)
cout<<"RECORD NOT FOUND";
admin();
}


void sortdrug()
{
	node*ptr,*cpt;
			
		
	ptr=start;
	while(ptr->next!=NULL)
	{

		
		cpt=ptr->next;
		while(cpt!=NULL)
		{
			if(ptr->id>cpt->id)
			{
				int temp=ptr->id;
				ptr->id=cpt->id;
				cpt->id=temp;
				
			int quantt=ptr->quant;
			ptr->quant=cpt->quant;
			cpt->quant=quantt;
			
			float diss=ptr->dis;
			ptr->dis=cpt->dis;
			cpt->dis=diss;
			
			float pric=ptr->price;
			ptr->price=cpt->price;
			cpt->price=pric;
		char nam[60];
		strcpy(nam, ptr->name);
	    strcpy(ptr->name, cpt->name);	
	    strcpy(cpt->name, nam);
		
			}
			cpt=cpt->next;
		}

		ptr=ptr->next;
	}
	cout<<"YOU SORT THE DRUG LIST BASED ON ID ORDER SUCCESSFULLY"<<endl;
	cout<<"YOU ONLY SORT THE CURRENT DATA & AFTER THE SORTING THE ORDER IS"<<endl;
	displaydrug1();

}

void tax()
{
	int in; 
fstream file("pharmacy",ios::in|ios::out);
cout<<"please insert the id of the drug to calculate the total tax"<<endl;
cin>>in;
while(cin.fail())
    {
		cin.clear();
		cin.ignore();
cout<<"please insert the id of the drug to calculate the total tax"<<endl;
cin>>in;
}
while(file.read((char*)&pr,sizeof(pr)))
    {
	 float ta;
	 float total=pr.pric;
	 if(in==pr.Id)
	 {
	if(total>=20000)
    {
        ta=(total*10/100);      cout<<"YOU MUST PAY "<<ta<<" BIRR FOR GOVERMENT"<<endl;
    }
    else if(total>=10000)
    {
        ta=(total*8/100);       cout<<"YOU MUST PAY "<<ta<<" BIRR FOR GOVERMENT"<<endl;
    }
    else if(total>=5000)
    {
        ta=(total*5/100);      cout<<"YOU MUST PAY "<<ta<<" BIRR FOR GOVERMENT"<<endl;
    }
    else if(total>=1000)
    {
        ta=(total*4/100);      cout<<"YOU MUST PAY "<<ta<<" BIRR FOR GOVERMENT"<<endl;
    }
    else if(total>=500)
    {
        ta=(total*3/100);      cout<<"YOU MUST PAY "<<ta<<" BIRR FOR GOVERMENT"<<endl;
    }
    else
    {
cout<<"FREE FROM TAX \n\n";
    }
    } }
    file.close();
 }


void displaydrug()
{
	cout<<"------------------------------------------------------------------------------"<<endl;
cout<<"/////////////////////////////////////////////////////////////////////////////"<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<"DrugId  Drug name  Drug price  Drug quantity  Drug discount(%) Drug expired date"<<endl;	

ifstream file("pharmacy",ios::in);
while(file.read((char*)&pr,sizeof(pr)))
{
cout<<pr.Id<<"\t"<<pr.nam<<"\t     ";
cout<<pr.pric<<"\t   "<<pr.quantt<<"\t          ";
cout<<pr.diss<<"%\t             ";
cout<<pr.expired_day1<<"/";
cout<<pr.expired_month1<<"/";
cout<<pr.expired_year1<<endl;
}
cout<<"------------------------------------------------------------------------------"<<endl;
cout<<"/////////////////////////////////////////////////////////////////////////////"<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;
file.close();	
}
void displaydrug1(){
	node*temp;
	temp=start;
	if(start==NULL)
	{
	cout<<"YOU HAVE NOT INSERT DATA HERE,CHECK FROM THE FILE"<<endl;
	}
	else
	{
	
cout<<"------------------------------------------------------------------------------"<<endl;
cout<<"/////////////////////////////////////////////////////////////////////////////"<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;

cout<<"DrugId  Drug name  Drug price  Drug quantity  Drug discount(%) Drug expired date"<<endl;	
		do{
cout<<temp->id<<"\t"<<temp->name<<"\t     ";
cout<<temp->price<<"\t   "<<temp->quant<<"\t          ";
cout<<temp->dis<<"%\t             ";
cout<<temp->expired_day<<"/";
cout<<temp->expired_month<<"/";
cout<<temp->expired_year<<endl;
		
		temp=temp->next;
		}
while(temp!=NULL);
cout<<"------------------------------------------------------------------------------"<<endl;
cout<<"//////////////////////////////////////////////////////////////////////////////"<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;

		}
}

void Eexit()
   {
  cout<<" EXITED\n\n";
  exit(0);
    }
void help()
{
cout<<" DEAR CUSTOMER! WHEN THERE IS A CONFUSION \n";
cout<<" YOU MUST LOOK THE INSTRUCTIONS ONE BY ONE \n";
cout<<"FRIST LOOK THE  MENU THEN SELECT YOUR CHOICE FROM THE LIST\n";
cout<<"\n\t MAIN MENU \n";
cout<<"\n\tA______________ADMINISTOR CASE SENSITIVE \n";
cout<<"\n\tB________________EXIT CASE SENSITIVE \n";
char ch;
cout<<"\n\n\t ENTER YOUR OPTION (A-B) \n\n";
		cin>>ch;
		  do{
		if(ch=='A')
            {
            	int t;
  cout<<"\tTHIS PAGE IS SECURED SO ENTER YOUR REGISTERED PASSWARED\n";
                cout<<"\tYOUR PASSWARED MUST BE FOUR DIGIT INTEGER NUMBER \n";          	
            cin>>t;
        password(t);//CALLING PASSWORD FUNCTION
         admin();//CALLING OF ADMIN FUNCTION
        break;
		  }


		 }while(ch!='B');
 }


int main(){
	
	
 introduction();//CALLING INTRODUCTION
char ch;
cout<<"\t****************************************************************\n";
cout<<"\t**\t                                                      **\n";
cout<<"\t**\t ADMINSTRATION PAGE                                   **\n";
cout<<"\t**\t @@@@@@@@@@@@@@@@@@@@2@@@@@@@                         **\n";
cout<<"\t**\t A______________ADMINISTOR CASE SENSITIVE             **\n";
cout<<"\t**\t B______________HELP CASE SENSITIVE                   **\n";
cout<<"\t**\t C______________EXIT FROM SYSTEM CASE SENSITIVE       **\n";
cout<<"\t**\t PLASE ENTER YOUR CHOICE(A-C)                         **\n";
cout<<"\t**\t                                                      **\n";
cout<<"\t****************************************************************\n";
    	cin>>ch;
		  do
		  {
		if(ch=='A')
            {   cout<<"\tTHIS PAGE IS SECURED SO ENTER YOUR REGISTERED PASSWARED\n";
                cout<<"\tYOUR PASSWARED MUST BE FOUR DIGIT INTEGER NUMBER \n";
        cin>>x;
           password(x);
		   if(co<=3)
		   {//CALLING PASSWORD FUNCTION
         admin();
		 }//CALLING OF ADMIN FUNCTION
        break;
		  }
		if(ch=='B')
		  {
		  	
            help();
           
            break;
		  }
		 }while(ch!='C');
		 return 0;
}	
	
	
	
	
	
	
	
	
	
	




