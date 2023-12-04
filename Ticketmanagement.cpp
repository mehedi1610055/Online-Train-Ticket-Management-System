#include <iostream>
#include <fstream>
#include <vector>
#include <string.h>


using namespace std ;
vector <string> name ;
vector <string> pass ;
vector <string > date;

int c=0, f1=0, f2=0,f3=0, f4=0 , q=0   ; 
int  des ;
 string dt; 
 
         
class login 
    
{

    public:
        
  
        
      void loginn()
    {
        string p,n; 
         
        
   
            string u_name , u_pass ;
            int i, flag =0 ;
             cout <<'\t'<<"***Bismillahir Rahmanir Rahim***"<< endl ;
            Peyal : 
            cout <<"Enter UserId and password for login: "<<endl;
            cout << "UserId: ";
            cin >> u_name;
            cout<<"Password: "; 
            cin >> u_pass; 
            ifstream file ;
            file.open("Informations.txt");
          
      
            
            if (!file.is_open() )
            {
                cout <<"Can't open file "<<endl ; 
                
            }
            else 
            {
                while (!file.eof()) 
                {
                    
                    file >> n  ;            
                    name.push_back(n); 
                    file >> p  ;         
                    pass.push_back( p );
            
                
            
                    }
        
             
          
                    
                    for ( int d=0 ; d<name.size()-1 ; d++)
                  {
                   if (u_name==name[d] && u_pass== pass[d] )
                    {
                        flag =1; 
                        break ; 
                     }
                     
             }
                
                if (flag ==1 )
                {
                    cout << "Login successful ! Welcome :) "<<endl ;
                    
                    f1=1 ; 
                }
              else 
               { int t ;
               cout << "Login failed ! Do you want to try again? Press 1)Yes 2)No "<<endl ;
               cin >> t ;
               if (t==1 ){
                          
                   goto Peyal; 
               }
              
               else 
               {
                  goto finish ; 
               }
                
                } 
            
             } 
         
         finish :
         cout << "Thank you "<< endl ;  
             
         } 
         
         void booking();
        void pay () ; 

};

void login :: booking () 
{
    cout << "Select your destinition "<<endl<< "1.Rajshahi"<< endl<<"2)Joydebpur"<<endl<< "3)Natore"<<endl<< "4)Kurigram "<<endl  ; 
      
      cin >> des;
       cout <<"Select your date "<< endl ;
       cout << "1)01/10/17"<< '\t' << "2)02/10/17"<< '\t' << "3)03/10/17"<< '\t' << "4)04/10/17"<< '\t' << "5)05/10/17"<< '\t' << "6)06/10/17"<< '\t' << "7)07/10/17"<<'\t'<< endl ; 
	    
cout << "8)08/10/17"<< '\t' << "9)09/10/17"<< '\t' << "10)10/10/17"<< '\t'<< "11)11/10/17"<< '\t'<< "12)12/10/17"<< '\t' << "13)13/10/17"<< '\t' << "14)14/10/17"<<'\t'<<endl ; 
cout << "15)15/10/17"<< '\t' << "16)16/10/17"<< '\t' << "17)17/10/17"<< '\t'<< "18)18/10/17"<< '\t'<< "19)19/10/17"<< '\t' << "20)20/10/17"<< '\t' << "21)21/10/17"<<'\t'<<endl ; 
cout << "22)22/10/17"<< '\t' << "23)23/10/17"<<'\t' << "24)24/10/17"<< '\t' << "25)25/10/17"<< '\t' << "26)26/10/17"<< '\t' << "27)27/10/17"<< '\t' << "28)28/10/17"<<'\t'<<endl  ; 
cout << "29)29/10/17"<< '\t' << "30)30/10/17"<< '\t' ; 

 cin>>dt ;
if (dt=="1")
 {

cout << "Select your time"<<endl << "1)7:40"<< endl << "2)2:40"<< endl << "3)8:40"<< endl ;
int t ;
cin >>t ; 
	for (int p  = 0 ; p < pass.size()-1 ; p++)
	{
		if (name[p]== "1")
		{
			q= p ;
			 
			break ; 
			
		}
	}

if (t==1)
{          cout << "Available seats are: "<<'\t';
              for(int i= q+1 ; i<22+q+2;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
                
            }
            
            if (t==2)
            {
                
             cout << "Available seats are: "<<'\t';
              for(int i= q+23 ; i<22+q+23;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
            	
			}
	if (t==3)
            
{

                 
             cout << "Available seats are: "<<'\t';
              for(int i= q+45 ; i<22+q+45;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
	
}
}

          
     

 else if (dt=="2")
 { 
cout << "Select your time"<<endl << "1)7:40"<< endl << "2)2:40"<< endl << "3)8:40"<< endl ;
int t ;
cin >>t ; 
	for (int p  = 0 ; p < pass.size()-1 ; p++)
	{
		if (name[p]== "2")
		{
			q= p ;
			 
			break ; 
			
		}
	}

if (t==1)
{
	  
         
                     
             cout << "Available seats are: "<<'\t';
              for(int i= q+1 ; i<22+q+2;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
                
            }
            
            if (t==2)
            {
               
         
                     
             cout << "Available seats are: "<<'\t';
              for(int i= q+23 ; i<22+q+23;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
            	
			}
	if (t==3)
            
{
cout << "Available seats are: "<<'\t';
              for(int i= q+45 ; i<22+q+45;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
	
}
     
 }
 else if (dt=="3")
 {
cout << "Select your time"<<endl << "1)7:40"<< endl << "2)2:40"<< endl << "3)8:40"<< endl ;
int t ;
cin >>t ; 
	for (int p  = 0 ; p < pass.size()-1 ; p++)
	{
		if (name[p]== "3")
		{
			q= p ;
			 
			break ; 
			
		}
	}

if (t==1)
{
     cout << "Available seats are: "<<'\t';
              for(int i= q+1 ; i<22+q+2;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
                
            }
            
            if (t==2)
            {
					          
             cout << "Available seats are: "<<'\t';
              for(int i= q+23 ; i<22+q+23;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
            	
			}
	if (t==3)
            
{
	   
          
             cout << "Available seats are: "<<'\t';
              for(int i= q+45 ; i<22+q+45;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
	
}
     
 }
 else if (dt=="4")
 {
cout << "Select your time"<<endl << "1)7:40"<< endl << "2)2:40"<< endl << "3)8:40"<< endl ;
int t ;
cin >>t ; 
	for (int p  = 0 ; p < pass.size()-1 ; p++)
	{
		if (name[p]== "4")
		{
			q= p ;
			 
			break ; 
			
		}
	}

if (t==1)
{
	              
             cout << "Available seats are: "<<'\t';
              for(int i= q+1 ; i<22+q+2;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
                
            }
            
            if (t==2)
            {
            
                     
             cout << "Available seats are: "<<'\t';
              for(int i= q+23 ; i<22+q+23;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
            	
			}
	if (t==3)
            
{
	  
         
                     
             cout << "Available seats are: "<<'\t';
              for(int i= q+45 ; i<22+q+45;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
	
}
     
 }
 else if (dt=="5")
 {
 
cout << "Select your time"<<endl << "1)7:40"<< endl << "2)2:40"<< endl << "3)8:40"<< endl ;
int t ;
cin >>t ; 
	for (int p  = 0 ; p < pass.size()-1 ; p++)
	{
		if (name[p]== "5")
		{
			q= p ;
			 
			break ; 
			
		}
	}

if (t==1)
{
	   
         
                     
             cout << "Available seats are: "<<'\t';
              for(int i= q+1 ; i<22+q+2;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
                
            }
            
            if (t==2)
            {
            	   
         
                     
             cout << "Available seats are: "<<'\t';
              for(int i= q+23 ; i<22+q+23;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
            	
			}
	if (t==3)
            
{
	   
         
                     
             cout << "Available seats are: "<<'\t';
              for(int i= q+45 ; i<22+q+45;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
	
}
     
 }
 else if (dt=="6")
 {
cout << "Select your time"<<endl << "1)7:40"<< endl << "2)2:40"<< endl << "3)8:40"<< endl ;
int t ;
cin >>t ; 
	for (int p  = 0 ; p < pass.size()-1 ; p++)
	{
		if (name[p]== "6")
		{
			q= p ;
			 
			break ; 
			
		}
	}

if (t==1)
{
	    
         
                     
             cout << "Available seats are: "<<'\t';
              for(int i= q+1 ; i<22+q+2;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
                
            }
            
            if (t==2)
            {
            	   
         
                     
             cout << "Available seats are: "<<'\t';
              for(int i= q+23 ; i<22+q+23;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
            	
			}
	if (t==3)
            
{
	  
         
                     
             cout << "Available seats are: "<<'\t';
              for(int i= q+45 ; i<22+q+45;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
	
}
     
 }
 else if (dt=="7")
 {
cout << "Select your time"<<endl << "1)7:40"<< endl << "2)2:40"<< endl << "3)8:40"<< endl ;
int t ;
cin >>t ; 
	for (int p  = 0 ; p < pass.size()-1 ; p++)
	{
		if (name[p]== "7")
		{
			q= p ;
			 
			break ; 
			
		}
	}

if (t==1)
{
	    
         
                     
             cout << "Available seats are: "<<'\t';
              for(int i= q+1 ; i<22+q+2;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
                
            }
            
            if (t==2)
            {
                
             cout << "Available seats are: "<<'\t';
              for(int i= q+23 ; i<22+q+23;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
            	
			}
	if (t==3)
            
{       cout << "Available seats are: "<<'\t';
              for(int i= q+45 ; i<22+q+45;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
	
}
     
 }
  else if (dt=="8")
 {
 
cout << "Select your time"<<endl << "1)7:40"<< endl << "2)2:40"<< endl << "3)8:40"<< endl ;
int t ;
cin >>t ; 
	for (int p  = 0 ; p < pass.size()-1 ; p++)
	{
		if (name[p]== "8")
		{
			q= p ;
			 
			break ; 
			
		}
	}

if (t==1)
{
        cout << "Available seats are: "<<'\t';
              for(int i= q+1 ; i<22+q+2;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
                
            }
            
            if (t==2)
            {
            cout << "Available seats are: "<<'\t';
              for(int i= q+23 ; i<22+q+23;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
            	
			}
	if (t==3)
            
{
     cout << "Available seats are: "<<'\t';
              for(int i= q+45 ; i<22+q+45;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
	
}
     
 }
  else if (dt=="9")
 {
cout << "Select your time"<<endl << "1)7:40"<< endl << "2)2:40"<< endl << "3)8:40"<< endl ;
int t ;
cin >>t ; 
	for (int p  = 0 ; p < pass.size()-1 ; p++)
	{
		if (name[p]== "9")
		{
			q= p ;
			 
			break ; 
			
		}
	}

if (t==1)
{    cout << "Available seats are: "<<'\t';
              for(int i= q+1 ; i<22+q+2;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
           }
            
            if (t==2)
            {
            	
         
                     
             cout << "Available seats are: "<<'\t';
              for(int i= q+23 ; i<22+q+23;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
            	
			}
	if (t==3)
            
{
 cout << "Available seats are: "<<'\t';
              for(int i= q+45 ; i<22+q+45;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
	
}
     
 }
  else if (dt=="10")
 {
 	 
cout << "Select your time"<<endl << "1)7:40"<< endl << "2)2:40"<< endl << "3)8:40"<< endl ;
int t ;
cin >>t ; 
	for (int p  = 0 ; p < pass.size()-1 ; p++)
	{
		if (name[p]== "10")
		{
			q= p ;
			 
			break ; 
			
		}
	}

if (t==1)
{
	   
         
                     
             cout << "Available seats are: "<<'\t';
              for(int i= q+1 ; i<22+q+2;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
                
            }
            
            if (t==2)
            {
            	
         
                     
             cout << "Available seats are: "<<'\t';
              for(int i= q+23 ; i<22+q+23;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
            	
			}
	if (t==3)
            
{
	
         
                     
             cout << "Available seats are: "<<'\t';
              for(int i= q+45 ; i<22+q+45;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
	
}
     
 }
  else if (dt=="11")
 {
 	 
cout << "Select your time"<<endl << "1)7:40"<< endl << "2)2:40"<< endl << "3)8:40"<< endl ;
int t ;
cin >>t ; 
	for (int p  = 0 ; p < pass.size()-1 ; p++)
	{
		if (name[p]== "11")
		{
			q= p ;
			 
			break ; 
			
		}
	}

if (t==1)
{       cout << "Available seats are: "<<'\t';
              for(int i= q+1 ; i<22+q+2;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
                
            }
            
            if (t==2)
            {
            
                     
             cout << "Available seats are: "<<'\t';
              for(int i= q+23 ; i<22+q+23;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
            	
			}
	if (t==3)
            
{
	     
                     
             cout << "Available seats are: "<<'\t';
              for(int i= q+45 ; i<22+q+45;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
	
}
     
 }
  else if (dt=="12")
 {
cout << "Select your time"<<endl << "1)7:40"<< endl << "2)2:40"<< endl << "3)8:40"<< endl ;
int t ;
cin >>t ; 
	for (int p  = 0 ; p < pass.size()-1 ; p++)
	{
		if (name[p]== "12")
		{
			q= p ;
			 
			break ; 
			
		}
	}

if (t==1)
{   
         
                     
             cout << "Available seats are: "<<'\t';
              for(int i= q+1 ; i<22+q+2;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
                
            }
            
            if (t==2)
            {  
         
                     
             cout << "Available seats are: "<<'\t';
              for(int i= q+23 ; i<22+q+23;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
            	
			}
	if (t==3)
            
{

                     
             cout << "Available seats are: "<<'\t';
              for(int i= q+45 ; i<22+q+45;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
	
}
     
 }
  else if (dt=="13")
 {
cout << "Select your time"<<endl << "1)7:40"<< endl << "2)2:40"<< endl << "3)8:40"<< endl ;
int t ;
cin >>t ; 
	for (int p  = 0 ; p < pass.size()-1 ; p++)
	{
		if (name[p]== "13")
		{
			q= p ;
			 
			break ; 
			
		}
	}

if (t==1)
{
  
         
                     
             cout << "Available seats are: "<<'\t';
              for(int i= q+1 ; i<22+q+2;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
                
            }
            
            if (t==2)
            {   
         
                     
             cout << "Available seats are: "<<'\t';
              for(int i= q+23 ; i<22+q+23;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
            	
			}
	if (t==3)
            
{   
         
                     
             cout << "Available seats are: "<<'\t';
              for(int i= q+45 ; i<22+q+45;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
	
}
     
 }
  else if (dt=="14")
 {
cout << "Select your time"<<endl << "1)7:40"<< endl << "2)2:40"<< endl << "3)8:40"<< endl ;
int t ;
cin >>t ; 
	for (int p  = 0 ; p < pass.size()-1 ; p++)
	{
		if (name[p]== "14")
		{
			q= p ;
			 
			break ; 
			
		}
	}

if (t==1)
{
	
                     
             cout << "Available seats are: "<<'\t';
              for(int i= q+1 ; i<22+q+2;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
                
            }
            
            if (t==2)
            {
            
                     
             cout << "Available seats are: "<<'\t';
              for(int i= q+23 ; i<22+q+23;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
            	
			}
	if (t==3)
            
{
	             
             cout << "Available seats are: "<<'\t';
              for(int i= q+45 ; i<22+q+45;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
	
}
     
 }
  else if (dt=="15")
 {
 
cout << "Select your time"<<endl << "1)7:40"<< endl << "2)2:40"<< endl << "3)8:40"<< endl ;
int t ;
cin >>t ; 
	for (int p  = 0 ; p < pass.size()-1 ; p++)
	{
		if (name[p]== "15")
		{
			q= p ;
			 
			break ; 
			
		}
	}

if (t==1)
{
	 
                     
             cout << "Available seats are: "<<'\t';
              for(int i= q+1 ; i<22+q+2;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
                
            }
            
            if (t==2)
            {
            
                     
             cout << "Available seats are: "<<'\t';
              for(int i= q+23 ; i<22+q+23;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
            	
			}
	if (t==3)
            
{
	               
             cout << "Available seats are: "<<'\t';
              for(int i= q+45 ; i<22+q+45;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
	
}
     
 }
  else if (dt=="16")
 {
cout << "Select your time"<<endl << "1)7:40"<< endl << "2)2:40"<< endl << "3)8:40"<< endl ;
int t ;
cin >>t ; 
	for (int p  = 0 ; p < pass.size()-1 ; p++)
	{
		if (name[p]== "16")
		{
			q= p ;
			 
			break ; 
			
		}
	}

if (t==1)
{
	              
             cout << "Available seats are: "<<'\t';
              for(int i= q+1 ; i<22+q+2;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
                
            }
            
            if (t==2)
            {
            	   
             cout << "Available seats are: "<<'\t';
              for(int i= q+23 ; i<22+q+23;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
            	
			}
	if (t==3)
            
{

                     
             cout << "Available seats are: "<<'\t';
              for(int i= q+45 ; i<22+q+45;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
	
}
     
 }
  else if (dt=="17")
 {
 
cout << "Select your time"<<endl << "1)7:40"<< endl << "2)2:40"<< endl << "3)8:40"<< endl ;
int t ;
cin >>t ; 
	for (int p  = 0 ; p < pass.size()-1 ; p++)
	{
		if (name[p]== "17")
		{
			q= p ;
			 
			break ; 
			
		}
	}

if (t==1)
{
	             
             cout << "Available seats are: "<<'\t';
              for(int i= q+1 ; i<22+q+2;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
                
            }
            
            if (t==2)
            {
            
                     
             cout << "Available seats are: "<<'\t';
              for(int i= q+23 ; i<22+q+23;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
            	
			}
	if (t==3)
            
{
   
                     
             cout << "Available seats are: "<<'\t';
              for(int i= q+45 ; i<22+q+45;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
	
}
     
 }
  else if (dt=="18")
 {
 
cout << "Select your time"<<endl << "1)7:40"<< endl << "2)2:40"<< endl << "3)8:40"<< endl ;
int t ;
cin >>t ; 
	for (int p  = 0 ; p < pass.size()-1 ; p++)
	{
		if (name[p]== "18")
		{
			q= p ;
			 
			break ; 
			
		}
	}

if (t==1)
{               
             cout << "Available seats are: "<<'\t';
              for(int i= q+1 ; i<22+q+2;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
                
            }
            
            if (t==2)
            {    
             cout << "Available seats are: "<<'\t';
              for(int i= q+23 ; i<22+q+23;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
            	
			}
	if (t==3)
            
{               
             cout << "Available seats are: "<<'\t';
              for(int i= q+45 ; i<22+q+45;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
	
}
     
 }
  else if (dt=="18")
 {
  
 
cout << "Select your time"<<endl << "1)7:40"<< endl << "2)2:40"<< endl << "3)8:40"<< endl ;
int t ;
cin >>t ; 
	for (int p  = 0 ; p < pass.size()-1 ; p++)
	{
		if (name[p]== "18")
		{
			q= p ;
			 
			break ; 
			
		}
	}

if (t==1)
{              
             cout << "Available seats are: "<<'\t';
              for(int i= q+1 ; i<22+q+2;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
                
            }
            
            if (t==2)
            {      
             cout << "Available seats are: "<<'\t';
              for(int i= q+23 ; i<22+q+23;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
            	
			}
	if (t==3)
            
{               
             cout << "Available seats are: "<<'\t';
              for(int i= q+45 ; i<22+q+45;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
	
}
     
 }
  else if (dt=="19")
 {
 
cout << "Select your time"<<endl << "1)7:40"<< endl << "2)2:40"<< endl << "3)8:40"<< endl ;
int t ;
cin >>t ; 
	for (int p  = 0 ; p < pass.size()-1 ; p++)
	{
		if (name[p]== "19")
		{
			q= p ;
			 
			break ; 
			
		}
	}

if (t==1)
{        cout << "Available seats are: "<<'\t';
              for(int i= q+1 ; i<22+q+2;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
                
            }
            
            if (t==2)
            {     
             cout << "Available seats are: "<<'\t';
              for(int i= q+23 ; i<22+q+23;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
            	
			}
	if (t==3)
            
{         cout << "Available seats are: "<<'\t';
              for(int i= q+45 ; i<22+q+45;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
	
}
     
 }
  else if (dt=="20")
 {
cout << "Select your time"<<endl << "1)7:40"<< endl << "2)2:40"<< endl << "3)8:40"<< endl ;
int t ;
cin >>t ; 
	for (int p  = 0 ; p < pass.size()-1 ; p++)
	{
		if (name[p]== "20")
		{
			q= p ;
			 
			break ; 
			
		}
	}

if (t==1)
{        cout << "Available seats are: "<<'\t';
              for(int i= q+1 ; i<22+q+2;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
                
            }
            
            if (t==2)
            {     
             cout << "Available seats are: "<<'\t';
              for(int i= q+23 ; i<22+q+23;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
            	
			}
	if (t==3)
            
{        cout << "Available seats are: "<<'\t';
              for(int i= q+45 ; i<22+q+45;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
	
}
     
 }
  else if (dt=="21")
 {
 
cout << "Select your time"<<endl << "1)7:40"<< endl << "2)2:40"<< endl << "3)8:40"<< endl ;
int t ;
cin >>t ; 
	for (int p  = 0 ; p < pass.size()-1 ; p++)
	{
		if (name[p]== "21")
		{
			q= p ;
			 
			break ; 
			
		}
	}

if (t==1)
{        cout << "Available seats are: "<<'\t';
              for(int i= q+1 ; i<22+q+2;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
                
            }
            
            if (t==2)
            {    
             cout << "Available seats are: "<<'\t';
              for(int i= q+23 ; i<22+q+23;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
            	
			}
	if (t==3)
            
{        cout << "Available seats are: "<<'\t';
              for(int i= q+45 ; i<22+q+45;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
	
}
     
 }
  else if (dt=="22")
 {
 
cout << "Select your time"<<endl << "1)7:40"<< endl << "2)2:40"<< endl << "3)8:40"<< endl ;
int t ;
cin >>t ; 
	for (int p  = 0 ; p < pass.size()-1 ; p++)
	{
		if (name[p]== "22")
		{
			q= p ;
			 
			break ; 
			
		}
	}

if (t==1)
{         cout << "Available seats are: "<<'\t';
              for(int i= q+1 ; i<22+q+2;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
                
            }
            
            if (t==2)
            {      
             cout << "Available seats are: "<<'\t';
              for(int i= q+23 ; i<22+q+23;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
            	
			}
	if (t==3)
            
{        cout << "Available seats are: "<<'\t';
              for(int i= q+45 ; i<22+q+45;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
	
}
     
 }
  else if (dt=="23")
 {
 	 
 
cout << "Select your time"<<endl << "1)7:40"<< endl << "2)2:40"<< endl << "3)8:40"<< endl ;
int t ;
cin >>t ; 
	for (int p  = 0 ; p < pass.size()-1 ; p++)
	{
		if (name[p]== "23")
		{
			q= p ;
			 
			break ; 
			
		}
	}

if (t==1)
{                
             cout << "Available seats are: "<<'\t';
              for(int i= q+1 ; i<22+q+2;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
                
            }
            
            if (t==2)
            {      
             cout << "Available seats are: "<<'\t';
              for(int i= q+23 ; i<22+q+23;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
            	
			}
	if (t==3)
            
{        cout << "Available seats are: "<<'\t';
              for(int i= q+45 ; i<22+q+45;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
	
}
     
 }
  else if (dt=="24")
 {
 	
 
cout << "Select your time"<<endl << "1)7:40"<< endl << "2)2:40"<< endl << "3)8:40"<< endl ;
int t ;
cin >>t ; 
	for (int p  = 0 ; p < pass.size()-1 ; p++)
	{
		if (name[p]== "24")
		{
			q= p ;
			 
			break ; 
			
		}
	}

if (t==1)
{        cout << "Available seats are: "<<'\t';
              for(int i= q+1 ; i<22+q+2;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
                
            }
            
            if (t==2)
            {     
             cout << "Available seats are: "<<'\t';
              for(int i= q+23 ; i<22+q+23;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
            	
			}
	if (t==3)
            
{              
             cout << "Available seats are: "<<'\t';
              for(int i= q+45 ; i<22+q+45;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
	
}
     
 }
  else if (dt=="25")
 {

 
cout << "Select your time"<<endl << "1)7:40"<< endl << "2)2:40"<< endl << "3)8:40"<< endl ;
int t ;
cin >>t ; 
	for (int p  = 0 ; p < pass.size()-1 ; p++)
	{
		if (name[p]== "25")
		{
			q= p ;
			 
			break ; 
			
		}
	}

if (t==1)
{       cout << "Available seats are: "<<'\t';
              for(int i= q+1 ; i<22+q+2;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
                
            }
            
            if (t==2)
            {      
             cout << "Available seats are: "<<'\t';
              for(int i= q+23 ; i<22+q+23;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
            	
			}
	if (t==3)
            
{           cout << "Available seats are: "<<'\t';
              for(int i= q+45 ; i<22+q+45;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
	
}
     
 }
  else if (dt=="26")
 {
 	
 
cout << "Select your time"<<endl << "1)7:40"<< endl << "2)2:40"<< endl << "3)8:40"<< endl ;
int t ;
cin >>t ; 
	for (int p  = 0 ; p < pass.size()-1 ; p++)
	{
		if (name[p]== "26")
		{
			q= p ;
			 
			break ; 
			
		}
	}

if (t==1)
{     cout << "Available seats are: "<<'\t';
              for(int i= q+1 ; i<22+q+2;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
                
            }
            
            if (t==2)
            {     
             cout << "Available seats are: "<<'\t';
              for(int i= q+23 ; i<22+q+23;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
            	
			}
	if (t==3)
            
{     cout << "Available seats are: "<<'\t';
              for(int i= q+45 ; i<22+q+45;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
	
}
     
 }
  else if (dt=="27")
 {
 	
 
cout << "Select your time"<<endl << "1)7:40"<< endl << "2)2:40"<< endl << "3)8:40"<< endl ;
int t ;
cin >>t ; 
	for (int p  = 0 ; p < pass.size()-1 ; p++)
	{
		if (name[p]== "27")
		{
			q= p ;
			 
			break ; 
			
		}
	}

if (t==1)
{       cout << "Available seats are: "<<'\t';
              for(int i= q+1 ; i<22+q+2;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
                
            }
            
            if (t==2)
            {      
             cout << "Available seats are: "<<'\t';
              for(int i= q+23 ; i<22+q+23;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
            	
			}
	if (t==3)
            
{    cout << "Available seats are: "<<'\t';
              for(int i= q+45 ; i<22+q+45;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
	
}
     
 }
  else if (dt=="28")
 {
    
 
cout << "Select your time"<<endl << "1)7:40"<< endl << "2)2:40"<< endl << "3)8:40"<< endl ;
int t ;
cin >>t ; 
	for (int p  = 0 ; p < pass.size()-1 ; p++)
	{
		if (name[p]== "28")
		{
			q= p ;
			 
			break ; 
			
		}
	}

if (t==1)
{       cout << "Available seats are: "<<'\t';
              for(int i= q+1 ; i<22+q+2;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
                
            }
            
            if (t==2)
            {       
             cout << "Available seats are: "<<'\t';
              for(int i= q+23 ; i<22+q+23;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
            	
			}
	if (t==3)
            
{   cout << "Available seats are: "<<'\t';
              for(int i= q+45 ; i<22+q+45;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
	
} 
 }
  else if (dt=="29")
 {
    
 
cout << "Select your time"<<endl << "1)7:40"<< endl << "2)2:40"<< endl << "3)8:40"<< endl ;
int t ;
cin >>t ; 
	for (int p  = 0 ; p < pass.size()-1 ; p++)
	{
		if (name[p]== "29")
		{
			q= p ;
			 
			break ; 
			
		}
	}

if (t==1)
{       cout << "Available seats are: "<<'\t';
              for(int i= q+1 ; i<22+q+2;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
                
            }
            
            if (t==2)
            {       
             cout << "Available seats are: "<<'\t';
              for(int i= q+23 ; i<22+q+23;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
            	
			}
	if (t==3)
            
{       cout << "Available seats are: "<<'\t';
              for(int i= q+45 ; i<22+q+45;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
	
}
 }
  else if (dt=="30")
 {
  
 
cout << "Select your time"<<endl << "1)7:40"<< endl << "2)2:40"<< endl << "3)8:40"<< endl ;
int t ;
cin >>t ; 
	for (int p  = 0 ; p < pass.size()-1 ; p++)
	{
		if (name[p]== "30")
		{
			q= p ;
			 
			break ; 
			
		}
	}

if (t==1)
{      cout << "Available seats are: "<<'\t';
              for(int i= q+1 ; i<22+q+2;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
                
            }
            
            if (t==2)
            {       
             cout << "Available seats are: "<<'\t';
              for(int i= q+23 ; i<22+q+23;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
            	
			}
	if (t==3)
            
{     cout << "Available seats are: "<<'\t';
              for(int i= q+45 ; i<22+q+45;  i++)
              {
                  if (pass [i]== "0" )
             
           {
               cout << name.at(i)<< '\t'  ;    
             
           }
              }
	
}
 }
 else 
 {
     cout << "Unavailable date" <<endl ; 
 }

            
            
     
        oooo:     
        cout <<endl<<  "Select  the seat you want to reserve "<< endl ;  
		//cout << "Q"<< q ;      
        char get[10];
         getchar () ; 
        cin>> get ;
        strlwr(get);
        
		
		  for(int d= q+1 ; d<22+q+2;  d++) 
           {
        
          if (name [d]== get && pass[d]!= "1" )
             
        {
            pass[d]="2"; 
             
            
        }
               
          }  
       cout <<"****Do you want to continue?Press 1)Yes 2)No****"<< endl ;    
        int a ;
       cin >> a;
       if (a==1)
            {
         goto oooo;   
            }
         else
         {
            cout << "***Thank you***  "<< endl ; 
           
            
         }
          ofstream reserved ;
            reserved.open("reservedSeats.txt");
    
	     cout<<"***Reserved seats for date "<<dt<<"/10/17 are: ***";
    
	reserved << "Booked seats for date  "<<dt<<"/10/17  are: ";
               
         for (int d=0 ; d< name.size()-1 ; d++ )
         {
             if (pass [d]== "2")
             
             
           {
               cout<< " "<< name.at(d)<<'\t'  ;    
               c++;
               
		 reserved<< name[d] << '\t'; 
			
             
           }
           
           
           
           f2=1;   
         }
      
         
     }
 
     
         void login::pay ()
         {
             llll: 
                        int u ;
                   string num, pin,username, h;
                   h="n" ; 
          cout << endl << "Enter your BIKASH number "<< endl ;
          
             cin >> num;
             
        for ( int d=0 ; d<pass.size()-1 ; d++)
            {
                if (name[d]==h && pass[d]==num )
                {
                    cout << "Enter PIN No: "<< endl ;
                    cin >> pin ; 
                    cout << "Enter User Name: "<< endl ;
                   
                    cin >> username ; 
                   f3=1;  
               for ( int d=0 ; d<pass.size()-1 ; d++) 
                     
                 if (name[d] == username && pass[d]==pin  )
                 {
                       
                       f4=1; 
                       
                    }
                            
                }
 
            }
            if (f3==1 && f4==1)
            {
            	if (des==1)
            	{
            		u = c* 340 ;
				}
				else if (des==2)
				{
					u = c* 320;
				}
				else if (des==3)
				{
					u = c* 310 ;
				}
				else if (des==4)
				{
				u = c* 400 ;	
				}

               cout << "Total amount of money is "<< u << "taka"<< endl ; 
                   
            }
            
            else {
                int k ;
                cout << "Wrong info.Try again? 1)Yes 2)No "<< endl ;
                cin >> k ;
                
                if (k==1 )
                {
                    goto llll; 
                }
                
                else
                {
                    cout <<"Thank You"<< endl ; 
                }
          	 }
        
            }
     
	 int  main()
{
    login log ;
    log.loginn() ; 
    if (f1==1)
    {
        log.booking();      
	}
     if (f2==1)
        {	 
		log.pay() ; 
        } 
}

