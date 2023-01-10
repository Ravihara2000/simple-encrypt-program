#include <iostream>
#include <cmath>
using namespace std;

int main()
{    
	int fnum, lnum,digits, swaap,FAD, COD,d, SAN;
	int cnt=0,inputt,afterrev = 0,y,u,m = 8,p=0;
	int revnum = 0,output=0,v=0,secu;
	
	int arr1[8];
	int x,q,rem = 0;
	
	
    cout << "Enter a Number  : ";
	cin>>inputt;
	
		cnt=(int)log10(inputt)+1;

    if(cnt>=2)
	{
		
		if(cnt<=8)
		{
			
		   if(cnt<4)
		   {
				lnum = inputt % 10;
				
				
				
				digits    = (int)log10(inputt);
				
				
				fnum = (int) (inputt / pow(10, digits));
				swaap  = lnum;
				
				swaap *= (int) round(pow(10, digits));
				
				swaap += inputt % ((int)round(pow(10, digits)));
				
					swaap -= lnum;
					swaap += fnum;
				
				cout<<"your transfered messege is  :\t"<<swaap;
				cout<<"\n";	
				
		   }
		
		   if(cnt >= 4)
		   {
			   
				
				
				for(int r =1;r <= cnt;r++)
				{
					y= inputt % 10;
					
					u =(y+r) % 10;
					
					afterrev = afterrev *10+u;
					inputt = inputt/10;
					
					
				}
				
				while(afterrev > 0) 
				{
				   revnum = revnum *10 + afterrev%10;
				   afterrev = afterrev/10;
				}
				cout<<"your transfered messege is  :\t"<<revnum<<endl;
				cout<<"\n";				
			   
		   } 

		}else
		{
			cout<<" Enter a number between 10 - 99999999\n";
		}
    }else{
		cout<<"Enter a number between 10 - 99999999\n";
	}
	if(cnt>=4){
		int r=0;
		while(r<1){
			cout<<"--Do you wish to put Extra protection \n enter 1 or don't want press any key--\n";
			
			cin>>secu;
			
			if(secu==1)
			{
				
				if(cnt==8)
				{
					
					for(int r=1;r<=8;r++)
					{
						
						arr1[8-r]=revnum%10;
						revnum=revnum/10;
					}
					swap(arr1[0],arr1[7]);
					
					swap(arr1[1],arr1[6]);
					swap(arr1[2],arr1[5]);
					
					swap(arr1[3],arr1[4]);
					
					
					for( int temp=0; temp < 8; temp++)
					{
						output*= 10;
						
						output+= arr1[temp];
					}
					
						cout<<"your transfered messege is   :\t"<<output<<endl;
						v++;break;
				}
				
				else
					
				{
					cout<<"Extra protection can put only for 8 digit Numbers \n";
					cout<<"your transfered messege is  :\t"<<revnum<<endl;
					
					cout<<"\n";	
					break;
					
				}
			}
			
			else
				
			{
					cout<<"--you avoided extra protectons --\n";
					
			}
			if(secu !=1)
			
			{
				break;
			}
		}
	}
	
	
	
	if(cnt <4 && cnt>= 2)
	{
		COD = swaap % 10;
		
		d    = (int)log10(swaap);
		
		FAD = (int) (swaap / pow(10, d));
		
			SAN = COD;
			SAN *= (int) round(pow(10, d));
			
			
			SAN += swaap % ((int)round(pow(10, d)));
			SAN -= COD;
			
			SAN += FAD;
				
		cout<<"Decoding messge is   :\t"<<SAN;
		cout<<"\n";	
	}
	
	if(cnt==8 && v==1)
	{
		int w=0;
		
		for(int r=1;r<=8;r++)
		
		{
			arr1[8-r]=output%10;
			output=output/10;
		}
		swap(arr1[0],arr1[7]);
		swap(arr1[1],arr1[6]);
		swap(arr1[2],arr1[5]);
		swap(arr1[3],arr1[4]);
		for( int temp=0; temp < 8; temp++)
		{
			w*=10;
			w+=arr1[temp];
		}
		cout<<"Decoding messge is\t  :"<<w<<endl;	
	}
	else if(cnt>=4)
	{
		
		int e=1;
		
		while(e<=cnt)
		
		{
			
			x=revnum%10;
			
			q=(x-e)%10;
			
			rem=rem*10+q;
			
			
			revnum=revnum%10;
			
			e++;
		}

		while(rem>0)
		{
			
			p=p*10+rem%10;
			
			rem=rem/10;
		}
		
		
		cout<<"Decoding messge is\t"<<p<<endl;
	}
	
    return 0;
	
}