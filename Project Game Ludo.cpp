#include <iostream>     /*input output stream*/
#include <conio.h>      /*it is use for "getch" statment*/
#include <stdlib.h>     /*use for rendom number*/
#include <time.h>
#include <windows.h>    /*it is used for sleep function*/
using namespace std;
main()
{
	string name1,name2;
    cout<<"Please Enter player 1 name :";
    getline(cin,name1);
    cout<<"Please Enter player 2 name :";
    getline(cin,name2);
	cout<<"\n\t\tStart Game in few seconds\n\n";
	cout<<"\t\tGame Loading";
		for(int i=0;i<7;i++)
		{
			Sleep(300);   //use for time delay
			cout<<"<>";
		}
    int total = 0 , total2 = 0, c = 0, d = 0, a , b;
    while( total<=56|| total<=56)
    {
    
        cout<<"\n\n\t\t=== Now "<<name1<<" turn ====";
        cout<<"\n\nPlz roll a dice to press any key...";
        getch();       /*it stops the program untill user prss key*/
        srand(time(0));
        a=1+rand()%6;
        if(total==0 && a!=6)
        {
            cout<<"\n\nThe num is = "<<a;
            cout<<"\n\nThe Total = "<<total<<endl;
        }
        if(a==6 && c==0)
        {
            cout<<"\n\nThe num is = "<<a;
            c++;
        }
        if(c==1)       /*if above condition true then execute*/
        {
        	if(total==0)
        	{
        		cout<<"\nNow you are on track";
			}
            cout<<"\n\nPlz roll dice again...";
            getch();
            srand(time(0));
            a=1+rand()%6;
            cout<<"\n\nThe num is= "<<a;
            total=total+a;
            cout<<"\n\nThe Total = "<<total<<endl;
            c++;
            goto v;
        }
        if(c>=2)
        {
           while(a==6)
           {
                if(a==6)
                {
                    cout<<"\n\nThe num is = "<<a<<endl;
                    if(total2==total)
                    {
                    	cout<<"\n\t\t"<<name2<<" Kill You!!!";
                        total=0;
                        d=0;
                    } 
                    total=total+a;
                    if(total>56)//56
                    {
                        total=total-a;
                    }
                    if(total==56)//56
                    {
                        cout<<"\n\t\t"<<name1<<" Wins";
                        break;
                    }
                    cout<<"\n\nPlz roll the dice again";
                    getch();
                    a=1+rand()%6;
                    continue;
                }
                cout<<"\n\nThe num = "<<a<<endl;
                if(total2==total)
                {
                	cout<<"\n\t\t"<<name2<<" Kill You!!!";
                    total=0;
                    d=0;
                }
                total=total+a;
                if(total>56)//56 
                {
                    total=total-a;
                    cout<<"\n\n\t\tOppess!!!!\nYour num is greater so you can't enter in your Home";
                }
                cout<<"\n\nThe Total = "<<total;
                if(total==56)//56
                {
                	cout<<"\n\n\t\tGAME IS END"<<endl;
                    cout<<"\n\t\t"<<name1<<" Wins";
                    break;
                }
            }
            cout<<"\n\nThe num is= "<<a<<endl;
            if(  total2 == total)
            {
            	cout<<"\n\t\t"<<name2<<" Kill You!!!";
                total=0;
                d=0;
            }
            total= total+a;
            if(total>56)//56
            {
                cout<<"\n\n\t\tOppess!!!!\nYour num is greater so you can't enter in your Home";
                total=  total-a;
            }
            cout<<"\n\nThe total = "<<total<<endl;
            if(total==56)//56
            {
            	cout<<"\n\n\t\tGAME IS END"<<endl;
                cout<<"\n\t\t"<<name1<<" Wins";
                break;
            }
        }
        
        
        v: cout<<"\n\n\t\t=== Now "<<name2<<" turn ====";
        cout<<"\n\nPlz roll a dice to press any key...";
        getch();
        srand(time(0));
        b=1+rand()%6;
        if( total2==0 && b!=6)
        {
            cout<<"\n\nThe num is = "<<b;
            cout<<"\n\nThe total = "<<total2<<endl;
        }
        if(b==6 && d==0)
        { 
            cout<<"\n\nThe num is = "<<b;
            d++;
        }
        if(d==1)       /*if above condition true then execute*/
        {
        	if(total2==0)
        	{
			    cout<<"\nNow you are on track";
            }
			cout<<"\n\nPlz roll dice again....";
            getch();
            srand(time(0));
            b=1+rand()%6;
            cout<<"\n\nThe num is= "<<b;
            total2= total2+b;
            cout<<"\n\nThe  total = "<<total2<<endl;
            d++;
            continue;
        }
        if(d>=2)
        {
            while(b==6)
            {
                if(b==6)
                {
                    cout<<"\n\nThe num is = "<<b<<endl;
                    if(total2 == total)
                    {  
					    cout<<"\n\t\t"<<name1<<" Kill You!!!";  
                        total2=0;
                        c=0;
                    }
                    total2= total2+b;
                    if( total2>56)//56
                    {
                        total2= total2-b;
                    }
                    if( total2==56)//56
                    {
                        cout<<"\n\t\t"<<name2<<" Wins";
                        break;
                    }
                    cout<<"\n\nPlz roll the dice again....";
                    getch();
                    b=1+rand()%6;
                    continue;
                }    
                cout<<"\n\nThe num = "<<b<<endl;
                if( total2 == total)
                {
                	cout<<"\n\t\t"<<name1<<" Kill You!!!";
                    total2=0;
                    c=0;
                }
                total2= total2+b;
                if( total2>56)//56
                {
                    total2= total2-b;
                    cout<<"\n\n\t\tOppess!!!!\nYour num is greater so you can't enter in your Home";
                }
                cout<<"\n\nThe Total = "<< total2<<endl;
                if( total2==56)//56
                {
                	cout<<"\n\n\t\tGAME IS END"<<endl;
                    cout<<"\n\t\t"<<name2<<" Wins";
                    break;
                }
            }
            cout<<"\n\nThe num is= "<<b<<endl;
            if( total2== total)
            {
            	cout<<"\n\t\t"<<name1<<" Kill You!!!";
                total2=0;
                c=0;
            }  
            total2= total2+b;
            if( total2>56)//56
            {
                total2= total2-b;
                cout<<"\n\n\t\tOppess!!!!\nYour num is greater so you can't enter in your Home";
            }
            cout<<"\n\nThe Total = "<< total2<<endl;
            if( total2==56)//56
            {
            	cout<<"\n\n\t\tGAME IS END"<<endl;
                cout<<"\n\t\t"<<name2<<" Wins";
                break;
            }
        }
    }
getch();
}
