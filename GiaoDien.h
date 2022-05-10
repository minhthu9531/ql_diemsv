const int x1 = 47, x2 = 0, y2 = 0, x3 = 0, y3 = 13, n = 10;
string menu[n] = {"01. Mo lop tin chi                                 ",
				  "02. In danh sach sinh vien dang ki                 ",
				  "03. Nhap sinh vien                                 ",
				  "04. In DSSV theo ma lop                            ",
				  "05. Nhap mon hoc                                   ",
				  "06. In danh sach mon hoc                           ",
				  "07. Dang ki lop tin chi                            ",
				  "08. Danh sach lop tin chi khong du dieu kien mo lop",
				  "09. Nhap diem                                      ",
				  "10. In bang diem                                   "};
void Normal() //Nen den, chu trang
{
	Color(15);
	BGColor(0);
}
void HighLight() //Nen hong, chu trang
{
	Color(15);
	BGColor(12);
}
void HighLight1() //Nen xanh, chu trang
{
	Color(15);
	BGColor(1);
}
void Setup() //Khoi tao trang thai ban dau
{
	resizeConsole(1400, 700);
}
void Outline() //Tao khung
{
	int i;
	GoToXY(0, 12); for (i = 0; i < 190; i++) cout << (char)196;
	for (i = 0; i < (n + 3); i++)
	{
		if (i == 12) { GoToXY(53, y2 + i); cout << (char)193; }
		else { GoToXY(53, y2  + i); cout << (char)179; }
	}
	// bang huong dan
	GoToXY(x3, y3 + 15); for (i = 0; i < 53; i++) cout << (char)196;
	GoToXY(x3, y3 + 27); for (i = 0; i < 53; i++) cout << (char)196;
	GoToXY(53, y2 + 28); cout << (char)191;
	GoToXY(53, y2 + 40); cout << (char)217;
	for (i = 0; i < 11; i++)
	{
		GoToXY(53, 29  + i); cout << (char)179;
	}	
}
void Title()
{
	GoToXY(80, 0);  cout << "<<<<<<QUAN LY DIEM SINH VIEN THEO HE TIN CHI>>>>>";
	GoToXY(150, 10);  cout << "NGUYEN TRUONG MINH THU - N18DCCN223";
	GoToXY(150, 11);  cout << "NGUYEN CHI THANG       - N17DCDT081";
}

int Menu() //Tao menu
{
	Normal();
	modifyCursor(1, false);
	int i, choose = 0;
	char kytu;
	GoToXY(x2 + 18, y2 + 1); cout << "MENU";
	for (i = 0; i < n; i++) { GoToXY(x2, y2 + 2 + i); cout << menu[i] << endl; }
	GoToXY(x2, y2 + 2);
	HighLight();
	cout << menu[choose];
	do
	{
		kytu = GetKey();
		switch (kytu)
		{
			case Up:	if (choose + 1 > 1)
			{
				Normal();
				GoToXY(x2, y2 + 2 + choose);
				cout << menu[choose];
				choose--;
				HighLight();
				GoToXY(x2, y2 + 2 + choose);
				cout << menu[choose];
			} break;
			case Down:	if (choose + 1 < n)
			{
				Normal();
				GoToXY(x2, y2 + 2 + choose);
				cout << menu[choose];
				choose++;
				HighLight();
				GoToXY(x2, y2 + 2 + choose);
				cout << menu[choose];
			} break;
		//	case ESC: return 12;
			case Enter: return choose + 1;
		}
	} while (1);
}
void Sign() //Huong dan
{
	Normal();
	int t = 15;
	GoToXY(x3 + 17, y3 + t); cout << "HUONG DAN";
	GoToXY(x3, y3 + t + 1); cout << "Di chuyen thanh sang\tMui ten len xuong";
	GoToXY(x3, y3 + t + 2); cout << "Chon\t\t\tEnter";
	GoToXY(x3, y3 + t +3); cout << "Thoat chuong trinh\tESC";
}
void DeleteSign() //Xoa bang huong dan
{
	Normal();
//	modifyCursor(1, false);
	int i, j;
	for (i = 0; i < 7; i++)
	{
		GoToXY(x3, y3 + 16 + i); // x3=0, y3=13
		for (j = 0; j < 53; j++) cout << " ";
	}
}
void DeleteScreen() //Xoa nguyen man hinh tru menu, huong dan, tieu de
{
	Normal();
//	modifyCursor(1, false);
	int i, j;
	for (i = 0; i < 25; i++)
	{
		GoToXY(55, 13 + i);
		for (j = 0; j < 60; j++) cout << "  ";
	}
}
void DeleteGocTrai() //Xoa man hinh goc trai duoi Menu
{
	Normal();
//	modifyCursor(1, false);
	int i, j;	
	for( i = 0; i < 15; i++)
	{
		GoToXY(x2, 13 + i);
		for( j = 0; j < 55; j++) cout << " ";
		
	}
}
void MuiTen() //Mui ten tu trai qua phai -->
{
	Color(14);
	BGColor(0);
	cout << (char)196 << (char)196 << ">";
}
void MuiTen2() //Mui ten tu phai qua trai <--
{
	Color(14);
	BGColor(0);
	cout << "<" << (char)196 << (char)196;
}

//Danh sach mon hoc
void BangMonHoc(int x, int y, int i) // x= 60, y=15, i=15 bang in dsmh
{
	Normal();
	int j,k;
	// ve khung
	GoToXY(x, y + 1); for (k = 0; k < 57; k++) cout << (char)196; // duong ngang
	GoToXY(x, y + 3); for (k = 0; k < 57; k++) cout << (char)196;
	GoToXY(x, y + 1); cout << (char)218; // goc vuong sang phai xuong duoi
	GoToXY(x, y + 2); cout << (char)179; // duong doc
	GoToXY(x, y + 3); cout << (char)195;// ba canh sang phai
	GoToXY(x + 57, y + 1); cout << (char)191;// goc vuong sang trai xuong duoi
	GoToXY(x + 57, y + 2); cout << (char)179;
	GoToXY(x + 57, y + 3); cout << (char)180;// ba canh sang trai
	for (j = 0; j < i; j++)
	{
		GoToXY(x, y + 4 + j); cout << (char)179; // duong doc
		GoToXY(x + 57, y + 4 + j); cout << (char)179;// duong doc
	}
	GoToXY(x, y + 4 + i); cout << (char)192; // goc vuong sang phai len tren	
	GoToXY(x + 1, y + 4 + i); for (k = 0; k < 57; k++) cout << (char)196;
	GoToXY(x + 57, y + 4 + i); cout << (char)217;// goc vuong sang trai len tren
	GoToXY(80,14); cout <<"____________________DANH SACH MON HOC____________________";
	// ve cot
	// cot 1
	int t = 13; // sua do rong cot tinh tu canh trai
	GoToXY(x + 1, y + 2); cout << "    MAMH";
	GoToXY(x + t, y + 1); cout << (char)194;// ba canhj xuong duoi
	GoToXY(x + t, y + 2); cout << (char)179;
	GoToXY(x + t, y + 3); cout << (char)197;// bon canh +
	for (j = 0; j < i; j++)
	{
		GoToXY(x + t, y + 4 + j); cout << (char)179; // duong doc
	}
	GoToXY(x + t, y + 4 + i); cout << (char)193;// ba canh len tren
	// cot 2
	t = 43; // sua do rong cot
	GoToXY(x + 14, y + 2); cout << "       TEN MON HOC ";
	GoToXY(x + t, y + 1); cout << (char)194;// ba canhj xuong duoi
	GoToXY(x + t, y + 2); cout << (char)179;
	GoToXY(x + t, y + 3); cout << (char)197;// bon canh +
	for (j = 0; j < i; j++)
	{
		GoToXY(x + t, y + 4 + j); cout << (char)179; // duong doc
	}
	GoToXY(x + t, y + 4 + i); cout << (char)193;// ba canh len tren
	// cot 3
	t = 50; // sua do rong cot
	GoToXY(x + 44, y + 2); cout << "STCLT";
	GoToXY(x + t, y + 1); cout << (char)194;// ba canhj xuong duoi
	GoToXY(x + t, y + 2); cout << (char)179;
	GoToXY(x + t, y + 3); cout << (char)197;// bon canh +
	for (j = 0; j < i; j++)
	{
		GoToXY(x + t, y + 4 + j); cout << (char)179; // duong doc
	}
	GoToXY(x + t, y + 4 + i); cout << (char)193;// ba canh len tren
	// cot 4
	GoToXY(x + 51, y + 2); cout << "STCTH";
}
void XoaBangMonHoc(int x, int y) // x = 60, y= 15 xoa bang in dsmh
{
	Normal();
	for(int i = 0; i < 15; i++)
	{
		GoToXY(x + 1, y + i + 4); cout << "        ";
		GoToXY(x + 14, y + i + 4); cout << "                           ";
		GoToXY(x + 44, y + i + 4); cout << "    ";
		GoToXY(x + 51, y + i + 4); cout << "    ";
	}
}
// 

int Search_infoLTC(DSLTC dsLopTinChi, lopTinChi temp) // ltc thu i có nk, hk, nhom, mamh
{
	for (int i = 0; i < dsLopTinChi.n; i++)
	{
		if( temp.nienKhoa == dsLopTinChi.dsLopTC[i]->nienKhoa && temp.hocki == dsLopTinChi.dsLopTC[i]->hocki 
			&& temp.nhom == dsLopTinChi.dsLopTC[i]->nhom && temp.maMonHoc == dsLopTinChi.dsLopTC[i]->maMonHoc)
		return i;
  	}
	return -1;
}
int Search_infoSV(DSSinhVien dsSinhVien, string info) // tim sv thu i co masv là info
{
	int k;
	for ( int i = 0 ; i < dsSinhVien.n ; i++)
	{
		k = info.compare(dsSinhVien.DSSV[i].maSV); /*	i=0: Hai chuoi co ma Ascii bang nhau.
											i<0: Chuoi thu nhat co ma Ascii nho hon chuoi thu hai.
											i>0: Chuoi thu nhat co ma Ascii lon hon chuoi thu hai.*/
  	    if ( k == 0) return i;
  	}
	return -1;
}
void BangThamSoSVDK(int x, int y) // x=0, y=13 bang tham so dsdk
{
 	int i;
	for(i = 0; i < 53; i++) {GoToXY(x + i, y); cout << (char)196;}
	for(i = 0; i < 53; i++) {GoToXY(x + i, y + 13); cout << (char)196;}
	for(i = 0; i < 13; i++) {GoToXY(x, y + i); cout << (char)179;}
	for(i = 0; i < 13; i++) {GoToXY(x + 53, y + i); cout << (char)179;}
	string MenuLTC[4] = {"Nien Khoa:",
						"Hoc Ki:    ",
						"Nhom:   	",
						"Ma Mon Hoc:"};
	for(int i = 0; i < 4; i++) { GoToXY(x + 1, y + 3 + i); cout << MenuLTC[i]; }
	GoToXY(x, y); cout << (char)218;
	GoToXY(x + 53, y); cout << (char)191;
	GoToXY(x, y + 13); cout << (char)192;
	GoToXY(x + 53, y + 13); cout << (char)217;
 }
void XoaBangThamSo(int x, int y)// x= 0, y=13 xoa bang tham so ds dk
{
	for (int i = 0; i < 4; i++)
	{
		GoToXY(x + 16, y + 3 + i); cout << "                 ";
	}	
} 
void BangSVDKNhapDiem(int x, int y, int i) // (x= 60, y=15, i=15) 
{
	Normal();
	int j,k;
	// ve khung
	GoToXY(x, y + 1); for (k = 0; k < 58; k++) cout << (char)196; // duong ngang
	GoToXY(x, y + 3); for (k = 0; k < 58; k++) cout << (char)196;
	GoToXY(x, y + 1); cout << (char)218; // goc vuong sang phai xuong duoi
	GoToXY(x, y + 2); cout << (char)179; // duong doc
	GoToXY(x, y + 3); cout << (char)195;// ba canh sang phai
	GoToXY(x + 58, y + 1); cout << (char)191;// goc vuong sang trai xuong duoi
	GoToXY(x + 58, y + 2); cout << (char)179;
	GoToXY(x + 58, y + 3); cout << (char)180;// ba canh sang trai
	for (j = 0; j < i; j++)
	{
		GoToXY(x, y + 4 + j); cout << (char)179; // duong doc
		GoToXY(x + 58, y + 4 + j); cout << (char)179;// duong doc
	}
	GoToXY(x, y + 4 + i); cout << (char)192; // goc vuong sang phai len tren	
	GoToXY(x + 1, y + 4 + i); for (k = 0; k < 58; k++) cout << (char)196;
	GoToXY(x + 58, y + 4 + i); cout << (char)217;// goc vuong sang trai len tren
	GoToXY(x + 4, y -1); cout << " __________DANH SACH SINH VIEN DANG KI LOP TIN CHI___________";
	// ve cot
	// cot 1
	int t = 15; // sua do rong cot tinh tu canh trai
	GoToXY(x + 1, y + 2); cout << "     MASV";
	GoToXY(x + t, y + 1); cout << (char)194;// ba canhj xuong duoi
	GoToXY(x + t, y + 2); cout << (char)179;
	GoToXY(x + t, y + 3); cout << (char)197;// bon canh +
	for (j = 0; j < i; j++)
	{
		GoToXY(x + t, y + 4 + j); cout << (char)179; // duong doc
	}
	GoToXY(x + t, y + 4 + i); cout << (char)193;// ba canh len tren
	// cot 2
	t = 50; // sua do rong cot
	GoToXY(x + 16, y + 2); cout << "            HO TEN  ";
	GoToXY(x + t, y + 1); cout << (char)194;// ba canhj xuong duoi
	GoToXY(x + t, y + 2); cout << (char)179;
	GoToXY(x + t, y + 3); cout << (char)197;// bon canh +
	for (j = 0; j < i; j++)
	{
		GoToXY(x + t, y + 4 + j); cout << (char)179; // duong doc
	}
	GoToXY(x + t, y + 4 + i); cout << (char)193;// ba canh len tren
	// cot 3
	GoToXY(x + 51, y + 2); cout << " DIEM";
}

void XoaBangSVDKNhapDiem(int x, int y) // (x = 65, y= 14) 
{
	Normal();
	for(int i = 0; i < 15; i++)
	{
		GoToXY(x + 1, y + i + 4); cout << "            ";
		GoToXY(x + 16, y + i + 4); cout << "                                ";
		GoToXY(x + 51, y + i + 4); cout << "     ";
	}
}
DKLTCPTR Search_infoDSDK(DSLTC m, DKLTCPTR p, int t, int i) // lây dia chi con tro de in qua trang
{  	
	int kt;
	p = m.dsLopTC[i]->DSDK;
	int	n = 0; // n = 0
	t = t - 1; //2->3 t = 2
	int sldk = m.dsLopTC[i]->SLDK; // vd 32
	if ( t * 15 > sldk) kt = sldk;
	else kt = t * 15; //kt = 30
	while(p != NULL)
	{
		if(p->info.trangThai == conDangKi) n++; 
		p = p->pNext;
		if (n == kt && p != NULL) return p;	
	}		
	return NULL;
}


