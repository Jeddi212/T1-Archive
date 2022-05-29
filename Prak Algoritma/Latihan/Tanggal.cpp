#include <conio.h>
#include <iostream>
#include <iomanip>
#include <dos.h>
using namespace std;
 
void kalender (long *hari, int n);
void tanggal(int *tgl,int *bln, int *thn);
void getdate (struct date *tanggal);
 
int main()
{
	int tgl, bln, thn;
	int tglc, blnc, thnc;
	int show=0;
	long hari=0;
 
	//mengambil data tanggal hari ini
	tanggal(&tgl, &bln, &thn);
	tglc=tgl;
	blnc=bln;
	thnc=thn;
 
	do
	{
		hari=0;
		clrscr();
		cout << endl;
		cout << endl;
		cout << "\t\t\t        Kalender" ;
		cout << endl << endl;
 
		//menampilkan tanggal
		cout << " Today : " << tglc << ' ';
		if (blnc==1)
			cout << "Januari";
		else if (blnc==2)
			cout << "Februari";
		else if (blnc==3)
			cout << "Maret";
		else if (blnc==4)
			cout << "April";
		else if (blnc==5)
			cout << "Mei";
		else if (blnc==6)
			cout << "Juni";
		else if(blnc==7)
			cout << "Juli" ;
		else if (blnc==8)
			cout << "Agustus";
		else if (blnc==9)
			cout << "September";
		else if (blnc==10)
			cout << "Oktober";
		else if (blnc==11)
			cout << "November";
		else if (blnc==12)
			cout << "Desember";
		cout << ' ' << thnc ;
 
		if (show)
		{
			cout << "\t\t\t                  <R>emove Menu" ;
		}
		else
			cout << "\t\t\t                  <S>how Menu" ;
 
		cout << endl << endl;
		cout << "\t\t              " << setw(9);
 
		if (bln==1)
			cout << "Januari";
		else if (bln==2)
			cout << "Februari";
		else if (bln==3)
			cout << "Maret";
		else if (bln==4)
			cout << "April";
		else if (bln==5)
			cout << "Mei";
		else if (bln==6)
			cout << "Juni";
		else if(bln==7)
			cout << "Juli" ;
		else if (bln==8)
			cout << "Agustus";
		else if (bln==9)
			cout << "September";
		else if (bln==10)
			cout << "Oktober";
		else if (bln==11)
			cout << "November";
		else if (bln==12)
			cout << "Desember";
		cout << ' ' << thn ;
		cout << endl << endl ;
 
		//menghitung banyak hari dari tanggal 1 januari 1900 sampai tanggal sekarang
		for (int i=1900 ; i<thn ; i++)
		{
			if (i%4==0)
				hari+=366;
			else
				hari+=365;
		}
 
		for (i=1 ; i<bln ; i++)
		{
			if (i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
				hari+=31;
			else if (i==4 || i==6 || i==9 || i==11)
				hari+=30;
			else if (i==2 && thn%4==0)
				hari+=29;
			else
				hari+=28;
		}
 
		//menampilkan kalender
		i=bln;
		if (i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
			kalender(&hari,31);
		else if (i==4 || i==6 || i==9 || i==11)
			kalender(&hari,30);
		else if (i==2 && thn%4==0)
			kalender(&hari,29);
		else
			kalender(&hari,28);
 
		//menampilkan menu
		if (show)
		{
			cout << endl << endl;
			cout << "        <U> Next Year       <K> Next Month       <G>Goto    <E>exit" << endl;
			cout << "        <J> Previous Year   <H> Previous Month   <A>About" << endl;
		}
		else
			;
 
		//menunggu penekanan tombol keyboard
		tombol=getch();
 
		//jika penekanan tombol telah dilakukan
		if (tombol=='u' || tombol=='U')
			thn++;
		else if (tombol=='s' || tombol=='S')
			show=1;
		else if (tombol=='r' || tombol=='R')
			show=0;
		else if (tombol=='h' || tombol=='H')
			if (bln==1)
			{
				bln=12;
				thn--;
			}
			else
				bln--;
		else if (tombol=='j' || tombol=='J')
			thn--;
		else if (tombol=='k' || tombol=='K')
			if (bln==12)
			{
				bln=1;
				thn++;
			}
			else
				bln++;
		else if (tombol=='e' || tombol=='E')
			goto exit;
		else if (tombol=='a' || tombol=='A')
		{
			clrscr();
			cout << endl << endl;
			cout << "               Program Kalender 1.04" << endl;
			cout << "     Duken Marga Turnip (duken_mt@yahoo.co.id)" << endl << endl;
			cout << "          compiled with Turbo C++ 1.01" << endl;
			cout << "           edited with Notepad++ 5.03" << endl;
			cout << "                1 Januari 2008" << endl;
			cout << " How to Use :" << endl;
			cout << " When you run this program, it will display the currently month in" << endl;
			cout << "  your computer. You can also see other month or year by pressing" << endl;
			cout << "  key like 'U' to see next year, 'H' to see prevoius month, etc. " << endl;
			cout << "  Use it with your right hand like using arrow keyboard ^.^" << endl << endl;
			cout << "\t\t" << "   U" << endl;
			cout << "\t\t" << "H  J  K" << endl << endl ;
			cout << "  You can also go to date you want in menu Go To and fill the month "  << endl;
			cout << "  and year you want to see." << endl;
			cout << "  This calendar can display the date from 1 January 1900 up to the future." << endl;
			cout << "  hehehe..." << endl << endl ;
			cout << "          Press any key to go back..";
			getch();
		}
		else if (tombol=='g' || tombol=='G')
		{
			clrscr();
			cout << endl << endl << endl;
			cout << "  GO TO..." << endl << endl;
			do
			{
				cout << "  Month : ";
				cin >> bln;
			} while (bln<1 || bln>12);
			do
			{
				cout << "  Year  : ";
				cin >> thn;
			} while (thn<1900);
 
		}
		else
			;
	} while (1);
 
	exit:
		return 0;
}
 
void kalender (long *hari, int n)
{
	cout << "     MINGGU     SENIN     SELASA     RABU     KAMIS     JUMAT     SABTU ";
	cout << endl << endl;
	for (int i=1 ; i<=n ; i++)
	{
		int angka=0;
		angka=*hari%7;
		if (i==1)
			cout << setw((angka+1)*10) << i;
		else
			cout << setw (10) << i ;
		(*hari)++;
		if (angka==6)
			cout << endl << endl;
	}
}
 
void tanggal (int *tgl,int *bln, int *thn)
{
	struct date tanggal;
	getdate(&tanggal);
	*tgl=(int) tanggal.da_day;
	*bln=(int) tanggal.da_mon;
	*thn=tanggal.da_year;
}
