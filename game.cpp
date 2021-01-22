#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>    
#include <graphics.h>
#include <windows.h>
#include <stdio.h >

#define uz 500   

using namespace std;

struct BuzDaglari
{
	int x;
	int y;	
};
	
struct BuzDaglari Koordinatlar[200];

struct kuyruk{
	int x_Koordinat[uz];
	int y_Koordinat[uz];
	int ilk=0;
	int es; // kuyruktaki eleman sayýsýný tutuyor; opsiyonel
} ky;

void baslangic()
{
	ky.es=0;
}
void ekle(int xx,int yy)
{

	ky.x_Koordinat[ky.es]=xx;
	ky.y_Koordinat[ky.es]=yy;
	
	ky.es++;

}

void cik()
{
	ky.ilk++;

}

void KalipBas()
{
	int k=0;
	setcolor(14);
		cleardevice();
		line(0,0,450,0); 
		line(500,0,500,400);
		line(0,400,700,400);
		for(k=0;k<300;k++)
		{
			putpixel(400,k,8);
			k+=3;
		}
		for(k=0;k<400;k++)
		{
			putpixel(k,300,8);
			k+=3;
		}
			putpixel(400,300,8);
}
void buzullari_BAS()
{
	int i=0;
	for(i=0;i<200;i++)
	{
			putpixel(Koordinatlar[i].x,Koordinatlar[i].y,1);
	}	

}


using namespace std;
int konumX,konumY;
int PUAN=300;
int durum_CARPMA=0;
int main() 
{  

baslangic();
initwindow(700,550);

int durum=0;
cleardevice();
setcolor(1);
moveto(238,75);
outtext("+ Giris Yap +");
moveto(238,105);
setcolor(14);
outtext("+ Cikis Yap +");
durum=0;

setcolor(14);
char tus;
while(true)
{

setcolor(14);
	tus= getch();


                   if(tus==72)	// ust
                   {
                   	
                	  	if(durum==0) //1.secili demektir
                   		{
							cleardevice();
							setcolor(14);
							moveto(238,75);
							outtext("+ Giris Yap +");
							moveto(238,105);
							setcolor(1);
							outtext("+ Cikis Yap +");
							durum=1;
						}
						else if(durum==1) //2.secili demektir
                   		{
							cleardevice();
							setcolor(1);
							moveto(238,75);
							outtext("+ Giris Yap +");
							moveto(238,105);
							setcolor(14);
							outtext("+ Cikis Yap +");
							durum=0;
						}
					
                   }
                   else if(tus==80)	//alt
                   {
                   	if(durum==0) //1.secili demektir
                   		{
							cleardevice();
							setcolor(14);
							moveto(238,75);
							outtext("+ Giris Yap +");
							moveto(238,105);
							setcolor(1);
							outtext("+ Cikis Yap +");
							durum=1;
						}
						else if(durum==1) //2.secili demektir
                   		{
							cleardevice();
							setcolor(1);
							moveto(238,75);
							outtext("+ Giris Yap +");
							moveto(238,105);
							setcolor(14);
							outtext("+ Cikis Yap +");
							durum=0;
						}
                   }
                	else if(tus==13)	//enter
                   {
				   		if(durum==0)
				   		{
				   			setcolor(14);
				   			cleardevice();
				   			line(0,0,450,0); // Dogru cizdirme
				   			line(500,0,500,400); // Dogru cizdirme
				   			line(0,400,700,400); // Dogru cizdirme
				   			break;
						}
						else if(durum==1)
						{
							exit(1);
						}
				   }
}
srand (time(NULL));
int limanX, limanY;
int arac=0;
arac=rand()%2;
if(arac==0)//arac 0 ise yatayda olacak
{
	limanY=0;
	limanX=rand()%400;
	rectangle(limanX,limanY,limanX+10,limanY+10);
	line(limanX+5,limanY,limanX+5,limanY+10); 


}
else // dikeyde olacak
{
	limanY=rand()%300;
	limanX=0;
	rectangle(limanX,limanY,limanX+10,limanY+10);

	line(limanX,limanY+5,limanX+10,limanY+5); 
}



int i=0;
for(i=0;i<300;i++)
{
	putpixel(400,i,8);
	i+=3;
}
for(i=0;i<400;i++)
{
	putpixel(i,300,8);
	i+=3;
}
	putpixel(400,300,8);


srand (time(NULL));
int sayi;
setcolor(5);
for(i=0;i<200;i++)
{
	sayi=rand()%400;
	Koordinatlar[i].x=sayi;
	sayi=rand()%300;
	Koordinatlar[i].y=sayi;
//	putpixel(Koordinatlar[i].x,Koordinatlar[i].y,1);
}
setcolor(15);

outtextxy(485,385,"*");
konumX=480;
konumY=385;
char girdi=NULL;
char *denek;
int kontrol=0; // kontrol 0 ise sýkýntý yok demektir
	int kontroller=0;
	char ssayi[10];
int ddeger=PUAN;
while((girdi!=27 || durum_CARPMA==3) && kontroller!=1)
{setcolor(15);
ddeger=PUAN;

	sprintf(ssayi,"%d",ddeger);
	outtextxy(610,140,ssayi);
	outtextxy(540,140,"Puan : ");

	outtextxy(240,450,"+ Bitir ve Geri Don +");
	outtextxy(260,470,"+ Tekrari Izle +");

			
	setcolor(14);

	if(arac==0)//arac 0 ise yatayda olacak
	{
		rectangle(limanX,limanY,limanX+10,limanY+10);
		line(limanX+5,limanY,limanX+5,limanY+10); 
	}
	else // dikeyde olacak
	{
		rectangle(limanX,limanY,limanX+10,limanY+10);
		line(limanX,limanY+5,limanX+10,limanY+5); 
	}
	girdi= getch();

	if(girdi==75)			// sol
	{
		
		konumX-=5;
		if(konumX<0)
			konumX+=5;
		else
		{
			
	
		for(i=0;i<200;i++)
		{
			if(Koordinatlar[i].x==konumX && Koordinatlar[i].y==konumY)
				kontrol=1;
			if(Koordinatlar[i].x==konumX && Koordinatlar[i].y+1==konumY)
				kontrol=1;
			if(Koordinatlar[i].x==konumX && Koordinatlar[i].y+2==konumY)
				kontrol=1;
				
			if(Koordinatlar[i].x+1==konumX && Koordinatlar[i].y==konumY)
				kontrol=1;
			if(Koordinatlar[i].x+1==konumX && Koordinatlar[i].y+1==konumY)
				kontrol=1;
			if(Koordinatlar[i].x+1==konumX && Koordinatlar[i].y+2==konumY)
				kontrol=1;
			
			
			if(Koordinatlar[i].x+2==konumX && Koordinatlar[i].y==konumY)
				kontrol=1;
			if(Koordinatlar[i].x+2==konumX && Koordinatlar[i].y+1==konumY)
				kontrol=1;
			if(Koordinatlar[i].x+2==konumX && Koordinatlar[i].y+2==konumY)
				kontrol=1;
		}
		if(kontrol==0)
		{
			KalipBas();
			outtextxy(konumX,konumY,"*");
			ekle(konumX,konumY);
			PUAN+=5;
		}
		else
		
		{
			durum_CARPMA++;
			if(durum_CARPMA==1)
			{
				PUAN-=30;
					ky.es-=3;
			}
					
			else if(durum_CARPMA==2)
			{
					PUAN-=70;
					ky.es-=5;
			}
			
			else if(durum_CARPMA==3)
			{
					PUAN-=200;
					break;	
			}
			KalipBas();
			konumX=ky.x_Koordinat[ky.es];
			konumY=ky.y_Koordinat[ky.es];
			outtextxy(konumX,konumY,"*");
			
				Sleep(1000);
				
		
			
		}
	
		kontrol=0;
			}
		
		
	}
	else if(girdi==77)		//sag
	{
		konumX+=5;
		
			if(konumX>490)
			konumX-=5;
			else
			{
				
			
	for(i=0;i<200;i++)
		{
			if(Koordinatlar[i].x==konumX && Koordinatlar[i].y==konumY)
				kontrol=1;
			if(Koordinatlar[i].x==konumX && Koordinatlar[i].y+1==konumY)
				kontrol=1;
			if(Koordinatlar[i].x==konumX && Koordinatlar[i].y+2==konumY)
				kontrol=1;
				
			if(Koordinatlar[i].x+1==konumX && Koordinatlar[i].y==konumY)
				kontrol=1;
			if(Koordinatlar[i].x+1==konumX && Koordinatlar[i].y+1==konumY)
				kontrol=1;
			if(Koordinatlar[i].x+1==konumX && Koordinatlar[i].y+2==konumY)
				kontrol=1;
			
			
			if(Koordinatlar[i].x+2==konumX && Koordinatlar[i].y==konumY)
				kontrol=1;
			if(Koordinatlar[i].x+2==konumX && Koordinatlar[i].y+1==konumY)
				kontrol=1;
			if(Koordinatlar[i].x+2==konumX && Koordinatlar[i].y+2==konumY)
				kontrol=1;
		}
		if(kontrol==0)
		{
			KalipBas();
			outtextxy(konumX,konumY,"*");
			ekle(konumX,konumY);
			PUAN+=2;
		}
		else
		{
			durum_CARPMA++;
			if(durum_CARPMA==1)
			{
				PUAN-=30;
					ky.es-=3;
			}
					
			else if(durum_CARPMA==2)
			{
					PUAN-=70;
					ky.es-=5;
			}
			
			else if(durum_CARPMA==3)
			{
					PUAN-=200;
					break;	
			}
			KalipBas();
			konumX=ky.x_Koordinat[ky.es];
			konumY=ky.y_Koordinat[ky.es];
			outtextxy(konumX,konumY,"*");
			Sleep(1000);
	
			
		}
	
		kontrol=0;
		}
	}	
	else if(girdi==80)		//alt
	{	
		konumY+=5;
			if(konumY>387)
			konumY-=5;
			
			else
			{
				
			
		for(i=0;i<200;i++)
		{if(Koordinatlar[i].x==konumX && Koordinatlar[i].y==konumY)
				kontrol=1;
			if(Koordinatlar[i].x==konumX && Koordinatlar[i].y+1==konumY)
				kontrol=1;
			if(Koordinatlar[i].x==konumX && Koordinatlar[i].y+2==konumY)
				kontrol=1;
				
			if(Koordinatlar[i].x+1==konumX && Koordinatlar[i].y==konumY)
				kontrol=1;
			if(Koordinatlar[i].x+1==konumX && Koordinatlar[i].y+1==konumY)
				kontrol=1;
			if(Koordinatlar[i].x+1==konumX && Koordinatlar[i].y+2==konumY)
				kontrol=1;
			
			
			if(Koordinatlar[i].x+2==konumX && Koordinatlar[i].y==konumY)
				kontrol=1;
			if(Koordinatlar[i].x+2==konumX && Koordinatlar[i].y+1==konumY)
				kontrol=1;
			if(Koordinatlar[i].x+2==konumX && Koordinatlar[i].y+2==konumY)
				kontrol=1;
				
		}
		if(kontrol==0)
		{
			KalipBas();
			outtextxy(konumX,konumY,"*");
			ekle(konumX,konumY);
			PUAN+=2;
		}
		else
		{durum_CARPMA++;
			if(durum_CARPMA==1)
			{
				PUAN-=30;
					ky.es-=3;
			}
					
			else if(durum_CARPMA==2)
			{
					PUAN-=70;
					ky.es-=5;
			}
			
			else if(durum_CARPMA==3)
			{
					PUAN-=200;
					break;	
			}
		
			KalipBas();
			konumX=ky.x_Koordinat[ky.es];
			konumY=ky.y_Koordinat[ky.es];
			outtextxy(konumX,konumY,"*");
		
				Sleep(1000);
			
		}
	
		kontrol=0;
		}
	}
	else if(girdi==72)		// ust
	{
		konumY-=5;
			if(konumY<0)
			konumY+=5;
			else
			{
				
			
		for(i=0;i<200;i++)
		{
			if(Koordinatlar[i].x==konumX && Koordinatlar[i].y==konumY)
				kontrol=1;
			if(Koordinatlar[i].x==konumX && Koordinatlar[i].y+1==konumY)
				kontrol=1;
			if(Koordinatlar[i].x==konumX && Koordinatlar[i].y+2==konumY)
				kontrol=1;
				
			if(Koordinatlar[i].x+1==konumX && Koordinatlar[i].y==konumY)
				kontrol=1;
			if(Koordinatlar[i].x+1==konumX && Koordinatlar[i].y+1==konumY)
				kontrol=1;
			if(Koordinatlar[i].x+1==konumX && Koordinatlar[i].y+2==konumY)
				kontrol=1;
			
			
			if(Koordinatlar[i].x+2==konumX && Koordinatlar[i].y==konumY)
				kontrol=1;
			if(Koordinatlar[i].x+2==konumX && Koordinatlar[i].y+1==konumY)
				kontrol=1;
			if(Koordinatlar[i].x+2==konumX && Koordinatlar[i].y+2==konumY)
				kontrol=1;
		}
		if(kontrol==0)
		{
			KalipBas();
			outtextxy(konumX,konumY,"*");
			ekle(konumX,konumY);
			PUAN+=2;
		}
		else
		{
			durum_CARPMA++;
			if(durum_CARPMA==1)
			{
				PUAN-=30;
					ky.es-=3;
			}
					
			else if(durum_CARPMA==2)
			{
					PUAN-=70;
					ky.es-=5;
			}
			
			else if(durum_CARPMA==3)
			{
					PUAN-=200;
					break;	
			}
		
			KalipBas();
			konumX=ky.x_Koordinat[ky.es];
			konumY=ky.y_Koordinat[ky.es];
			outtextxy(konumX,konumY,"*");
		
				Sleep(1000);
			
		}
	
		kontrol=0;
	}
		for(i=1;i<11;i++)
		{
			if((konumX==limanX+i && konumY==limanY+10 )||(konumX==limanX+10 && konumY==limanY+i ))
			{
				kontroller=1;
				break;
			}
		}
		for(i=1;i<11;i++)
		{
			if((konumX+i==limanX+i && konumY==limanY+10 )||(konumX+i==limanX+10 && konumY==limanY+i ))
			{
				kontroller=1;
				break;
			}
		}
		for(i=1;i<11;i++)
		{
			if((konumX==limanX+i && konumY+i==limanY+10 )||(konumX==limanX+10 && konumY+i==limanY+i ))
			{
				kontroller=1;
				break;
			}
		}
		for(i=1;i<11;i++)
		{
			if((konumX+i==limanX+i && konumY+i==limanY+10 )||(konumX+i==limanX+10 && konumY+i==limanY+i ))
			{
				kontroller=1;
				break;
			}
		}
}
}
int ctrl=0;
if(kontroller==1)
{
	ddeger=PUAN;

	sprintf(ssayi,"%d",ddeger);
	outtextxy(610,140,ssayi);
	outtextxy(540,140,"Puan : ");
		outtextxy(540,180,"Tebrikler");
		ctrl=1;
}


int sonx,sony;
sonx=konumX;
sony=konumY;
int alt_kontrol=0;
if(girdi==27||ctrl==1)//ESC ye basildiysa
{
	
char tus2;

while(true)
{
		
tus2= getch();

cleardevice();
setcolor(14);
KalipBas();
ddeger=PUAN;

	sprintf(ssayi,"%d",ddeger);
	outtextxy(610,140,ssayi);
	outtextxy(540,140,"Puan : ");
	if(kontroller==1)
outtextxy(530,180,"Tebrikler");

if(arac==0)//arac 0 ise yatayda olacak
{
	rectangle(limanX,limanY,limanX+10,limanY+10);
	line(limanX+5,limanY,limanX+5,limanY+10); 


}
else // dikeyde olacak
{
	rectangle(limanX,limanY,limanX+10,limanY+10);
	line(limanX,limanY+5,limanX+10,limanY+5); 
}

setcolor(15);

	outtextxy(540,140,"Puan : ");

	
	outtextxy(240,450,"+ Bitir ve Geri Don +");
	outtextxy(260,470,"+ Tekrari Izle +");
	

                   if(tus2==72)	// ust
                   {
                   	
                	  	if(alt_kontrol==0) //1.secili demektir
                   		{
							
							setcolor(15);
							outtextxy(240,450,"+ Bitir ve Geri Don +");
							setcolor(1);
							outtextxy(260,470,"+ Tekrari Izle +");
	
							alt_kontrol=1;
						}
						else if(alt_kontrol==1) //2.secili demektir
                   		{
							setcolor(1);
							outtextxy(240,450,"+ Bitir ve Geri Don +");
							setcolor(15);
							outtextxy(260,470,"+ Tekrari Izle +");
							alt_kontrol=0;
						}
					
                   }
                   else if(tus2==80)	//alt
                   {
                   	if(alt_kontrol==0) //1.secili demektir
                   		{
							setcolor(15);
							outtextxy(240,450,"+ Bitir ve Geri Don +");
							setcolor(1);
							outtextxy(260,470,"+ Tekrari Izle +");
							alt_kontrol=1;
						}
						else if(alt_kontrol==1) //2.secili demektir
                   		{
							setcolor(1);
							outtextxy(240,450,"+ Bitir ve Geri Don +");
							setcolor(15);
							outtextxy(260,470,"+ Tekrari Izle +");
							alt_kontrol=0;
						}
                   }
                	else if(tus2==13)	//enter
                   {
				   		if(alt_kontrol==1)
				   		{
							while(ky.es!=ky.ilk)
							{
								KalipBas();
								if(arac==0)//arac 0 ise yatayda olacak
								{
									rectangle(limanX,limanY,limanX+10,limanY+10);
									line(limanX+5,limanY,limanX+5,limanY+10); 
								
								
								}
								else // dikeyde olacak
								{
									rectangle(limanX,limanY,limanX+10,limanY+10);
									line(limanX,limanY+5,limanX+10,limanY+5); 
								}
								outtextxy(ky.x_Koordinat[ky.ilk],ky.y_Koordinat[ky.ilk],".");
								Sleep(100);
								cik() ;
						
							}	
								
						}
						else if(alt_kontrol==0)
						{
							exit(1);
						}
				   }
}
}
else if(durum_CARPMA==3)	// GAME OVER
{
		ddeger=PUAN;

	sprintf(ssayi,"%d",ddeger);
	outtextxy(610,140,ssayi);
	outtextxy(540,140,"Puan : ");
	outtextxy(515,180,"Oyunu Kaybettiniz");
	Sleep(5000);
	exit(1);
}

getchar();
return 0;  
}

