//__________________________________________GIAODIEN_________________________________________________
//-------------------------------------Danh sach lop TC----------------------------------------------
void BangLopTC(int x, int y, int i) // Bang in lop tin chi (60, 16, 15)
{
	Normal();
	int j,k;
	// ve khung
	GoToXY(x, y + 1); for (k = 0; k < 85; k++) cout << (char)196; // duong ngang
	GoToXY(x, y + 3); for (k = 0; k < 85; k++) cout << (char)196;
	GoToXY(x, y + 1); cout << (char)218; // goc vuong sang phai xuong duoi
	GoToXY(x, y + 2); cout << (char)179; // duong doc
	GoToXY(x, y + 3); cout << (char)195;// ba canh sang phai
	GoToXY(x + 85, y + 1); cout << (char)191;// goc vuong sang trai xuong duoi
	GoToXY(x + 85, y + 2); cout << (char)179;
	GoToXY(x + 85, y + 3); cout << (char)180;// ba canh sang trai
	for (j = 0; j < i; j++)
	{
		GoToXY(x, y + 4 + j); cout << (char)179; // duong doc
		GoToXY(x + 85, y + 4 + j); cout << (char)179;// duong doc
	}
	GoToXY(x, y + 4 + i); cout << (char)192; // goc vuong sang phai len tren	
	GoToXY(x + 1, y + 4 + i); for (k = 0; k < 85; k++) cout << (char)196;
	GoToXY(x + 85, y + 4 + i); cout << (char)217;// goc vuong sang trai len tren
	GoToXY(72, 13); cout << "____________________BANG LOP TIN CHI____________________";
	// ve cot
	// cot 1
	int t = 7; // sua do rong cot tinh tu canh trai
	GoToXY(x + 1, y + 2); cout << "MALOPTC";
	GoToXY(x + t, y + 1); cout << (char)194;// ba canhj xuong duoi
	GoToXY(x + t, y + 2); cout << (char)179;
	GoToXY(x + t, y + 3); cout << (char)197;// bon canh +
	for (j = 0; j < i; j++)
	{
		GoToXY(x + t, y + 4 + j); cout << (char)179; // duong doc
	}
	GoToXY(x + t, y + 4 + i); cout << (char)193;// ba canh len tren
	// cot 2
	t = 17; // sua do rong cot
	GoToXY(x + 8, y + 2); cout << "  MAMH";
	GoToXY(x + t, y + 1); cout << (char)194;// ba canhj xuong duoi
	GoToXY(x + t, y + 2); cout << (char)179;
	GoToXY(x + t, y + 3); cout << (char)197;// bon canh +
	for (j = 0; j < i; j++)
	{
		GoToXY(x + t, y + 4 + j); cout << (char)179; // duong doc
	}
	GoToXY(x + t, y + 4 + i); cout << (char)193;// ba canh len tren
	// cot 3
	t = 47; // sua do rong cot
	GoToXY(x + 18, y + 2); cout << "       TEN MON HOC ";
	GoToXY(x + t, y + 1); cout << (char)194;// ba canhj xuong duoi
	GoToXY(x + t, y + 2); cout << (char)179;
	GoToXY(x + t, y + 3); cout << (char)197;// bon canh +
	for (j = 0; j < i; j++)
	{
		GoToXY(x + t, y + 4 + j); cout << (char)179; // duong doc
	}
	GoToXY(x + t, y + 4 + i); cout << (char)193;// ba canh len tren
//	// cot 4
//	t = 57; // sua do rong cot
//	GoToXY(x + 48, y + 2); cout << "NIEN KHOA";
//	GoToXY(x + t, y + 1); cout << (char)194;// ba canhj xuong duoi
//	GoToXY(x + t, y + 2); cout << (char)179;
//	GoToXY(x + t, y + 3); cout << (char)197;// bon canh +
//	for (j = 0; j < i; j++)
//	{
//		GoToXY(x + t, y + 4 + j); cout << (char)179; // duong doc
//	}
//	GoToXY(x + t, y + 4 + i); cout << (char)193;// ba canh len tren
//	// cot 5
//	t = 64; // sua do rong cot
//	GoToXY(x + 58, y + 2); cout << "HOC KI";
//	GoToXY(x + t, y + 1); cout << (char)194;// ba canhj xuong duoi
//	GoToXY(x + t, y + 2); cout << (char)179;
//	GoToXY(x + t, y + 3); cout << (char)197;// bon canh +
//	for (j = 0; j < i; j++)
//	{
//		GoToXY(x + t, y + 4 + j); cout << (char)179; // duong doc
//	}
//	GoToXY(x + t, y + 4 + i); cout << (char)193;// ba canh len tren
	// cot 6
	t = 54; // sua do rong cot
	GoToXY(x + 48, y + 2); cout << " NHOM";
	GoToXY(x + t, y + 1); cout << (char)194;// ba canhj xuong duoi
	GoToXY(x + t, y + 2); cout << (char)179;
	GoToXY(x + t, y + 3); cout << (char)197;// bon canh +
	for (j = 0; j < i; j++)
	{
		GoToXY(x + t, y + 4 + j); cout << (char)179; // duong doc
	}
	GoToXY(x + t, y + 4 + i); cout << (char)193;// ba canh len tren
	// cot 7
	t = 61; // sua do rong cot
	GoToXY(x + 55, y + 2); cout << "SVMIN";
	GoToXY(x + t, y + 1); cout << (char)194;// ba canhj xuong duoi
	GoToXY(x + t, y + 2); cout << (char)179;
	GoToXY(x + t, y + 3); cout << (char)197;// bon canh +
	for (j = 0; j < i; j++)
	{
		GoToXY(x + t, y + 4 + j); cout << (char)179; // duong doc
	}
	GoToXY(x + t, y + 4 + i); cout << (char)193;// ba canh len tren
	// cot 8
	t = 68; // sua do rong cot
	GoToXY(x + 62, y + 2); cout << "SVMAX";
	GoToXY(x + t, y + 1); cout << (char)194;// ba canhj xuong duoi
	GoToXY(x + t, y + 2); cout << (char)179;
	GoToXY(x + t, y + 3); cout << (char)197;// bon canh +
	for (j = 0; j < i; j++)
	{
		GoToXY(x + t, y + 4 + j); cout << (char)179; // duong doc
	}
	GoToXY(x + t, y + 4 + i); cout << (char)193;// ba canh len tren
	// cot 9
	GoToXY(x + 69, y + 2); cout << "TRANG THAI LOP";
}
void XoaBangLopTC(int x , int y)// (x=60, y=15) Xoa bang in ltc
{
	Normal();
	for(int i = 0; i < 15; i++)
	{
		GoToXY(x - 2, y + i + 5); cout << "     ";
		GoToXY(x + 5, y + i + 5); cout << "        ";
		GoToXY(x + 16, y + i + 5); cout << "                          ";
//		GoToXY(x + 48, y + i + 4); cout << "         ";
//		GoToXY(x + 58, y + i + 4); cout << "      ";
		GoToXY(x + 46, y + i + 5); cout << "    ";
		GoToXY(x + 52, y + i + 5); cout << "     ";
		GoToXY(x + 59, y + i + 5); cout << "     ";
		GoToXY(x + 67, y + i + 5); cout << "             ";
	}
}
void BangThemLopTC(int x, int y) // (x=0, y=13) bang them, hieu chinh ltc
 {
 	int i;
	for(i = 0; i < 53; i++) {GoToXY(x + i, y); cout << (char)196;}
	for(i = 0; i < 53; i++) {GoToXY(x + i, y + 13); cout << (char)196;}
	for(i = 0; i < 13; i++) {GoToXY(x, y + i); cout << (char)179;}
	for(i = 0; i < 13; i++) {GoToXY(x + 53, y + i); cout << (char)179;}
	GoToXY(x, y); cout << (char)218;
	GoToXY(x + 53, y); cout << (char)191;
	GoToXY(x, y + 13); cout << (char)192;
	GoToXY(x + 53, y + 13); cout << (char)217;
 }
void XoaBangThemLopTC(int x, int y) // xoa bang them, hieu chinh ltc (0,13)
{
	Normal();
	for (int i = 0; i < 4;i++)
		GoToXY(x + 16, y + 3 + i); cout << "                ";	
}
//-------------------------------------Danh sach sv dki-----------------------------------------
void BangSVDK(int x, int y, int i) // (x= 60, y=15, i=15) bang in ds dk
{
	Normal();
	int j,k;
	// ve khung
	GoToXY(x, y + 1); for (k = 0; k < 50; k++) cout << (char)196; // duong ngang
	GoToXY(x, y + 3); for (k = 0; k < 50; k++) cout << (char)196;
	GoToXY(x, y + 1); cout << (char)218; // goc vuong sang phai xuong duoi
	GoToXY(x, y + 2); cout << (char)179; // duong doc
	GoToXY(x, y + 3); cout << (char)195;// ba canh sang phai
	GoToXY(x + 50, y + 1); cout << (char)191;// goc vuong sang trai xuong duoi
	GoToXY(x + 50, y + 2); cout << (char)179;
	GoToXY(x + 50, y + 3); cout << (char)180;// ba canh sang trai
	for (j = 0; j < i; j++)
	{
		GoToXY(x, y + 4 + j); cout << (char)179; // duong doc
		GoToXY(x + 50, y + 4 + j); cout << (char)179;// duong doc
	}
	GoToXY(x, y + 4 + i); cout << (char)192; // goc vuong sang phai len tren	
	GoToXY(x + 1, y + 4 + i); for (k = 0; k < 50; k++) cout << (char)196;
	GoToXY(x + 50, y + 4 + i); cout << (char)217;// goc vuong sang trai len tren
	GoToXY(75, 14); cout << " __________DANH SACH SINH VIEN DANG KI LOP TIN CHI___________";
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
	GoToXY(x + 16, y + 2); cout << "            HO TEN  ";
}
void XoaBangSVDK(int x, int y) // (x = 60, y= 15) xoa bang in dsdk
{
	Normal();
	for(int i = 0; i < 15; i++)
	{
		GoToXY(x + 2, y + i + 4); cout << "            ";
		GoToXY(x + 18, y + i + 4); cout << "                          ";
	}
}

//-----------------------------------------DSACHMONHOC----------------------------------

void BangThemMonHoc(int x, int y) // (0,13) bang them,hieu chinh mh 
{
	int i;
	for(i = 0; i < 53; i++) {GoToXY(x + i, y); cout << (char)196;}
	for(i = 0; i < 53; i++) {GoToXY(x + i, y + 10); cout << (char)196;}
	for(i = 0; i < 10; i++) {GoToXY(x, y + i); cout << (char)179;}
	for(i = 0; i < 10; i++) {GoToXY(x + 53, y + i); cout << (char)179;}
	GoToXY(x, y); cout << (char)218;
	GoToXY(x + 53, y); cout << (char)191;
	GoToXY(x, y + 10); cout << (char)192;
	GoToXY(x + 53, y + 10); cout << (char)217;
}
//------------------------------------DKLTC----------------------------------------------
void BangNhapMSV(int x, int y) // (65,14) bang nhap msv
{
	int i;
	for(i = 0; i < 30; i++) {GoToXY(x + i, y); cout << (char)196;}
	for(i = 0; i < 30; i++) {GoToXY(x + i, y + 4); cout << (char)196;}
	for(i = 0; i < 4; i++) {GoToXY(x, y + i); cout << (char)179;}
	for(i = 0; i < 4; i++) {GoToXY(x + 30, y + i); cout << (char)179;}
	GoToXY(x + 5, y + 1); cout << "__Moi ban nhap MASV__";
	GoToXY(x + 1,y + 2); cout << "MA SV: ";
	GoToXY(x, y); cout << (char)218;
	GoToXY(x + 30, y); cout << (char)191;
	GoToXY(x, y + 4); cout << (char)192;
	GoToXY(x + 30, y + 4); cout << (char)217;
}
void XoaBangNhapMSV(int x, int y)//(65,14) xoa bang nhap sv
{
	Normal();
	GoToXY(x + 8, y + 2); cout << "          ";		
}
void BangNhapNKHK (int x, int y) // 65,14 nhap nk hk
{
	int i;
	for(i = 0; i < 40; i++) {GoToXY(x + i, y); cout << (char)196;}
	for(i = 0; i < 40; i++) {GoToXY(x + i, y + 6); cout << (char)196;}
	for(i = 0; i < 6; i++) {GoToXY(x, y + i); cout << (char)179;}
	for(i = 0; i < 6; i++) {GoToXY(x + 40, y + i); cout << (char)179;}
	GoToXY(x + 4, y + 1); cout << "__Moi ban nhap NIENKHOA & HOCKI__";
	string MenuLTC[2] = {"Nien Khoa: ",
						"Hoc Ki:    "};
	for(int i = 0; i < 2; i++) { GoToXY(x + 1, y + 3 + i); cout << MenuLTC[i]; }
	GoToXY(x, y); cout << (char)218;
	GoToXY(x + 40, y); cout << (char)191;
	GoToXY(x, y + 6); cout << (char)192;
	GoToXY(x + 40, y + 6); cout << (char)217;
}
void XoaBangNhapNKHK(int x, int y) // (65,14) xoa bang nhap nk hk
{
	Normal();
	int i, j;	
	for( i = 3; i < 8; i++)
	{
		GoToXY(x + 12, y + i);
		for( j = 0; j < 45; j++ ) cout << " ";		
	}
}
void BangThongTinSV ( int x, int y) // (0,13) thong tin sv co msv
{
	int i;
	for(i = 0; i < 53; i++) {GoToXY(x + i, y); cout << (char)196;}
	for(i = 0; i < 53; i++) {GoToXY(x + i, y + 8); cout << (char)196;}
	for(i = 0; i < 8; i++) {GoToXY(x, y + i); cout << (char)179;}
	for(i = 0; i < 8; i++) {GoToXY(x + 53, y + i); cout << (char)179;}
	GoToXY(x + 15, y + 1); cout << "__Thong Tin SV__";
	GoToXY(x, y); cout << (char)218;
	GoToXY(x + 53, y); cout << (char)191;
	GoToXY(x, y + 8); cout << (char)192;
	GoToXY(x + 53, y + 8); cout << (char)217;
}
void BangLTCDaMo (int x, int y, int i)//60,15,15 bang in dsltc da mo
{
	Normal();
	int j,k;
	// ve khung
	GoToXY(x, y + 1); for (k = 0; k < 75; k++) cout << (char)196; // duong ngang
	GoToXY(x, y + 3); for (k = 0; k < 75; k++) cout << (char)196;
	GoToXY(x, y + 1); cout << (char)218; // goc vuong sang phai xuong duoi
	GoToXY(x, y + 2); cout << (char)179; // duong doc
	GoToXY(x, y + 3); cout << (char)195;// ba canh sang phai
	GoToXY(x + 75, y + 1); cout << (char)191;// goc vuong sang trai xuong duoi
	GoToXY(x + 75, y + 2); cout << (char)179;
	GoToXY(x + 75, y + 3); cout << (char)180;// ba canh sang trai
	for (j = 0; j < i; j++)
	{
		GoToXY(x, y + 4 + j); cout << (char)179; // duong doc
		GoToXY(x + 75, y + 4 + j); cout << (char)179;// duong doc
	}
	GoToXY(x, y + 4 + i); cout << (char)192; // goc vuong sang phai len tren	
	GoToXY(x + 1, y + 4 + i); for (k = 0; k < 75; k++) cout << (char)196;
	GoToXY(x + 75, y + 4 + i); cout << (char)217;// goc vuong sang trai len tren
	GoToXY(x + 4, y - 1); cout <<"____________________BANG LOP TIN CHI DA MO____________________";
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
	t = 51; // sua do rong cot
	GoToXY(x + 44, y + 2); cout << "NHOM";
	GoToXY(x + t, y + 1); cout << (char)194;// ba canhj xuong duoi
	GoToXY(x + t, y + 2); cout << (char)179;
	GoToXY(x + t, y + 3); cout << (char)197;// bon canh +
	for (j = 0; j < i; j++)
	{
		GoToXY(x + t, y + 4 + j); cout << (char)179; // duong doc
	}
	GoToXY(x + t, y + 4 + i); cout << (char)193;// ba canh len tren
	// cot 4
	t = 59; // sua do rong cot
	GoToXY(x + 52, y + 2); cout << "So SVDK";// 23
	GoToXY(x + t, y + 1); cout << (char)194;// ba canhj xuong duoi
	GoToXY(x + t, y + 2); cout << (char)179;
	GoToXY(x + t, y + 3); cout << (char)197;// bon canh +
	for (j = 0; j < i; j++)
	{
		GoToXY(x + t, y + 4 + j); cout << (char)179; // duong doc
	}
	GoToXY(x + t, y + 4 + i); cout << (char)193;// ba canh len tren
	// cot 5
	t = 67; // sua do rong cot
	GoToXY(x + 60, y + 2); cout << "So SLOT";// 23/100
	GoToXY(x + t, y + 1); cout << (char)194;// ba canhj xuong duoi
	GoToXY(x + t, y + 2); cout << (char)179;
	GoToXY(x + t, y + 3); cout << (char)197;// bon canh +
	for (j = 0; j < i; j++)
	{
		GoToXY(x + t, y + 4 + j); cout << (char)179; // duong doc
	}
	GoToXY(x + t, y + 4 + i); cout << (char)193;// ba canh len tren
	// cot 6
	GoToXY(x + 68, y + 2); cout << " Da DK";// 23/100
}
void XoaBangLTCDaMo(int x, int y) 
{
	Normal();
	for(int i = 0; i < 6; i++)
	{
		GoToXY(x + 1, y + i + 4); cout << "       ";
		GoToXY(x + 14, y + i + 4); cout << "                          ";
		GoToXY(x + 44, y + i + 4); cout << "       ";
		GoToXY(x + 52, y + i + 4); cout << "       ";
		GoToXY(x + 60, y + i + 4); cout << "       ";
		GoToXY(x + 68, y + i + 4); cout << "       ";
	}
}
void BangLTCDaDK (int x, int y, int i)
{
	Normal();
	int j,k;
	// ve khung
	GoToXY(x, y + 1); for (k = 0; k < 67; k++) cout << (char)196; // duong ngang
	GoToXY(x, y + 3); for (k = 0; k < 67; k++) cout << (char)196;
	GoToXY(x, y + 1); cout << (char)218; // goc vuong sang phai xuong duoi
	GoToXY(x, y + 2); cout << (char)179; // duong doc
	GoToXY(x, y + 3); cout << (char)195;// ba canh sang phai
	GoToXY(x + 67, y + 1); cout << (char)191;// goc vuong sang trai xuong duoi
	GoToXY(x + 67, y + 2); cout << (char)179;
	GoToXY(x + 67, y + 3); cout << (char)180;// ba canh sang trai
	
	for (j = 0; j < i; j++)
	{
		GoToXY(x, y + 4 + j); cout << (char)179; // duong doc
		GoToXY(x + 67, y + 4 + j); cout << (char)179;// duong doc
	}
	GoToXY(x, y + 4 + i); cout << (char)192; // goc vuong sang phai len tren	
	GoToXY(x + 1, y + 4 + i); for (k = 0; k < 67; k++) cout << (char)196;
	GoToXY(x + 67, y + 4 + i); cout << (char)217;// goc vuong sang trai len tren
	GoToXY(x + 4, y - 1 ); cout <<"____________________BANG LOP TIN CHI DA DK____________________";
	// ve cot
	// cot 1
	int t = 8; // sua do rong cot tinh tu canh trai
	GoToXY(x + 1, y + 2); cout << " STT";
	GoToXY(x + t, y + 1); cout << (char)194;// ba canhj xuong duoi
	GoToXY(x + t, y + 2); cout << (char)179;
	GoToXY(x + t, y + 3); cout << (char)197;// bon canh +
	for (j = 0; j < i; j++)
	{
		GoToXY(x + t, y + 4 + j); cout << (char)179; // duong doc
	}
	GoToXY(x + t, y + 4 + i); cout << (char)193;// ba canh len tren
	// cot 2
	t = 21; // sua do rong cot tinh tu canh trai
	GoToXY(x + 9, y + 2); cout << "    MAMH";
	GoToXY(x + t, y + 1); cout << (char)194;// ba canhj xuong duoi
	GoToXY(x + t, y + 2); cout << (char)179;
	GoToXY(x + t, y + 3); cout << (char)197;// bon canh +
	for (j = 0; j < i; j++)
	{
		GoToXY(x + t, y + 4 + j); cout << (char)179; // duong doc
	}
	GoToXY(x + t, y + 4 + i); cout << (char)193;// ba canh len tren
	// cot 2
	t = 51; // sua do rong cot
	GoToXY(x + 22, y + 2); cout << "       TEN MON HOC ";
	GoToXY(x + t, y + 1); cout << (char)194;// ba canhj xuong duoi
	GoToXY(x + t, y + 2); cout << (char)179;
	GoToXY(x + t, y + 3); cout << (char)197;// bon canh +
	for (j = 0; j < i; j++)
	{
		GoToXY(x + t, y + 4 + j); cout << (char)179; // duong doc
	}
	GoToXY(x + t, y + 4 + i); cout << (char)193;// ba canh len tren
	// cot 3
	t = 59; // sua do rong cot
	GoToXY(x + 52, y + 2); cout << "STCLT";
	GoToXY(x + t, y + 1); cout << (char)194;// ba canhj xuong duoi
	GoToXY(x + t, y + 2); cout << (char)179;
	GoToXY(x + t, y + 3); cout << (char)197;// bon canh +
	for (j = 0; j < i; j++)
	{
		GoToXY(x + t, y + 4 + j); cout << (char)179; // duong doc
	}
	GoToXY(x + t, y + 4 + i); cout << (char)193;// ba canh len tren
	// cot 4
	GoToXY(x + 60, y + 2); cout << "STCTH";
	
}
void XoaBangLTCDaDK(int x, int y)
{
	Normal();
	for(int i = 0; i < 6; i++)
	{
		GoToXY(x + 1, y + i + 4); cout << "     ";
		GoToXY(x + 9, y + i + 4); cout << "        ";
		GoToXY(x + 22, y + i + 4); cout << "                            ";
		GoToXY(x + 52, y + i + 4); cout << "       ";
		GoToXY(x + 60, y + i + 4); cout << "       ";
	}
}
//---------------------------------LTCKODUDKMO-------------------------------------------
void BangLTCKoDuDK (int x, int y, int i)//60,15,15
{
	Normal();
	int j,k;
	// ve khung
	GoToXY(x, y + 1); for (k = 0; k < 90; k++) cout << (char)196; // duong ngang
	GoToXY(x, y + 3); for (k = 0; k < 90; k++) cout << (char)196;
	GoToXY(x, y + 1); cout << (char)218; // goc vuong sang phai xuong duoi
	GoToXY(x, y + 2); cout << (char)179; // duong doc
	GoToXY(x, y + 3); cout << (char)195;// ba canh sang phai
	GoToXY(x + 90, y + 1); cout << (char)191;// goc vuong sang trai xuong duoi
	GoToXY(x + 90, y + 2); cout << (char)179;
	GoToXY(x + 90, y + 3); cout << (char)180;// ba canh sang trai
	for (j = 0; j < i; j++)
	{
		GoToXY(x, y + 4 + j); cout << (char)179; // duong doc
		GoToXY(x + 90, y + 4 + j); cout << (char)179;// duong doc
	}
	GoToXY(x, y + 4 + i); cout << (char)192; // goc vuong sang phai len tren	
	GoToXY(x + 1, y + 4 + i); for (k = 0; k < 90; k++) cout << (char)196;
	GoToXY(x + 90, y + 4 + i); cout << (char)217;// goc vuong sang trai len tren
	GoToXY(x + 4, y - 1); cout <<"___________BANG LOP TIN CHI KHONG DU DIEU KIEN MO LOP__________";
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
	t = 51; // sua do rong cot
	GoToXY(x + 44, y + 2); cout << "NHOM";
	GoToXY(x + t, y + 1); cout << (char)194;// ba canhj xuong duoi
	GoToXY(x + t, y + 2); cout << (char)179;
	GoToXY(x + t, y + 3); cout << (char)197;// bon canh +
	for (j = 0; j < i; j++)
	{
		GoToXY(x + t, y + 4 + j); cout << (char)179; // duong doc
	}
	GoToXY(x + t, y + 4 + i); cout << (char)193;// ba canh len tren
	// cot 4
	t = 59; // sua do rong cot
	GoToXY(x + 52, y + 2); cout << "SVMIN";// 23
	GoToXY(x + t, y + 1); cout << (char)194;// ba canhj xuong duoi
	GoToXY(x + t, y + 2); cout << (char)179;
	GoToXY(x + t, y + 3); cout << (char)197;// bon canh +
	for (j = 0; j < i; j++)
	{
		GoToXY(x + t, y + 4 + j); cout << (char)179; // duong doc
	}
	GoToXY(x + t, y + 4 + i); cout << (char)193;// ba canh len tren
	// cot 5
	t = 67;
	GoToXY(x + 60, y + 2); cout << "So SVDK";// 
	GoToXY(x + t, y + 1); cout << (char)194;// ba canhj xuong duoi
	GoToXY(x + t, y + 2); cout << (char)179;
	GoToXY(x + t, y + 3); cout << (char)197;// bon canh +
	for (j = 0; j < i; j++)
	{
		GoToXY(x + t, y + 4 + j); cout << (char)179; // duong doc
	}
	GoToXY(x + t, y + 4 + i); cout << (char)193;// ba canh len tren
	// cot 6
	GoToXY(x + 68, y + 2); cout << "Trang thai";
}
void XoaBangLTCKoDuDK(int x, int y)
{
	Normal();
	for(int i = 0; i < 15; i++)
	{
		GoToXY(x + 1, y + i + 4); cout << "       ";
		GoToXY(x + 14, y + i + 4); cout << "                          ";
		GoToXY(x + 44, y + i + 4); cout << "       ";
		GoToXY(x + 52, y + i + 4); cout << "       ";
		GoToXY(x + 60, y + i + 4); cout << "       ";
		GoToXY(x + 68, y + i + 4); cout << "            ";
	}
}
//-------------------------------------NHAPDIEM--------------------------------------

//-----------------------------------------HUONGDAN---------------------------------------
void HuongDanLopTC() //Huong dan lop tin chi
{
	DeleteSign();
	int t = 15;
	GoToXY(x3 + 17, y3 + t); cout << "HUONG DAN";	
	GoToXY(x3, y3 + t + 1); cout << "Them lop tin chi\t\tInsert";
	GoToXY(x3, y3 + t + 2); cout << "Xoa lop tin chi\t\t\tDelete";
	GoToXY(x3, y3 + t + 3); cout << "Hieu chinh lop tin chi\t\tEnter";
	GoToXY(x3, y3 + t + 4); cout << "Di chuyen mui ten\t\tMui ten len xuong";
	GoToXY(x3, y3 + t + 5); cout << "Qua trang\t\t\tMui ten trai phai";
	GoToXY(x3, y3 + t + 6); cout << "Luu \t\t\t\tF2";
	GoToXY(x3, y3 + t + 7); cout << "Thoat\t\t\t\tESC";
}
void HuongDanThemLopTC() //Huong dan lop tin chi
{
	DeleteSign();
	int t = 15;
	GoToXY(x3 + 17, y3 + t); cout << "HUONG DAN";
	GoToXY(x3, y3 + t + 1); cout << "In danh sach mon hoc\tF1";
	GoToXY(x3, y3 + t + 2); cout << "Luu \t\t\tF2";
	GoToXY(x3, y3 + t + 3); cout << "Thoat\t\t\tESC";
	GoToXY(x3, y3 + t + 4); cout << "Xuong dong\t\tEnter";
	GoToXY(x3, y3 + t + 5); cout << "Di chuyen mui ten\tMui ten len xuong";
}
void HuongDanSVDK() //Huong dan in sinh vien dki loptc
{
	Normal();
	int t = 15;
	GoToXY(x3 + 17, y3 + t); cout << "HUONG DAN";
	GoToXY(x3, y3 + t + 1); cout << "Di chuyen con tro\t\tMui ten len xuong";
	GoToXY(x3, y3 + t + 2); cout << "Qua trang\t\t\tMui ten trai phai";
	GoToXY(x3, y3 + t + 3); cout << "In danh sach sinh vien dang ki\tEnter";
	GoToXY(x3, y3 + t + 4); cout << "In danh sach mon hoc\t\tF1";
	GoToXY(x3, y3 + t + 5); cout << "Thoat\t\t\t\tESC";
}
void HuongDanMonHoc() //Huong dan danh sach mon hoc
{
	DeleteSign();
	int t = 15;
	GoToXY(x3 + 17, y3 + t ); cout << "HUONG DAN";	
	GoToXY(x3, y3 + t + 1); cout << "Them mon hoc\t\t\tInsert";
	GoToXY(x3, y3 + t + 2); cout << "Xoa mon hoc\t\t\tDelete";
	GoToXY(x3, y3 + t + 3); cout << "Hieu chinh mon hoc\t\tEnter";
	GoToXY(x3, y3 + t + 4); cout << "Di chuyen mui ten\t\tMui ten len xuong";
	GoToXY(x3, y3 + t + 5); cout << "Qua trang\t\t\tMui ten trai phai";
	GoToXY(x3, y3 + t + 6); cout << "Luu \t\t\t\tF2";
	GoToXY(x3, y3 + t + 7); cout << "Thoat\t\t\t\tESC";		
}
void HuongDanNhapMSV() //Huong dan nhap masv
{
	DeleteSign();
	int t = 15;
	GoToXY(x3 + 17, y3 + t ); cout << "HUONG DAN";	
	GoToXY(x3, y3 + t + 1); cout << "Tiep tuc\tEnter";
	GoToXY(x3, y3 + t + 2); cout << "Thoat\t\tESC";	
}
void HuongDanNhapNKHK() //Huong dan nhap nk hk
{
	DeleteSign();
	int t = 15;
	GoToXY(x3 + 17, y3 + t ); cout << "HUONG DAN";	
	GoToXY(x3, y3 + t + 1); cout << "In lop tin chi da mo\t\tEnter";
	GoToXY(x3, y3 + t + 2); cout << "Di chuyen con tro\t\tMui ten len xuong";
	GoToXY(x3, y3 + t + 3); cout << "Thoat\t\t\t\tESC";	
}
void HuongDanDKLopTC() //Huong dan dk lop tin chi
{
	DeleteSign();
	int t = 15;
	GoToXY(x3 + 17, y3 + t ); cout << "HUONG DAN";	
	GoToXY(x3, y3 + t + 1); cout << "Dang ki lop tin chi\t\tEnter";
	GoToXY(x3, y3 + t + 2); cout << "Huy dang ki lop tin chi\t\tDelete";
	GoToXY(x3, y3 + t + 3); cout << "Luu dang ki\t\t\tF2";
	GoToXY(x3, y3 + t + 4); cout << "Lop tin chi dang ki\t\tF3";
	GoToXY(x3, y3 + t + 5); cout << "Thoat\t\t\t\tESC";
	GoToXY(x3, y3 + t + 6); cout << "Di chuyen mui ten\t\tMui ten len xuong";
	GoToXY(x3, y3 + t + 7); cout << "Qua trang\t\t\tMui ten trai phai";	
}
void HuongDanNhapNKHKLTCKDDK() //Huong dan nhap nk hk
{
	DeleteSign();
	int t = 15;
	GoToXY(x3 + 17, y3 + t ); cout << "HUONG DAN";	
	GoToXY(x3, y3 + t + 1); cout << "In lop tin chi khong du dien kien mo lop\tEnter";
	GoToXY(x3, y3 + t + 2); cout << "Di chuyen con tro\t\tMui ten len xuong";
	GoToXY(x3, y3 + t + 3); cout << "Thoat\t\t\tESC";	
}
void HuongDanLTCKoDuDK() //Huong dan huyltc ko du dk mo
{
	DeleteSign();
	int t = 15;
	GoToXY(x3 + 17, y3 + t ); cout << "HUONG DAN";	
	GoToXY(x3, y3 + t + 1); cout << "Huy lop tin chi\t\t\tDelete";
	GoToXY(x3, y3 + t + 2); cout << "Mo lai lop tin chi\t\tEnter";
	GoToXY(x3, y3 + t + 3); cout << "Di chuyen con tro\t\tMui ten len xuong";
	GoToXY(x3, y3 + t + 4); cout << "Thoat\t\t\t\tESC";	
}
void HuongDanNhapNKHKDiemSV() //Huong dan in ds sv de nhap diem
{
	DeleteSign();
	int t = 15;
	GoToXY(x3 + 17, y3 + t ); cout << "HUONG DAN";	
	GoToXY(x3, y3 + t + 1); cout << "In danh sach de nhap diem SV\tEnter";
	GoToXY(x3, y3 + t + 2); cout << "In danh sach mon hoc\t\tF1";
	GoToXY(x3, y3 + t + 3); cout << "Di chuyen con tro\t\tMui ten len xuong";
	GoToXY(x3, y3 + t + 4); cout << "Thoat\t\t\t\tESC";	
}
void HuongDanNhapDiem() //Huong dan nhap diem
{
	DeleteSign();
	int t = 15;
	GoToXY(x3 + 15, y3 + t ); cout << "HUONG DAN";	
	GoToXY(x3, y3 + t + 1); cout << "Nhap diem\t\t\tEnter";
	GoToXY(x3, y3 + t + 2); cout << "Luu diem\t\t\tF2";
	GoToXY(x3, y3 + t + 3); cout << "In bang diem\t\t\tF1";
	GoToXY(x3, y3 + t + 4); cout << "Thoat\t\t\t\tESC";
	GoToXY(x3, y3 + t + 5); cout << "Di chuyen mui ten\t\tMui ten len xuong";
	GoToXY(x3, y3 + t + 6); cout << "Qua trang\t\t\tMui ten trai phai";	
}
//______________________________________________CAUA(LTC)___________________________________________

//void TaoMaLopTC(int m[], int a , int b)// tao file MaLopTC tu a->b
//{
//	ofstream fout;
//	fout.open("MaLopTC.txt", ios_base::out);
//	fout << (b - a)/1 + 1 << endl;
//	for (int i = b; i >= a; i--)
//	{
//		m[i] = i;
//		fout << m[i] << endl;
//	}
//	fout.close();
//}
void LTC(DSLTC dsLopTinChi, lopTinChi temp, int ltc[]) // them vao mang ltc co nk, hk
{
	int b = 0;
	for (int t = 0; t < dsLopTinChi.n; t++)
	{
		if (temp.nienKhoa == dsLopTinChi.dsLopTC[t]->nienKhoa && temp.hocki == dsLopTinChi.dsLopTC[t]->hocki)
		{
  	   		ltc[b] = t;
			b++;	
		}
	}
}
int DemLTC(DSLTC m, lopTinChi temp) // dem so ltc trong nk hk
{
	int dem = 0;
	for (int i = 0; i < m.n; i++)
	{
		if (temp.nienKhoa == m.dsLopTC[i]->nienKhoa && temp.hocki == m.dsLopTC[i]->hocki )
		dem++;
	}
	return dem;
}
MHPTR search(MHPTR root, string x)// tim con tro co ma MH la...
{	
	if(root)
	{
		int i = x.compare(root->info.maMH); /*	i=0: Hai chuoi co ma Ascii bang nhau.
											i<0: Chuoi thu nhat co ma Ascii nho hon chuoi thu hai.
											i>0: Chuoi thu nhat co ma Ascii lon hon chuoi thu hai.*/
		if (i == 0)	return root;
		if(i < 0) return search(root->pLeft, x);
		else if(i > 0) return search(root->pRight, x);
	}
	return NULL;
}
int Search_infoLTCNKHK(DSLTC m, lopTinChi temp) // kiem tra xem trong nk hk co lopltc ko?
{
	for (int i = 0; i < m.n; i++)
	{
		if (temp.nienKhoa == m.dsLopTC[i]->nienKhoa && temp.hocki == m.dsLopTC[i]->hocki)
		return 1;
	}
	return 0;
}
void InDSLTC(DSLTC m, MHPTR root, int x, int y, int j, double page, lopTinChi temp, int ltc[]) //In du lieu lopTC vao bang
{
	Normal();
	int kt, dem = -1;
	int slltc = DemLTC( m, temp); // sl ltc trong nk hk
	ltc[slltc]; // khoi tao mang ltc
	LTC(m, temp, ltc); // them vao mang ltc
	if(j * 15 > slltc) kt = slltc; //Vi tri ket thuc
	else kt = j * 15;
	for(int i = (j - 1) * 15; i < kt; i++)
	{
		dem++;
		GoToXY(x - 2, y + dem + 5); cout << m.dsLopTC[ltc[i]]->maLopTinChi;
		GoToXY(x + 5, y + dem + 5); cout << m.dsLopTC[ltc[i]]->maMonHoc;
		GoToXY(x + 16, y + dem + 5); cout << search(root, m.dsLopTC[ltc[i]]->maMonHoc)->info.tenMH;
//		GoToXY(x + 46, y + dem + 5); cout << m.dsLopTC[ltc[i]]->nienKhoa;
//		GoToXY(x + 56, y + dem + 5); cout << m.dsLopTC[ltc[i]]->hocki;
		GoToXY(x + 46, y + dem + 5); cout << m.dsLopTC[ltc[i]]->nhom;
		GoToXY(x + 52, y + dem + 5); cout << m.dsLopTC[ltc[i]]->svMin;
		GoToXY(x + 59, y + dem + 5); cout << m.dsLopTC[ltc[i]]->svMax;
		GoToXY(x + 67, y + dem + 5); 
		switch (m.dsLopTC[ltc[i]]->trangThai)//lopBiHuy, lopDuocMo
			{
				case lopBiHuy: cout << "Lop Bi Huy"; break;
				case lopDuocMo: cout << "Lop Duoc Mo"; break;
			}
	}
	GoToXY(x + 35, y + 21); cout << "Trang " << j << "/" << page;
}	
void ThemLopTinChi(DSLTC &dsLopTinChi,MHPTR root, int x, int y, lopTinChi temp) //Them 1 lopTC // x=0,y=13
{
	modifyCursor(1, true);
	int m[1000]; // mang chua ma loptc
	int n, vt = 0, maltc= 0, mamh= 0, nhom = 0, svmin = 0, svmax = 0, trangthai = 0;
	char c;
//	lopTinChi temp; //Xai tam de them vao mang sau khi nhap xong
	temp.nhom = 0;
	temp.svMin = 0;
	temp.svMax = 0;
	temp.SLDK = 0;
	Normal();
	GoToXY(15 ,14); cout << "THEM LOP TIN CHI";
	DeleteSign();
	HuongDanThemLopTC();
	BangThemLopTC(x,y);
	LoadMaLopTC(m, n);
	temp.maLopTinChi = m[n - 1];
	GoToXY(16, 15); cout << m[n - 1];	
	string MenuLTC[5] = {"Ma Lop Tin Chi:",
						"Ma Mon Hoc:    ",
						"Nhom: 			",
						"SV Min:    	",
						"SV Max:		"};
	for(int i = 0; i < 5; i++) { GoToXY(x + 1, y + 2 + i); cout << MenuLTC[i]; }								
	GoToXY(16,16);				
	do
	{
		c = GetKey();
		switch (c)
		{
			case Up: if(vt + 1 > 1) //Len dong tren
			{
				vt--;
				if(vt == 0) GoToXY(x + 16 + mamh, y + 3 + vt);
				else if(vt == 1) GoToXY(x + 16 + nhom, y + 3 + vt);
				else if(vt == 2) GoToXY(x + 16 + svmin, y + 3 + vt);
				else if(vt == 3) GoToXY(x + 16 + svmax, y + 3 + vt);
			} break;
			case Enter: if(vt + 1 < 5) //Xuong dong
			{
				vt++;	
				if(vt == 0) GoToXY(x + 16 + mamh, y + 3 + vt);
				else if(vt == 1) GoToXY(x + 16 + nhom, y + 3 + vt);
				else if(vt == 2) GoToXY(x + 16 + svmin, y + 3 + vt);
				else if(vt == 3) GoToXY(x + 16 + svmax, y + 3 + vt);

			} break;
			case Down: if(vt + 1 < 5) //Xuong dong
			{
				vt++;
				if(vt == 0) GoToXY(x + 16 + mamh, y + 3 + vt);
				else if(vt == 1) GoToXY(x + 16 + nhom, y + 3 + vt);
				else if(vt == 2) GoToXY(x + 16 + svmin, y + 3 + vt);
				else if(vt == 3) GoToXY(x + 16 + svmax, y + 3 + vt);
			} break;
			case F2: //Luu du lieu
			{				
				ChuanHoaInHoa(temp.maMonHoc);
				int t = Search_infoLTC(dsLopTinChi, temp);  // tim ltc thu i co nk, hk, nhom, mmh
				if (temp.maMonHoc.compare("") == 0)
				{
					GoToXY(x + 13, y + 12); cout << "Ma Mon Hoc khong duoc de trong!";
					Sleep(2000);
					GoToXY(x + 13, y + 12); cout << "                                      ";
					vt = 0;
					GoToXY(x + 16 + mamh, y + 3 + vt);
				}
				else if( search(root,temp.maMonHoc) == NULL) //tim con tro co ma MH la...
				{
					GoToXY(x + 13, y + 12); cout << "Ma Mon Hoc khong ton tai!";
					Sleep(2000);
					GoToXY(x + 13, y + 12); cout << "                                      ";
					vt = 0;
					GoToXY(x + 16 + mamh, y + 3 + vt);
				}
				else if (nhom == 0 || temp.nhom == 0)
				{
					GoToXY(x + 13, y + 12); cout << "Nhom lon hon 0 va khong duoc de trong!";
					Sleep(2000);
					GoToXY(x + 13, y + 12); cout << "                                      ";
					vt = 3;
					GoToXY(x + 16 + nhom, y + 3 + vt);
				}
				else if (svmin == 0 || temp.svMin == 0)
				{
					GoToXY(x + 13, y + 12); cout << "SVMin khac 0 va khong duoc de trong!";
					Sleep(2000);
					GoToXY(x + 13, y + 12); cout << "                                      ";
					vt = 4;
					GoToXY(x + 16 + svmin, y + 3 + vt);
				}
				else if (svmax == 0 || temp.svMax <= temp.svMin || temp.svMax == 0 ) 
				{
					GoToXY(x + 13, y + 12); cout << "SVMAX phai lon hon 0 va lon hon SVMIN!";
					Sleep(2000);
					GoToXY(x + 13, y + 12); cout << "                                      ";
					vt = 5;
					GoToXY(x + 16 + svmax, y + 3 + vt);
				}
				else if (t != -1) 
				{
					GoToXY(x + 13, y + 12); cout << "Lop Tin Chi bi trung!";
					Sleep(2000);
					GoToXY(x + 13, y + 12); cout << "                     ";
					vt = 6;
					GoToXY(x + 16, y + 3 + vt);
				}
				else 
				{		
					DeleteScreen();			
					dsLopTinChi.dsLopTC[dsLopTinChi.n] = new lopTinChi;					
					dsLopTinChi.dsLopTC[dsLopTinChi.n]->maLopTinChi = temp.maLopTinChi;
					dsLopTinChi.dsLopTC[dsLopTinChi.n]->maMonHoc = temp.maMonHoc;
					dsLopTinChi.dsLopTC[dsLopTinChi.n]->nienKhoa = temp.nienKhoa;
					dsLopTinChi.dsLopTC[dsLopTinChi.n]->hocki = temp.hocki;
					dsLopTinChi.dsLopTC[dsLopTinChi.n]->nhom = temp.nhom;
					dsLopTinChi.dsLopTC[dsLopTinChi.n]->svMin = temp.svMin;
					dsLopTinChi.dsLopTC[dsLopTinChi.n]->svMax = temp.svMax;
					dsLopTinChi.dsLopTC[dsLopTinChi.n]->trangThai = lopDuocMo;
					dsLopTinChi.dsLopTC[dsLopTinChi.n]->SLDK = 0; 
					dsLopTinChi.n++;
					SaveLopTC (dsLopTinChi);
					SaveMaLopTC(m,n);
					SaveDangKiLopTC(dsLopTinChi);
					GoToXY(x + 15, y + 12); cout << "                                 ";
					GoToXY(x + 15, y + 12); cout << "Du lieu da duoc luu lai";
					Sleep(2500);
					GoToXY(x + 15, y + 12); cout << "                                 ";
					return;
				}
			break;
			}
			case F1: // in ds mon hoc
			{
				DeleteScreen();
				BangMonHoc(77, 15, 15);
				TenMonHocTangDan(root, 87, 12);
				if(vt == 0) GoToXY(x + 16 + mamh, y + 3 + vt);
				else if(vt == 1) GoToXY(x + 16 + nhom, y + 3 + vt);
				else if(vt == 2) GoToXY(x + 16 + svmin, y + 3 + vt);
				else if(vt == 3) GoToXY(x + 16 + svmax, y + 3 + vt);
				
				break;
			} 
			case ESC: //Thoat ra
			{
				if(temp.maMonHoc.compare("") == 0 || temp.nhom == 0 || temp.svMin <= 0 || temp.svMax < temp.svMin )
				{
					GoToXY(x + 15, y + 11); cout << "                                 ";
					GoToXY(x + 15, y + 11); cout << "Du lieu nhap chua dung";
					GoToXY(x + 15, y + 12); cout << "                                 ";
					GoToXY(x + 15, y + 12); cout << "Nhan ESC neu ban van muon thoat";
					char kt = GetKey();
					if(kt == ESC) 
					{
//						BangLopTC(60, 15, 15);
//						GoToXY(x + 15, y + 11); cout << "                                ";
//						GoToXY(x + 15, y + 12); cout << "                                ";
						DeleteScreen();
						return;
					}
				}
				else
				{
					GoToXY(x + 15, y + 11); cout << "                                ";
					GoToXY(x + 15, y + 11); cout << "Ban co muon luu du lieu?";
					GoToXY(x + 15, y + 12); cout << "                                ";
					GoToXY(x + 15, y + 12); cout << "LUU (Y)\t KHONG LUU (N)";
					do
					{
						char kt = GetKey();
						if(kt == 'Y' || kt == 'y') 
						{
							DeleteScreen();
							ChuanHoaInHoa(temp.maMonHoc);
							dsLopTinChi.dsLopTC[dsLopTinChi.n] = new lopTinChi;
							dsLopTinChi.dsLopTC[dsLopTinChi.n]->maLopTinChi = temp.maLopTinChi;
							dsLopTinChi.dsLopTC[dsLopTinChi.n]->maMonHoc = temp.maMonHoc;
							dsLopTinChi.dsLopTC[dsLopTinChi.n]->nienKhoa = temp.nienKhoa;
							dsLopTinChi.dsLopTC[dsLopTinChi.n]->hocki = temp.hocki;
							dsLopTinChi.dsLopTC[dsLopTinChi.n]->nhom = temp.nhom;
							dsLopTinChi.dsLopTC[dsLopTinChi.n]->svMin = temp.svMin;
							dsLopTinChi.dsLopTC[dsLopTinChi.n]->svMax = temp.svMax;
							dsLopTinChi.dsLopTC[dsLopTinChi.n]->trangThai = lopDuocMo;
	 						dsLopTinChi.dsLopTC[dsLopTinChi.n]->SLDK = 0; // 
							dsLopTinChi.n++;
							SaveLopTC (dsLopTinChi);
							SaveMaLopTC(m,n);
							GoToXY(x + 15, y + 12); cout << "                                 ";
							GoToXY(x + 15, y + 12); cout << "Du lieu da duoc luu lai";
							Sleep(2500);
							GoToXY(x + 15, y + 12); cout << "                                 ";
							return;
						}
						else if(kt == 'N' || kt == 'n') { 	DeleteScreen(); return; }
					} while(1);
				}
				vt = 7;
				break;
			}
			default: switch(vt)
			{
				case 0: //Vi tri con tro o phan mamh
				{	

					if(c == Backspace)
					{
						if(mamh > 0)
						{
							temp.maMonHoc = temp.maMonHoc.substr(0, --mamh);
							GoToXY(x + 16 + mamh, y + 3 + vt); cout << " ";
							GoToXY(x + 16 + mamh, y + 3 + vt);
						}		
					}
					else if((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122)) // lay so, in hoa, in thuong
					{
						if( temp.maMonHoc.length() < 7)
						{
							temp.maMonHoc += c;
							mamh++;
							cout << c;
						}
						else 
						{
							GoToXY(x + 15, y + 12); cout << "Ma Mon Hoc chi toi da 7 ky tu!";							
							Sleep(2000);
							GoToXY(x + 15, y + 12); cout << "                               ";
							GoToXY(x + 16 + mamh, y + 3 + vt);
						}
					}
				} break;
				case 1: //Vi tri con tro o phan nhom
				{
					if (mamh == 0) 
					{
						GoToXY(x + 15, y + 12); cout << "Ma Mon Hoc khong duoc trong!";							
						Sleep(2000);
						GoToXY(x + 15, y + 12); cout << "                               ";
						vt--;
						GoToXY(x + 16 + mamh, y + 3 + vt);
					}
					else 
					{
						if(c == Backspace)
						{
							if(nhom > 0)
							{
								temp.nhom = temp.nhom/10;
								nhom--;
								GoToXY(x + 16 + nhom, y + 3 + vt); cout << " ";
								GoToXY(x + 16 + nhom, y + 3 + vt);
							}		
						}
						else if(c >= 48 && c <= 57)
						{
							switch(c)
							{
								case '0': temp.nhom = temp.nhom * 10 + 0; break;
								case '1': temp.nhom = temp.nhom * 10 + 1; break;
								case '2': temp.nhom = temp.nhom * 10 + 2; break;
								case '3': temp.nhom = temp.nhom * 10 + 3; break;
								case '4': temp.nhom = temp.nhom * 10 + 4; break;
								case '5': temp.nhom = temp.nhom * 10 + 5; break;
								case '6': temp.nhom = temp.nhom * 10 + 6; break;
								case '7': temp.nhom = temp.nhom * 10 + 7; break;
								case '8': temp.nhom = temp.nhom * 10 + 8; break;
								case '9': temp.nhom = temp.nhom * 10 + 9; break;
							}
							nhom++;
							cout << c;
							if (temp.nhom == 0 ) 
							{
								GoToXY(x + 15, y + 12); cout << " Nhom phai lon hon 0!";
								Sleep(2000);
								GoToXY(x + 15, y + 12); cout << "                               ";
								GoToXY(x + 16 + nhom, y + 3 + vt);
							}
						}
					}	
				} break;
				case 2: //Vi tri con tro o phan svmin
				{
					if (nhom == 0) 
					{
						GoToXY(x + 15, y + 12); cout << "Nhom khong duoc trong!";							
						Sleep(2000);
						GoToXY(x + 15, y + 12); cout << "                               ";
						vt--;
						GoToXY(x + 16 + nhom, y + 3 + vt);
					}
					else 
					{
						if(c == Backspace)
						{
							if(svmin > 0)
							{
								temp.svMin = temp.svMin/10;
								svmin--;
								GoToXY(x + 16 + svmin, y + 3 + vt); cout << " ";
								GoToXY(x + 16 + svmin, y + 3 + vt);
							}		
						}
						else if(c >= 48 && c <= 57) //Chi lay so
						{
							switch(c)
							{
								case '0': temp.svMin = temp.svMin * 10 + 0; break;
								case '1': temp.svMin = temp.svMin * 10 + 1; break;
								case '2': temp.svMin = temp.svMin * 10 + 2; break;
								case '3': temp.svMin = temp.svMin * 10 + 3; break;
								case '4': temp.svMin = temp.svMin * 10 + 4; break;
								case '5': temp.svMin = temp.svMin * 10 + 5; break;
								case '6': temp.svMin = temp.svMin * 10 + 6; break;
								case '7': temp.svMin = temp.svMin * 10 + 7; break;
								case '8': temp.svMin = temp.svMin * 10 + 8; break;
								case '9': temp.svMin = temp.svMin * 10 + 9; break;
							}
							svmin++;
							cout << c;
							if (temp.svMin == 0 ) 
							{
								GoToXY(x + 15, y + 12); cout << " SVMIN phai lon hon 0!";
								Sleep(2000);
								GoToXY(x + 15, y + 12); cout << "                               ";
								GoToXY(x + 16 + svmin, y + 3 + vt);
							}
						}
					}
				} break;
				case 3: //Vi tri con tro o phan svmax
				{
					if (svmin == 0) 
					{
						GoToXY(x + 15, y + 12); cout << "SVMIN khong duoc trong!";							
						Sleep(2000);
						GoToXY(x + 15, y + 12); cout << "                               ";
						vt--;
						GoToXY(x + 16 + svmin, y + 3 + vt);
					}
					else 
					{
						if(c == Backspace)
						{
							if(svmax > 0)
							{
								temp.svMax = temp.svMax/10;
								svmax--;
								GoToXY(x + 16 + svmax, y + 3 + vt); cout << " ";
								GoToXY(x + 16 + svmax, y + 3 + vt);
							}		
						}
						else if(c >= 48 && c <= 57) //Chi lay so
						{
							switch(c)
							{
								case '0': temp.svMax = temp.svMax * 10 + 0; break;
								case '1': temp.svMax = temp.svMax * 10 + 1; break;
								case '2': temp.svMax = temp.svMax * 10 + 2; break;
								case '3': temp.svMax = temp.svMax * 10 + 3; break;
								case '4': temp.svMax = temp.svMax * 10 + 4; break;
								case '5': temp.svMax = temp.svMax * 10 + 5; break;
								case '6': temp.svMax = temp.svMax * 10 + 6; break;
								case '7': temp.svMax = temp.svMax * 10 + 7; break;
								case '8': temp.svMax = temp.svMax * 10 + 8; break;
								case '9': temp.svMax = temp.svMax * 10 + 9; break;
							}
							svmax++;
							cout << c;
						}
					}
				} break;
			}
		}
	} while(1);
}
void XoaLopTinChi(DSLTC &m, int x, int y, int l) //Xoa loptc thu l
{
	Normal();
	if( m.dsLopTC[l]->SLDK > 0)
	{
		GoToXY(x, y); cout << "Ban khong the xoa lop tin chi nay vi dang co sinh vien dang ki";
		Sleep(2500);
		GoToXY(x, y); cout << "                                                              ";
	}
	else
	{
		GoToXY(x, y); cout << "Ban co muon xoa lop tin chi nay khong?";
		GoToXY(x, y + 1); cout << "XOA (Y)\t KHONG XOA (N)";
		do
		{
			char c = GetKey();
			if(c == 'Y' || c == 'y')
			{
				delete(m.dsLopTC[l]);
				for(int i = l; i < m.n; i++) { m.dsLopTC[i] = m.dsLopTC[i + 1];}
				m.n--;
				SaveLopTC (m);
				SaveDangKiLopTC(m);
				GoToXY(x, y); cout << "                                             ";
				GoToXY(x, y + 1); cout << "                                           ";
				GoToXY(x, y); cout << "Da xoa thanh cong lop tin chi nay!";
				Sleep(2500);
				return;
			}
			else if(c == 'N' || c == 'n') { return; }
		} while(1);
	}
}
void HieuChinhLopTinChi(DSLTC &dsLopTinChi, MHPTR root ,int x, int y, int l) // Hieu chinh 1 loptc l
{
	modifyCursor(1, true);
	int mamh, nienkhoa;
	int hocki = 0, nhom = 0, svmin = 0, svmax = 0, vt = 0;
	char c;
	DeleteSign();
	HuongDanThemLopTC();
	lopTinChi temp; //Xai tam de them vao mang sau khi nhap xong
	temp.maLopTinChi = dsLopTinChi.dsLopTC[l]->maLopTinChi;
	temp.maMonHoc = dsLopTinChi.dsLopTC[l]->maMonHoc;
	temp.nienKhoa = dsLopTinChi.dsLopTC[l]->nienKhoa;
	temp.hocki = dsLopTinChi.dsLopTC[l]->hocki;
	temp.nhom = dsLopTinChi.dsLopTC[l]->nhom;
	temp.svMin = dsLopTinChi.dsLopTC[l]->svMin;
	temp.svMax = dsLopTinChi.dsLopTC[l]->svMax;
	temp.SLDK = dsLopTinChi.dsLopTC[l]->SLDK;
	mamh = temp.maMonHoc.length();
	nienkhoa = temp.nienKhoa.length();
	// lay so chu so cua hk, nhom, svmin, sv max	
	int so = temp.hocki;
	while(so > 0) 
	{
		so = so / 10;
		hocki++;
	}
	so = temp.nhom;
	while(so > 0)
	{
		so = so / 10;
		nhom++;
	}
	so = temp.svMin;
	while(so > 0)
	{
		so = so / 10;
		svmin++;
	}
	so = temp.svMax;
	while(so > 0)
	{
		so = so / 10;
		svmax++;
	}
	Normal();
	GoToXY(15, 14); cout << "HIEU CHINH LOP TIN CHI";
	BangThemLopTC(x,y);	
	string MenuLTC[7] = {"Ma Lop Tin Chi:",
						"Ma Mon Hoc:    ",
						"Nien Khoa:   	",
						"Hoc Ki:     	",
						"Nhom: 			",
						"SV Min:    	",
						"SV Max:		"};
	for(int i = 0; i < 7; i++) { GoToXY(x + 1, y + 2 + i); cout << MenuLTC[i]; }
	GoToXY(x + 16, y + 2); cout << temp.maLopTinChi;							
	GoToXY(x + 16, y + 3); cout << temp.maMonHoc;							
	GoToXY(x + 16, y + 4); cout << temp.nienKhoa;							
	GoToXY(x + 16, y + 5); cout << temp.hocki;							
	GoToXY(x + 16, y + 6); cout << temp.nhom;							
	GoToXY(x + 16, y + 7); cout << temp.svMin;							
	GoToXY(x + 16, y + 8); cout << temp.svMax;							
	GoToXY(x + 16 + mamh, y + 3);				
	do
	{
		c = GetKey();
		switch (c)
		{
			case Up: if(vt + 1 > 1) //Len dong tren
			{
				vt--;
				if(vt == 0) GoToXY(x + 16 + mamh, y + 3 + vt);
				else if(vt == 1) GoToXY(x + 16 + nienkhoa, y + 3 + vt);
				else if(vt == 2) GoToXY(x + 16 + hocki, y + 3 + vt);
				else if(vt == 3) GoToXY(x + 16 + nhom, y + 3 + vt);
				else if(vt == 4) GoToXY(x + 16 + svmin, y + 3 + vt);
				else if(vt == 5) GoToXY(x + 16 + svmax, y + 3 + vt);
			} break;
			case Enter: if(vt + 1 < 6) //Xuong dong
			{
				vt++;
				if(vt == 0) GoToXY(x + 16 + mamh, y + 3 + vt);
				else if(vt == 1) GoToXY(x + 16 + nienkhoa, y + 3 + vt);
				else if(vt == 2) GoToXY(x + 16 + hocki, y + 3 + vt);
				else if(vt == 3) GoToXY(x + 16 + nhom, y + 3 + vt);
				else if(vt == 4) GoToXY(x + 16 + svmin, y + 3 + vt);
				else if(vt == 5) GoToXY(x + 16 + svmax, y + 3 + vt);
			} break;
			case Down: if(vt + 1 < 6) //Xuong dong
			{
				vt++;
				if(vt == 0) GoToXY(x + 16 + mamh, y + 3 + vt);
				else if(vt == 1) GoToXY(x + 16 + nienkhoa, y + 3 + vt);
				else if(vt == 2) GoToXY(x + 16 + hocki, y + 3 + vt);
				else if(vt == 3) GoToXY(x + 16 + nhom, y + 3 + vt);
				else if(vt == 4) GoToXY(x + 16 + svmin, y + 3 + vt);
				else if(vt == 5) GoToXY(x + 16 + svmax, y + 3 + vt);
			} break;
			case F2: //Luu du lieu
			{
				
				ChuanHoaInHoa(temp.maMonHoc);
				int t = Search_infoLTC(dsLopTinChi, temp);
				if (temp.maMonHoc.compare("") == 0)
				{
					GoToXY(x + 13, y + 12); cout << "Ma Mon Hoc khong duoc de trong!";
					Sleep(2000);
					GoToXY(x + 13, y + 12); cout << "                                      ";
					vt = 0;
					GoToXY(x + 16 + mamh, y + 3 + vt);
				}
				else if (search(root, temp.maMonHoc) == NULL)
				{
					GoToXY(x + 13, y + 12); cout << "Ma Mon Hoc khong ton tai!";
					Sleep(2000);
					GoToXY(x + 13, y + 12); cout << "                                      ";
					vt = 0;
					GoToXY(x + 16 + mamh, y + 3 + vt);
				}
				else if (temp.nienKhoa.compare("") == 0)
				{
					GoToXY(x + 13, y + 12); cout << "Nien Khoa khong duoc de trong!";
					Sleep(2000);
					GoToXY(x + 13, y + 12); cout << "                                      ";
					vt = 1;
					GoToXY(x + 16 + nienkhoa, y + 3 + vt);
				}
				else if ( hocki == 0)
				{
					GoToXY(x + 13, y + 12); cout << "Hoc Ki khong duoc de trong!";
					Sleep(2000);
					GoToXY(x + 13, y + 12); cout << "                                      ";
					vt = 2;
					GoToXY(x + 16 + hocki, y + 3 + vt);
				}
				else if (temp.nhom == 0 || nhom == 0)
				{
					GoToXY(x + 13, y + 12); cout << "Nhom lon hon 0 va khong duoc de trong!";
					Sleep(2000);
					GoToXY(x + 13, y + 12); cout << "                                      ";
					vt = 3;
					GoToXY(x + 16 + nhom, y + 3 + vt);
				}
				else if (temp.svMin == 0 || svmin == 0)
				{
					GoToXY(x + 13, y + 12); cout << "SVMin lon hon khong duoc de trong!";
					Sleep(2000);
					GoToXY(x + 13, y + 12); cout << "                                      ";
					vt = 4;
					GoToXY(x + 16 + svmin, y + 3 + vt);
				}
				else if (temp.svMax == 0 || temp.svMax <= temp.svMin || temp.svMax <= temp.SLDK || svmax == 0 ) 
				{
					GoToXY(x + 13, y + 12); cout << "SVMAX phai lon hon 0 va lon hon SVMIN!";
					Sleep(2000);
					GoToXY(x + 13, y + 12); cout << "                                      ";
					vt = 5;
					GoToXY(x + 16 + svmax, y + 3 + vt); 
				}
//				else if (t != -1) 
//				{
//					GoToXY(x + 13, y + 12); cout << "Lop Tin Chi bi trung!";
//					Sleep(2000);
//					GoToXY(x + 13, y + 12); cout << "                     ";
//					vt = 6;
//					GoToXY(x + 16, y + 3 + vt);
//				}
				else 
				{
					DeleteScreen();
					dsLopTinChi.dsLopTC[l]->maLopTinChi = temp.maLopTinChi;
					dsLopTinChi.dsLopTC[l]->maMonHoc = temp.maMonHoc;
					dsLopTinChi.dsLopTC[l]->nienKhoa = temp.nienKhoa;
					dsLopTinChi.dsLopTC[l]->hocki = temp.hocki;
					dsLopTinChi.dsLopTC[l]->nhom = temp.nhom;
					dsLopTinChi.dsLopTC[l]->svMin = temp.svMin;
					dsLopTinChi.dsLopTC[l]->svMax = temp.svMax;
					dsLopTinChi.dsLopTC[l]->trangThai = lopDuocMo;
					SaveLopTC (dsLopTinChi);
					GoToXY(x + 15, y + 12); cout << "                                 ";
					GoToXY(x + 15, y + 12); cout << "Du lieu da duoc luu lai";
					Sleep(2500);
					GoToXY(x + 15, y + 12); cout << "                                 ";
					return;
				}
			break;
			} 
			case F1:
			{
				DeleteScreen();
				BangMonHoc(77, 15, 15);
				TenMonHocTangDan(root, 87, 12);
				if(vt == 0) GoToXY(x + 16 + mamh, y + 3 + vt);
				else if(vt == 1) GoToXY(x + 16 + nienkhoa, y + 3 + vt);
				else if(vt == 2) GoToXY(x + 16 + hocki, y + 3 + vt);
				else if(vt == 3) GoToXY(x + 16 + nhom, y + 3 + vt);
				else if(vt == 4) GoToXY(x + 16 + svmin, y + 3 + vt);
				else if(vt == 5) GoToXY(x + 16 + svmax, y + 3 + vt);
				break;
			} 
			case ESC: //Thoat ra
			{
				if(temp.maMonHoc.compare("") == 0 || temp.nienKhoa.compare("") == 0 || temp.hocki == 0 || temp.nhom == 0 || temp.svMin <= 0 || temp.svMax < temp.svMin )
				{
					GoToXY(x + 15, y + 11); cout << "                                 ";
					GoToXY(x + 15, y + 11); cout << "Du lieu nhap chua dung";
					GoToXY(x + 15, y + 12); cout << "                                 ";
					GoToXY(x + 15, y + 12); cout << "Nhan ESC neu ban van muon thoat";
					char kt = GetKey();
					if(kt == ESC) 
					{
//						GoToXY(x + 15, y + 11); cout << "                                ";
//						GoToXY(x + 15, y + 12); cout << "                                ";						
						DeleteScreen();
						return;
					}
				}
				else
				{
					GoToXY(x + 15, y + 11); cout << "                                ";
					GoToXY(x + 15, y + 11); cout << "Ban co muon luu du lieu?";
					GoToXY(x + 15, y + 12); cout << "                                ";
					GoToXY(x + 15, y + 12); cout << "LUU (Y)\t KHONG LUU (N)";
					do
					{
						char kt = GetKey();
						if(kt == 'Y' || kt == 'y') 
						{
							DeleteScreen();
							ChuanHoaInHoa(temp.maMonHoc);
							dsLopTinChi.dsLopTC[l]->maLopTinChi = temp.maLopTinChi;
							dsLopTinChi.dsLopTC[l]->maMonHoc = temp.maMonHoc;
							dsLopTinChi.dsLopTC[l]->nienKhoa = temp.nienKhoa;
							dsLopTinChi.dsLopTC[l]->hocki = temp.hocki;
							dsLopTinChi.dsLopTC[l]->nhom = temp.nhom;
							dsLopTinChi.dsLopTC[l]->svMin = temp.svMin;
							dsLopTinChi.dsLopTC[l]->svMax = temp.svMax;
							dsLopTinChi.dsLopTC[l]->trangThai = lopDuocMo;
							SaveLopTC (dsLopTinChi);
							GoToXY(x + 15, y + 12); cout << "                                 ";
							GoToXY(x + 15, y + 12); cout << "Du lieu da duoc luu lai";
							Sleep(2500);
							GoToXY(x + 15, y + 12); cout << "                                 ";
							return;
						}
						else if(kt == 'N' || kt == 'n') { DeleteScreen(); return; }
					} while(1);
				}
				vt = 7;
				break;
			}			
			default: switch(vt)
			{
				
				case 0: //Vi tri con tro o phan mamh
				{	
					if ( dsLopTinChi.dsLopTC[l]->SLDK > 0)
					{
						GoToXY(x + 10, y + 10); cout << "Lop Tin Chi co sinh vien dang ki";
						GoToXY(x + 10, y + 11); cout << " Khong duoc phep chinh sua!";							
						Sleep(2000);
						GoToXY(x + 10, y + 10); cout << "                                 ";
						GoToXY(x + 10, y + 11); cout << "                            ";
						vt = 4;
						GoToXY(x + 16 + svmin, y + 3 + vt);
					}
					else
					{					
					if(c == Backspace)
					{
						if(mamh > 0)
						{
							temp.maMonHoc = temp.maMonHoc.substr(0, --mamh);
							GoToXY(x + 16 + mamh, y + 3 + vt); cout << " ";
							GoToXY(x + 16 + mamh, y + 3 + vt);
						}		
					}
					else if((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122)) // lay so, in hoa, in thuong
					{
						if( temp.maMonHoc.length() < 7)
						{
							temp.maMonHoc += c;
							mamh++;
							cout << c;
						}
						else 
						{
							GoToXY(x + 15, y + 12); cout << "Ma Mon Hoc chi toi da 7 ky tu!";							
							Sleep(2000);
							GoToXY(x + 15, y + 12); cout << "                               ";
							GoToXY(x + 16 + mamh, y + 3 + vt);
						}
					}
					}
				} break;
				case 1: //Vi tri con tro o phan nien khoa
				{
					if ( dsLopTinChi.dsLopTC[l]->SLDK > 0)
					{
						GoToXY(x + 10, y + 10); cout << "Lop Tin Chi co sinh vien dang ki";
						GoToXY(x + 10, y + 11); cout << " Khong duoc phep chinh sua!";							
						Sleep(2000);
						GoToXY(x + 10, y + 10); cout << "                                 ";
						GoToXY(x + 10, y + 11); cout << "                            ";
						vt = 4;
						GoToXY(x + 16 + svmin, y + 3 + vt);
					}
					else
					{
					if (mamh == 0) 
					{
						GoToXY(x + 15, y + 12); cout << "Ma Mon Hoc khong duoc trong!";							
						Sleep(2000);
						GoToXY(x + 15, y + 12); cout << "                               ";
						vt--;
						GoToXY(x + 16 + mamh, y + 3 + vt);
					}
					else 
					{
						if(c == Backspace)
						{
							if(nienkhoa > 0)
							{
							temp.nienKhoa= temp.nienKhoa.substr(0, --nienkhoa);
							GoToXY(x + 16 + nienkhoa, y + 3 + vt); cout << " ";
							GoToXY(x + 16 + nienkhoa, y + 3 + vt);
							}		
						}
						else if(c == 45 || (c >= 48 && c <= 57)) //bao gom ky tu (-), so
						{	

							temp.nienKhoa += c;
							nienkhoa++;
							cout << c;
						}
					}
				}
				} break;
				case 2: //Vi tri con tro o phan hoc ki
				{
					if ( dsLopTinChi.dsLopTC[l]->SLDK > 0)
					{
						GoToXY(x + 10, y + 10); cout << "Lop Tin Chi co sinh vien dang ki";
						GoToXY(x + 10, y + 11); cout << " Khong duoc phep chinh sua!";							
						Sleep(2000);
						GoToXY(x + 10, y + 10); cout << "                                 ";
						GoToXY(x + 10, y + 11); cout << "                            ";
						vt = 4;
						GoToXY(x + 16 + svmin, y + 3 + vt);
					}
					else
					{
					if (nienkhoa == 0) 
					{
						GoToXY(x + 15, y + 12); cout << "Nien Khoa khong duoc trong!";							
						Sleep(2000);
						GoToXY(x + 15, y + 12); cout << "                               ";
						vt--;
						GoToXY(x + 16 + nienkhoa, y + 3 + vt);
					}
					else 
					{
					if(c == Backspace)
					{
						if(hocki > 0)
						{
							temp.hocki = temp.hocki/10;
							hocki--;
							GoToXY(x + 16 + hocki, y + 3 + vt); cout << " ";
							GoToXY(x + 16 + hocki, y + 3 + vt);
						}		
					}
					else if(c >= 49 && c <= 51) //chi lay so 1,2,3
					{
						
						switch(c)
						{
							case '1': temp.hocki = temp.hocki * 10 + 1; break;
							case '2': temp.hocki = temp.hocki * 10 + 2; break;
							case '3': temp.hocki = temp.hocki * 10 + 3; break;

						}	
						hocki++;
						cout << c;
					}
					else 
					{
						GoToXY(x + 15, y + 12); cout << "Hoc Ki: 1, 2, 3!";
						Sleep(2000);
						GoToXY(x + 15, y + 12); cout << "                               ";
						GoToXY(x + 16 + hocki, y + 3 + vt);
					}
					}
					}
				} break;
				case 3: //Vi tri con tro o phan nhom
				{
					if ( dsLopTinChi.dsLopTC[l]->SLDK > 0)
					{
						GoToXY(x + 10, y + 10); cout << "Lop Tin Chi co sinh vien dang ki";
						GoToXY(x + 10, y + 11); cout << " Khong duoc phep chinh sua!";							
						Sleep(2000);
						GoToXY(x + 10, y + 10); cout << "                                 ";
						GoToXY(x + 10, y + 11); cout << "                            ";
						vt = 4;
						GoToXY(x + 16 + svmin, y + 3 + vt);
					}
					else
					{
					if (hocki == 0) 
					{
						GoToXY(x + 15, y + 12); cout << "Hoc Ki khong duoc trong!";							
						Sleep(2000);
						GoToXY(x + 15, y + 12); cout << "                               ";
						vt--;
						GoToXY(x + 16 + hocki, y + 3 + vt);
					}
					else 
					{
						if(c == Backspace)
						{
							if(nhom > 0)
							{
								temp.nhom = temp.nhom/10;
								nhom--;
								GoToXY(x + 16 + nhom, y + 3 + vt); cout << " ";
								GoToXY(x + 16 + nhom, y + 3 + vt);
							}		
						}
						else if(c >= 48 && c <= 57)
						{
							switch(c)
							{
								case '0': temp.nhom = temp.nhom * 10 + 0; break;
								case '1': temp.nhom = temp.nhom * 10 + 1; break;
								case '2': temp.nhom = temp.nhom * 10 + 2; break;
								case '3': temp.nhom = temp.nhom * 10 + 3; break;
								case '4': temp.nhom = temp.nhom * 10 + 4; break;
								case '5': temp.nhom = temp.nhom * 10 + 5; break;
								case '6': temp.nhom = temp.nhom * 10 + 6; break;
								case '7': temp.nhom = temp.nhom * 10 + 7; break;
								case '8': temp.nhom = temp.nhom * 10 + 8; break;
								case '9': temp.nhom = temp.nhom * 10 + 9; break;
							}
							nhom++;
							cout << c;
							if (temp.nhom == 0 ) 
							{
								GoToXY(x + 15, y + 12); cout << " Nhom phai lon hon 0!";
								Sleep(2000);
								GoToXY(x + 15, y + 12); cout << "                               ";
								GoToXY(x + 16 + nhom, y + 3 + vt);
							}
						}
					}
				}
				} break;
				case 4: //Vi tri con tro o phan svmin
				{
					if (nhom == 0) 
					{
						GoToXY(x + 15, y + 12); cout << "Nhom khong duoc trong!";							
						Sleep(2000);
						GoToXY(x + 15, y + 12); cout << "                               ";
						vt--;
						GoToXY(x + 16 + nhom, y + 3 + vt);
					}
					else 
					{
						if(c == Backspace)
						{
							if(svmin > 0)
							{
								temp.svMin = temp.svMin/10;
								svmin--;
								GoToXY(x + 16 + svmin, y + 3 + vt); cout << " ";
								GoToXY(x + 16 + svmin, y + 3 + vt);
							}		
						}
						else if(c >= 48 && c <= 57) //Chi lay so
						{
							switch(c)
							{
								case '0': temp.svMin = temp.svMin * 10 + 0; break;
								case '1': temp.svMin = temp.svMin * 10 + 1; break;
								case '2': temp.svMin = temp.svMin * 10 + 2; break;
								case '3': temp.svMin = temp.svMin * 10 + 3; break;
								case '4': temp.svMin = temp.svMin * 10 + 4; break;
								case '5': temp.svMin = temp.svMin * 10 + 5; break;
								case '6': temp.svMin = temp.svMin * 10 + 6; break;
								case '7': temp.svMin = temp.svMin * 10 + 7; break;
								case '8': temp.svMin = temp.svMin * 10 + 8; break;
								case '9': temp.svMin = temp.svMin * 10 + 9; break;
							}
							svmin++;
							cout << c;
							if (temp.svMin == 0 ) 
							{
								GoToXY(x + 15, y + 12); cout << " SVMIN phai lon hon 0!";
								Sleep(2000);
								GoToXY(x + 15, y + 12); cout << "                               ";
								GoToXY(x + 16 + svmin, y + 3 + vt);
							}
						}
					}
				} break;
				case 5: //Vi tri con tro o phan svmax
				{
					if (svmin == 0) 
					{
						GoToXY(x + 15, y + 12); cout << "SVMIN khong duoc trong!";							
						Sleep(2000);
						GoToXY(x + 15, y + 12); cout << "                               ";
						vt--;
						GoToXY(x + 16 + svmin, y + 3 + vt);
					}
					else 
					{
						if(c == Backspace)
						{
							if(svmax > 0)
							{
								temp.svMax = temp.svMax/10;
								svmax--;
								GoToXY(x + 16 + svmax, y + 3 + vt); cout << " ";
								GoToXY(x + 16 + svmax, y + 3 + vt);
							}		
						}
						else if(c >= 48 && c <= 57) //Chi lay so
						{
							switch(c)
							{
								case '0': temp.svMax = temp.svMax * 10 + 0; break;
								case '1': temp.svMax = temp.svMax * 10 + 1; break;
								case '2': temp.svMax = temp.svMax * 10 + 2; break;
								case '3': temp.svMax = temp.svMax * 10 + 3; break;
								case '4': temp.svMax = temp.svMax * 10 + 4; break;
								case '5': temp.svMax = temp.svMax * 10 + 5; break;
								case '6': temp.svMax = temp.svMax * 10 + 6; break;
								case '7': temp.svMax = temp.svMax * 10 + 7; break;
								case '8': temp.svMax = temp.svMax * 10 + 8; break;
								case '9': temp.svMax = temp.svMax * 10 + 9; break;
							}
							svmax++;
							cout << c;
						}
					}
				} break;
			}
		}
	} while(1);
}
void CapNhatDSLTC(DSLTC &m, MHPTR root, int x, int y)//65,14 nhap nk hk de in ds ltc 
{
	modifyCursor(1, true);
	int n, vt = 0, nienkhoa = 0, hocki = 0;
	char c;
	lopTinChi temp; //Xai tam de them vao mang sau khi nhap xong
	temp.hocki = 0;
	Normal();
	HuongDanNhapNKHK();
	BangNhapNKHK( x, y); 								
	GoToXY(77,17);				
	do
	{
		c = GetKey();		
		switch (c)
		{
			case Up: if(vt + 1 > 1) //Len dong tren
			{
				vt--;
				if(vt == 0) GoToXY(x + 12 + nienkhoa, y + 3 + vt);
				else if(vt == 1) GoToXY(x + 12 + hocki, y + 3 + vt);
			} break;
			case Down: if(vt + 1 < 2) //Xuong dong
			{
				vt++;	
				if(vt == 0) GoToXY(x + 12 + nienkhoa, y + 3 + vt);
				else if(vt == 1) GoToXY(x + 12 + hocki, y + 3 + vt);
			} break;
			case Enter: // in ds ltc co nk hk
			{				
				if (temp.nienKhoa.compare("") == 0)
				{
					GoToXY(x + 13, y + 12); cout << "Nien Khoa khong duoc de trong!";
					Sleep(2000);
					GoToXY(x + 13, y + 12); cout << "                                      ";
					vt = 0;
					GoToXY(x + 12 + nienkhoa, y + 3 + vt);
				}
				else if (temp.hocki == 0 )
				{
					GoToXY(x + 13, y + 12); cout << "Hoc Ki khong duoc de trong!";
					Sleep(2000);
					GoToXY(x + 13, y + 12); cout << "                                      ";
					vt = 1;
					GoToXY(x + 12 + hocki, y + 3 + vt);
				}
				else
				{
					int sl, i = 1, muiten = 0;
					float k = 0;
					int slltc = DemLTC(m,temp);
					int ltc[slltc]; // khoi tao mang ltc
					LTC(m, temp, ltc); // them vao mang ltc
					k = slltc; //So luong lop tc
					k = ceil(k/ 15); //So trang
					DeleteScreen();
					GoToXY(x + 19, y + 1 ); cout << " Nien Khoa: ";
					GoToXY(x + 31, y + 1); cout << temp.nienKhoa;
					GoToXY(x + 40, y + 1);cout << " Hoc Ki: ";
					GoToXY(x + 49, y + 1); cout << temp.hocki;
					DeleteSign();
					HuongDanLopTC();
					BangLopTC(60, 15, 15);
					InDSLTC( m, root, x, y, i, k, temp, ltc);
					modifyCursor(1, false);
					GoToXY(x - 7, y + 5); MuiTen();
					do
					{
						char kytu = GetKey();
						switch (kytu)
						{
						case Up: if(muiten + 1 > 1) //Mui ten di len
						{
							Normal();
							GoToXY(x - 7, y + 5 + muiten); cout << "   ";
							muiten--;
							GoToXY(x - 7, y + 5 + muiten); MuiTen();
						} break;
						case Down: if(muiten + 1 < 15 && muiten < (slltc - ((i - 1) * 15) - 1)) //Mui ten di xuong
						{
							Normal();
							GoToXY(x - 7, y + 5 + muiten); cout << "   ";
							muiten++;
							GoToXY(x - 7, y + 5 + muiten); MuiTen();
						} break;
						case Right: if(i < k) //Qua trang
						{
							XoaBangLopTC(x ,y);
							InDSLTC( m, root, x, y, ++i, k, temp, ltc);
							if(i == k && slltc % 15 != 0 && muiten > slltc % 15 - 1)
							{
								GoToXY(x - 7, y + 5 + muiten); cout << "   ";
								muiten = slltc - ((i - 1) * 15) - 1;
								GoToXY(x - 7, y + 5 + muiten); MuiTen();
							}
						} break;
						case Left: if(i > 1) //Qua trang
						{
							XoaBangLopTC(x ,y );
							InDSLTC( m, root, x, y, --i, k, temp, ltc);
						} break;
						case Insert: //Them loptc
						{
							ThemLopTinChi(m, root, 0, 13 , temp);
							DeleteGocTrai();
							slltc = DemLTC(m,temp);
							ltc[slltc]; // khoi tao mang ltc
							LTC(m, temp, ltc); // them vao mang ltc							
							k = slltc;
							k = ceil(k/ 15);
							GoToXY(x - 7, y + 5 + muiten); MuiTen();
							BangLopTC(60, 15, 15);
							XoaBangLopTC(x ,y);
							InDSLTC( m, root, x, y, i, k, temp, ltc);
							GoToXY(x - 7, y + 5 + muiten); MuiTen();
							DeleteSign();
							HuongDanLopTC();
							modifyCursor(1, false);			
						} break;
						case Delete: //Xoa loptc
						{
							int l = (i - 1) * 15 + muiten;
							XoaLopTinChi(m, x - 55 ,y , ltc[l]);
							slltc = DemLTC(m,temp);
							ltc[slltc]; // khoi tao mang ltc
							LTC(m, temp, ltc); // them vao mang ltc	
							DeleteGocTrai();							
							XoaBangLopTC(x ,y);
							InDSLTC( m, root, x, y, i, k, temp, ltc);
							GoToXY(x - 7, y + 5 + muiten); MuiTen();
							if( slltc % 15 == 0)
							{
								XoaBangLopTC(x ,y);
								InDSLTC( m, root, x, y, --i, --k, temp, ltc);
							}
							else if(i == k && slltc % 15 != 0 && muiten > slltc % 15 - 1)
							{
								GoToXY(x - 7, y + 5 + muiten); cout << "   ";
								muiten = slltc - ((i - 1) * 15) - 1;
								GoToXY(x - 7, y + 5 + muiten); MuiTen();
							}				
						} break;
						case Enter: //Hieu chinh loptc
						{
							Normal();
							int l = (i - 1) * 15 + muiten; // ltc thu l can chinh sua
							DKLTCPTR r = m.dsLopTC[ltc[l]]->DSDK;
							if ( r == NULL)
							{				
								HieuChinhLopTinChi(m, root, 0, 13, ltc[l]);	
								slltc = DemLTC(m,temp);
								ltc[slltc]; // khoi tao mang ltc
								LTC(m, temp, ltc); // them vao mang ltc				
								DeleteGocTrai();
								BangLopTC(60, 15, 15);
								XoaBangLopTC(x ,y);
								InDSLTC( m, root, x, y, i, k, temp, ltc);
								GoToXY(x - 7, y + 5 + muiten); MuiTen();
								if( slltc % 15 == 0)
								{
									XoaBangLopTC(x ,y);
									InDSLTC( m, root, x, y, --i, --k, temp, ltc);
								}
								else if(i == k && slltc % 15 != 0 && muiten > slltc % 15 - 1)
								{
									GoToXY(x - 7, y + 5 + muiten); cout << "   ";
									muiten = slltc - ((i - 1) * 15) - 1;
									GoToXY(x - 7, y + 5 + muiten); MuiTen();
								}				
								DeleteSign();
								HuongDanLopTC();
								modifyCursor(1, false);
							}
							else
							{
								for(;r != NULL;r = r->pNext)
								{

									if(r->info.diem != 0)
									{
										GoToXY(1,1); cout << 2;
										GoToXY(3,16); cout <<"Lop Tin Chi khong the chinh sua!";
										Sleep(2000);
										GoToXY(3,16); cout <<"                                 ";
										GoToXY(x - 7, y + 5 + muiten); MuiTen();
										break;
									}
									else
									{

										if(r->pNext == NULL)
										{
															
											HieuChinhLopTinChi(m, root, 0, 13, ltc[l]);	
											slltc = DemLTC(m,temp);
											ltc[slltc]; // khoi tao mang ltc
											LTC(m, temp, ltc); // them vao mang ltc				
											DeleteGocTrai();
											BangLopTC(60, 15, 15);
											XoaBangLopTC(x ,y);
											InDSLTC( m, root, x, y, i, k, temp, ltc);
											GoToXY(x - 7, y + 5 + muiten); MuiTen();
											if( slltc % 15 == 0)
											{
												XoaBangLopTC(x ,y);
												InDSLTC( m, root, x, y, --i, --k, temp, ltc);
											}
											else if(i == k && slltc % 15 != 0 && muiten > slltc % 15 - 1)
											{
												GoToXY(x - 7, y + 5 + muiten); cout << "   ";
												muiten = slltc - ((i - 1) * 15) - 1;
												GoToXY(x - 7, y + 5 + muiten); MuiTen();
											}				
											DeleteSign();
											HuongDanLopTC();
											modifyCursor(1, false);
										}
									}
								}
							}				
						} break;
						case ESC: break;
						} 
						if(kytu == ESC) // thoat ra de nhap laij nk, hk
						{
							DeleteScreen();
							DeleteSign();
							HuongDanNhapNKHK();
							XoaBangNhapNKHK(x, y);
							BangNhapNKHK(x, y);						
							temp.nienKhoa.assign("");	// gan temp.niekhoa la rong
							temp.hocki = 0;
							nienkhoa = 0, hocki = 0, vt = 0;
							GoToXY(x + 12 + nienkhoa, y + 3 + vt);
							modifyCursor(1, true);
							break;	
						}			
					} while(1);
				}
			} break;
			case ESC:
			{
				DeleteScreen(); 
				DeleteGocTrai();
				DeleteSign();
				return;
			}
			default: switch(vt)
			{
				case 0: //Vi tri con tro o phan nien khoa
				{
					
					if(c == Backspace)
					{
						if(nienkhoa > 0)
						{
 							temp.nienKhoa= temp.nienKhoa.substr(0, --nienkhoa);
							GoToXY(x + 12 + nienkhoa, y + 3 + vt); cout << " ";
							GoToXY(x + 12 + nienkhoa, y + 3 + vt);
						}		
					}
					else if(c == 45 || (c >= 48 && c <= 57)) //bao gom ky tu (-), so
					{	
						if(nienkhoa < 9)
						{
							temp.nienKhoa += c;
							nienkhoa++;
							cout << c;
						}
						else
						{
							GoToXY(x + 15, y + 12); cout << "Nien Khoa chi toi da 9 ky tu!";							
							Sleep(2000);
							GoToXY(x + 15, y + 12); cout << "                               ";
							GoToXY(x + 12 + nienkhoa, y + 3 + vt);
						}						
					}					
				} break;
				case 1: //Vi tri con tro o phan hoc ki
				{
					if (nienkhoa == 0) 
					{
						GoToXY(x + 15, y + 12); cout << "Nien Khoa khong duoc trong!";							
						Sleep(1000);
						GoToXY(x + 15, y + 12); cout << "                               ";
						vt--;
						GoToXY(x + 12 + nienkhoa, y + 3 + vt);
					}
					else 
					{
					if(c == Backspace)
					{
						if(hocki > 0)
						{
							temp.hocki = 0;
							hocki--;
							GoToXY(x + 12 + hocki, y + 3 + vt); cout << " ";
							GoToXY(x + 12 + hocki, y + 3 + vt);
						}		
					}
					else if(c >= 49 && c <= 51) //chi lay so 1,2,3
					{
						if ( hocki < 1)
						{
							switch(c)
							{
								case '1': temp.hocki = temp.hocki + 1; break;
								case '2': temp.hocki = temp.hocki + 2; break;
								case '3': temp.hocki = temp.hocki + 3; break;	
							}	
							hocki++;
							cout << c;
						}
						else 
						{
							GoToXY(x + 15, y + 12); cout << "Hoc Ki: 1, 2, 3!";
							Sleep(1000);
							GoToXY(x + 15, y + 12); cout << "                               ";
							GoToXY(x + 12 + hocki, y + 3 + vt);
						}
						
					}
					else 
					{
						GoToXY(x + 15, y + 12); cout << "Hoc Ki: 1, 2, 3!";
						Sleep(1000);
						GoToXY(x + 15, y + 12); cout << "                               ";
						GoToXY(x + 12 + hocki, y + 3 + vt);
					}
					}

				} break;
			}
		}
	} while(1);
}

//______________________________________________CAUB(DSSVDK)____________________________________________________--


void InDSSVDK(DSLTC dsLopTinChi, DSSinhVien &dsSinhVien, DKLTCPTR p, int t, int i, float page, lopTinChi temp) //In du lieu SVDK vao bang, (60, 15) toa do, j trang hien tai, i chi so loptc
{
	Normal();
	int kt, dem = -1, sv, sldk, k;
	sldk = dsLopTinChi.dsLopTC[i]->SLDK;
	if( t * 15 > sldk) kt = sldk; // vtri ket thuc
	else kt = t * 15;
	k = (t - 1) * 15;	
		do
		{			
			if(p->info.trangThai == conDangKi)
			{
				dem++;
				GoToXY(80 + 3, 15 + dem + 4); cout << p->info.maSV; // p chay tu dau
				sv = Search_infoSV(dsSinhVien, p->info.maSV); // Tim sv thu i co msv là...
				GoToXY(80 + 19, 15 + dem + 4); cout << dsSinhVien.DSSV[sv].ho << " "
												<< dsSinhVien.DSSV[sv].ten;
				k++;
			}			
			p = p->pNext;				
		} while(p != NULL && k < kt);
		GoToXY(60 + 43, 15 + 20); cout << "Trang " << t << "/" << page;			
	
}
void NhapThamSoSVDK(DSLTC dsLopTinChi, MHPTR root, DKLTCPTR p, DSSinhVien dsSinhVien, int x, int y) //Nhap nk, hk, nhom , manh de in ds ltcda mo de dki
{
	modifyCursor(1, true);
	int n, vt = 0, mamh= 0, nienkhoa = 0, hocki = 0, nhom = 0;
	char c, g;
	DKLTCPTR r;
	lopTinChi temp; //Xai tam de them vao mang sau khi nhap xong
	temp.hocki = 0;
	temp.nhom = 0;
	Normal();
	GoToXY(15 ,14); cout << "NHAP THAM SO";
	BangThamSoSVDK( x, y); 								
	GoToXY(16,16);				
	do
	{
		c = GetKey();		
		switch (c)
		{
			case Up: if(vt + 1 > 1) //Len dong tren
			{
				vt--;
				if(vt == 0) GoToXY(x + 16 + nienkhoa, y + 3 + vt);
				else if(vt == 1) GoToXY(x + 16 + hocki, y + 3 + vt);
				else if(vt == 2) GoToXY(x + 16 + nhom, y + 3 + vt);
				else if(vt == 3) GoToXY(x + 16 + mamh, y + 3 + vt);
			} break;
//			case Enter: if(vt + 1 < 4) //Xuong dong
//			{
//				vt++;	
//				if(vt == 0) GoToXY(x + 16 + nienkhoa, y + 3 + vt);
//				else if(vt == 1) GoToXY(x + 16 + hocki, y + 3 + vt);
//				else if(vt == 2) GoToXY(x + 16 + nhom, y + 3 + vt);
//				else if(vt == 3) GoToXY(x + 16 + mamh, y + 3 + vt);
//
//			} break;
			case Down: if(vt + 1 < 4) //Xuong dong
			{
				vt++;	
				if(vt == 0) GoToXY(x + 16 + nienkhoa, y + 3 + vt);
				else if(vt == 1) GoToXY(x + 16 + hocki, y + 3 + vt);
				else if(vt == 2) GoToXY(x + 16 + nhom, y + 3 + vt);
				else if(vt == 3) GoToXY(x + 16 + mamh, y + 3 + vt);
			} break;
			case Enter: // in ds sinh vien dk
			{	
				if (temp.nienKhoa.compare("") == 0)
				{
					GoToXY(x + 13, y + 12); cout << "Nien Khoa khong duoc de trong!";
					Sleep(2000);
					GoToXY(x + 13, y + 12); cout << "                                      ";
					vt = 0;
					GoToXY(x + 16 + nienkhoa, y + 3 + vt);
				}
				else if (temp.hocki == 0 )
				{
					GoToXY(x + 13, y + 12); cout << "Hoc Ki khong duoc de trong!";
					Sleep(2000);
					GoToXY(x + 13, y + 12); cout << "                                      ";
					vt = 1;
					GoToXY(x + 16 + hocki, y + 3 + vt);
				}
				else if (temp.nhom == 0 || nhom == 0)
				{
					GoToXY(x + 13, y + 12); cout << "Nhom lon hon 0 va khong duoc de trong!";
					Sleep(2000);
					GoToXY(x + 13, y + 12); cout << "                                      ";
					vt = 2;
					GoToXY(x + 16 + nhom, y + 3 + vt);
				}
				else if (temp.maMonHoc.compare("") == 0)
				{
					GoToXY(x + 13, y + 12); cout << "Ma Mon Hoc khong duoc de trong!";
					Sleep(2000);
					GoToXY(x + 13, y + 12); cout << "                                      ";
					vt = 3;
					GoToXY(x + 16 + mamh, y + 3 + vt);
				}
				else 
				{
					DeleteScreen();
					int t = 1; // trang hien tai
					float page = 0;
					ChuanHoaInHoa(temp.maMonHoc); // in hoa chu cai thuong
					int i = Search_infoLTC(dsLopTinChi, temp);// tim ltc thi i co nk, hk, nhom, mnh
					if(i == -1) 
					{
						GoToXY(60, 15); cout << "KHONG TIM THAY LOP TIN CHI DE IN DANH SACH SINH VIEN DANG KI";
						Sleep(2000);
						GoToXY(60, 15); cout << "                                                            ";
						vt = 4;
						GoToXY(x + 16 , y + 3 + vt);
						break;
					} 
					else 
					{																	
						page = dsLopTinChi.dsLopTC[i]->SLDK;
						page = ceil(page/15);
						p = dsLopTinChi.dsLopTC[i]->DSDK;
						if( p == NULL)
						{
							GoToXY(60, 15); cout << "Lop Tin Chi chua co sinh vien dang ki!";
							Sleep(2000);
							GoToXY(60, 15); cout << "                                       ";
							vt = 4;
							GoToXY(x + 16 , y + 3 + vt);
							break;
						}
						else
						{
							BangSVDK( 80,15,15);	
							XoaBangSVDK(80,15);
							InDSSVDK(dsLopTinChi, dsSinhVien, p, t, i, page, temp);
							do
							{				
								char z;
								z = GetKey();	
								switch (z)
								{				
								case Right: if(t < page) //Qua trang
								{
									XoaBangSVDK(79,15);					
									InDSSVDK(dsLopTinChi, dsSinhVien, Search_infoDSDK(dsLopTinChi, p, t, i), ++t,i, page, temp);
								} break;
								case Left: if(t > 1) //Qua trang
								{
									XoaBangSVDK(79,15);
									InDSSVDK(dsLopTinChi, dsSinhVien, p, --t, i, page, temp);
								} break;
								case ESC: break; // thoat switch
							}
							if(z == ESC) // Thoat ra de nhap laij nk, hk....
							{
								DeleteScreen();
								XoaBangThamSo(0,13);						
								temp.nienKhoa.assign("");	
								temp.maMonHoc.assign("");
								temp.hocki = 0;
								temp.nhom = 0;
								mamh= 0, nienkhoa = 0, hocki = 0, nhom = 0, vt =0;
								GoToXY(x + 16 + nienkhoa, y + 3 + vt);
							break;	
							}		
						} while (1);
						}						
					}
				}
			} break;
			case F1:
			{
				DeleteScreen();
				BangMonHoc(77, 15, 15);
				TenMonHocTangDan(root, 87, 12);
				if(vt == 0) GoToXY(x + 16 + nienkhoa, y + 3 + vt);
				else if(vt == 1) GoToXY(x + 16 + hocki, y + 3 + vt);
				else if(vt == 2) GoToXY(x + 16 + nhom, y + 3 + vt);
				else if(vt == 3) GoToXY(x + 16 + mamh, y + 3 + vt);
				break;
			}
			case ESC: // Thoat ra menu
			{
				DeleteScreen(); 
				DeleteGocTrai();
				DeleteSign();
				return;
			}
			default: switch(vt)
			{
				case 0: //Vi tri con tro o phan nien khoa
				{
					
					if(c == Backspace)
					{
						if(nienkhoa > 0)
						{
 							temp.nienKhoa= temp.nienKhoa.substr(0, --nienkhoa);
							GoToXY(x + 16 + nienkhoa, y + 3 + vt); cout << " ";
							GoToXY(x + 16 + nienkhoa, y + 3 + vt);
						}		
					}
					else if(c == 45 || (c >= 48 && c <= 57)) //bao gom ky tu (-), so
					{	
						if(nienkhoa < 9)
						{
							temp.nienKhoa += c;
							nienkhoa++;
							cout << c;
						}
						else
						{
							GoToXY(x + 15, y + 12); cout << "Nien Khoa chi toi da 9 ky tu!";							
							Sleep(2000);
							GoToXY(x + 15, y + 12); cout << "                               ";
							GoToXY(x + 16 + nienkhoa, y + 3 + vt);
						}						
					}					
				} break;
				case 1: //Vi tri con tro o phan hoc ki
				{
					if (nienkhoa == 0) 
					{
						GoToXY(x + 15, y + 12); cout << "Nien Khoa khong duoc trong!";							
						Sleep(1000);
						GoToXY(x + 15, y + 12); cout << "                               ";
						vt--;
						GoToXY(x + 16 + nienkhoa, y + 3 + vt);
					}
					else 
					{
					if(c == Backspace)
					{
						if(hocki > 0)
						{
							temp.hocki = 0;
							hocki--;
							GoToXY(x + 16 + hocki, y + 3 + vt); cout << " ";
							GoToXY(x + 16 + hocki, y + 3 + vt);
						}		
					}
					else if(c >= 49 && c <= 51) //chi lay so 1,2,3
					{
						if ( hocki < 1)
						{
							switch(c)
							{
								case '1': temp.hocki = temp.hocki + 1; break;
								case '2': temp.hocki = temp.hocki + 2; break;
								case '3': temp.hocki = temp.hocki + 3; break;	
							}	
							hocki++;
							cout << c;
						}
						else 
						{
							GoToXY(x + 15, y + 12); cout << "Hoc Ki: 1, 2, 3!";
							Sleep(1000);
							GoToXY(x + 15, y + 12); cout << "                               ";
							GoToXY(x + 16 + hocki, y + 3 + vt);
						}
						
					}
					else 
					{
						GoToXY(x + 15, y + 12); cout << "Hoc Ki: 1, 2, 3!";
						Sleep(1000);
						GoToXY(x + 15, y + 12); cout << "                               ";
						GoToXY(x + 16 + hocki, y + 3 + vt);
					}
					}

				} break;
				case 2: //Vi tri con tro o phan nhom
				{
					if (hocki == 0) 
					{
						GoToXY(x + 15, y + 12); cout << "Hoc Ki khong duoc trong!";							
						Sleep(1000);
						GoToXY(x + 15, y + 12); cout << "                               ";
						vt--;
						GoToXY(x + 16 + hocki, y + 3 + vt);
					}
					else 
					{
						if(c == Backspace)
						{
							if(nhom > 0)
							{
								temp.nhom = temp.nhom/10;
								nhom--;
								GoToXY(x + 16 + nhom, y + 3 + vt); cout << " ";
								GoToXY(x + 16 + nhom, y + 3 + vt);
							}		
						}
						else if(c >= 48 && c <= 57)
						{
							switch(c)
							{
								case '0': temp.nhom = temp.nhom * 10 + 0; break;
								case '1': temp.nhom = temp.nhom * 10 + 1; break;
								case '2': temp.nhom = temp.nhom * 10 + 2; break;
								case '3': temp.nhom = temp.nhom * 10 + 3; break;
								case '4': temp.nhom = temp.nhom * 10 + 4; break;
								case '5': temp.nhom = temp.nhom * 10 + 5; break;
								case '6': temp.nhom = temp.nhom * 10 + 6; break;
								case '7': temp.nhom = temp.nhom * 10 + 7; break;
								case '8': temp.nhom = temp.nhom * 10 + 8; break;
								case '9': temp.nhom = temp.nhom * 10 + 9; break;
							}
							nhom++;
							cout << c;
							if (temp.nhom == 0 ) 
							{
								GoToXY(x + 15, y + 12); cout << " Nhom phai lon hon 0!";
								Sleep(1000);
								GoToXY(x + 15, y + 12); cout << "                               ";
								GoToXY(x + 16 + nhom, y + 3 + vt);
							}
						}
					}	
				} break;
				case 3: //Vi tri con tro o phan ma mon hoc
				{
					if (nhom == 0) 
					{
						GoToXY(x + 15, y + 12); cout << "Nhom khong duoc trong!";							
						Sleep(1000);
						GoToXY(x + 15, y + 12); cout << "                               ";
						vt--;
						GoToXY(x + 16 + nhom, y + 3 + vt);
					}
					else 
					{
						if(c == Backspace)
						{
							if(mamh > 0)
							{
								temp.maMonHoc = temp.maMonHoc.substr(0, --mamh);
								GoToXY(x + 16 + mamh, y + 3 + vt); cout << " ";
								GoToXY(x + 16 + mamh, y + 3 + vt);
							}		
						}
						else if((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122)) // lay so, in hoa, in thuong
						{
							if( temp.maMonHoc.length() < 7)
							{
								temp.maMonHoc += c;
								mamh++;
								cout << c;
							}
							else 
							{
								GoToXY(x + 15, y + 12); cout << "Ma Mon Hoc chi toi da 7 ky tu!";							
								Sleep(1000);
								GoToXY(x + 15, y + 12); cout << "                               ";
								GoToXY(x + 16 + mamh, y + 3 + vt);
							}
						}
					} 
				} break;
			}
		}
	} while(1);
}
//____________________________________________CAUE(DSMONHOC)____________________________________________________
void Intrav(MHPTR root, int x, int y, int i) //In thong tin mon hoc ra bang
{  	
	const int STACKSIZE = 500;
   	MHPTR Stack[STACKSIZE];
   	MHPTR p = root;
   	int bd = (i - 1) * 15; //Vi tri bat dau de in ra bang
   	int kt = i * 15; // Vi tri ket thuc luc in ra bang
   	int j = -1; //Dung de xuong dong khi in
   	int sp = -1;	 // Khoi tao Stack rong
   	do //LNR
	{
		while (p != NULL)
    	{
			Stack[++sp] = p;
			p = p->pLeft;
    	}
      	if (sp != -1)
      	{	
			p = Stack[sp--];
			j++;
			if(j >= bd && j < kt)
			{
				GoToXY(x + 2, y + 4 + j - bd); cout << p->info.maMH;
				GoToXY(x + 15, y + 4 + j - bd); cout << p->info.tenMH;
				GoToXY(x + 45, y + 4 + j - bd); cout << p->info.STCLT;
				GoToXY(x + 52, y + 4 + j - bd); cout << p->info.STCTH;
			}
			p = p->pRight;
    	}
		else break;
	} while (1);
}
void InDSMH(MHPTR p, int x, int y, int i, double k) //In ds mon hoc trang/page
{
	Intrav(p, x, y, i);
	GoToXY(x + 25, y + 20); cout << "Trang " << i << "/" << k;
}

void ThemMonHoc(MHPTR &root, int x, int y) //Them 1 monhoc // x=0,y=13
{
	modifyCursor(1, true);
	int n, vt = 0, mamh = 0, tenmh = 0, stclt = 0, stcth = 0;
	char c;
	MHPTR temp = new NodeMonHoc; //Xai tam de them vao mang sau khi nhap xong
	temp->info.STCLT = 0;
	temp->info.STCTH = 0;
	Normal();
	GoToXY(15 ,14); cout << "THEM MON HOC";
	BangThemMonHoc(x, y);	
	string MenuLTC[4] = {"Ma Mon Hoc:",
						"Ten Mon Hoc:    ",
						"So TCLT:   	",
						"So TCTH:     	"};
	for(int i = 0; i < 4; i++) { GoToXY(x + 1, y + 2 + i); cout << MenuLTC[i]; }								
	GoToXY(16,15);				
	do
	{
		c = GetKey();
		switch (c)
		{
			case Up: if(vt + 1 > 1) //Len dong tren
			{
				vt--;
				if(vt == 0) GoToXY(x + 16 + mamh, y + 2 + vt);
				else if(vt == 1) GoToXY(x + 16 + tenmh, y + 2 + vt);
				else if(vt == 2) GoToXY(x + 16 + stclt, y + 2 + vt);
				else if(vt == 3) GoToXY(x + 16 + stcth, y + 2 + vt);
			} break;
			case Enter: if(vt + 1 < 4) //Xuong dong
			{
				vt++;	
				if(vt == 0) GoToXY(x + 16 + mamh, y + 2 + vt);
				else if(vt == 1) GoToXY(x + 16 + tenmh, y + 2 + vt);
				else if(vt == 2) GoToXY(x + 16 + stclt, y + 2 + vt);
				else if(vt == 3) GoToXY(x + 16 + stcth, y + 2 + vt);

			} break;
			case Down: if(vt + 1 < 4) //Xuong dong
			{
				vt++;
				if(vt == 0) GoToXY(x + 16 + mamh, y + 2 + vt);
				else if(vt == 1) GoToXY(x + 16 + tenmh, y + 2 + vt);
				else if(vt == 2) GoToXY(x + 16 + stclt, y + 2 + vt);
				else if(vt == 3) GoToXY(x + 16 + stcth, y + 2 + vt);
			} break;
			case F2: //Luu du lieu
			{
				ChuanHoaInHoa(temp->info.maMH);
				ChuanHoaString(temp->info.tenMH);
				if (temp->info.maMH.compare("") == 0)
				{
					GoToXY(x + 13, y + 9); cout << "Ma Mon Hoc khong duoc de trong!";
					Sleep(2000);
					GoToXY(x + 13, y + 9); cout << "                                      ";
					vt = 0;
					GoToXY(x + 16 + mamh, y + 2 + vt);
				}
				else if(search(root, temp->info.maMH) != NULL)
				{
					GoToXY(x + 13, y + 9); cout << "Ma Mon Hoc bi trung!";
					Sleep(2000);
					GoToXY(x + 13, y + 9); cout << "                        ";
					vt = 0;
					GoToXY(x + 16 + mamh, y + 2 + vt);
				}
				else if (temp->info.tenMH.compare("") == 0)
				{
					GoToXY(x + 13, y + 9); cout << "Ten Mon Hoc khong duoc de trong!";
					Sleep(2000);
					GoToXY(x + 13, y + 9); cout << "                                      ";
					vt = 1;
					GoToXY(x + 16 + tenmh, y + 2 + vt);
				}
				else if (stclt == 0)
				{
					GoToXY(x + 13, y + 9); cout << "So TCLT khong duoc de trong!";
					Sleep(2000);
					GoToXY(x + 13, y + 9); cout << "                                      ";
					vt = 2;
					GoToXY(x + 16 + stclt, y + 2 + vt);
				}
				else if (stcth == 0)
				{
					GoToXY(x + 13, y + 9); cout << "So TCTH khong duoc de trong!";
					Sleep(2000);
					GoToXY(x + 13, y + 9); cout << "                                      ";
					vt = 3;
					GoToXY(x + 16 + stcth, y + 2 + vt);
				}
				else 
				{
					Insert_node(root,temp->info);
					nMH++;
					SaveMonHoc ( root);
					GoToXY(x + 15, y + 9); cout << "                                 ";
					GoToXY(x + 15, y + 9); cout << "Du lieu da duoc luu lai";
					Sleep(2500);
					GoToXY(x + 15, y + 9); cout << "                                 ";
					return;
				}
			break;
			}
			case ESC: //Thoat ra
			{
				if(temp->info.maMH.compare("") == 0 || temp->info.tenMH.compare("") == 0 || stclt == 0 || stcth == 0 )
				{
					GoToXY(x + 15, y + 9); cout << "                                 ";
					GoToXY(x + 15, y + 9); cout << "Du lieu nhap chua dung";
					GoToXY(x + 15, y + 10); cout << "                                 ";
					GoToXY(x + 15, y + 10); cout << "Nhan ESC neu ban van muon thoat";
					char kt = GetKey();
					if(kt == ESC) 
					{
						GoToXY(x + 15, y + 9); cout << "                                ";
						GoToXY(x + 15, y + 10); cout << "                                ";
						return;
					}
				}
				else
				{
					GoToXY(x + 15, y + 8); cout << "                                ";
					GoToXY(x + 15, y + 8); cout << "Ban co muon luu du lieu?";
					GoToXY(x + 15, y + 9); cout << "                                ";
					GoToXY(x + 15, y + 9); cout << "LUU (Y)\t KHONG LUU (N)";
					do
					{
						char kt = GetKey();
						if(kt == 'Y' || kt == 'y') 
						{
							Insert_node(root,temp->info);
							nMH++;
							SaveMonHoc ( root);
							GoToXY(x + 15, y + 9); cout << "                                 ";
							GoToXY(x + 15, y + 9); cout << "Du lieu da duoc luu lai";
							Sleep(2500);
							GoToXY(x + 15, y + 9); cout << "                                 ";
							return;
						}
						else if(kt == 'N' || kt == 'n') { return; }
					} while(1);
				}
				vt = 5;
				break;
			}
			default: switch(vt)
			{
				case 0: //Vi tri con tro o phan mamh
				{	

					if(c == Backspace)
					{
						if(mamh > 0)
						{
							temp->info.maMH = temp->info.maMH.substr(0, --mamh);
							GoToXY(x + 16 + mamh, y + 2 + vt); cout << " ";
							GoToXY(x + 16 + mamh, y + 2 + vt);
						}		
					}
					else if((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122)) // lay so, in hoa, in thuong
					{
						if( temp->info.maMH.length() < 7)
						{
							temp->info.maMH += c;
							mamh++;
							cout << c;
						}
						else 
						{
							GoToXY(x + 15, y + 12); cout << "Ma Mon Hoc chi toi da 7 ky tu!";							
							Sleep(2000);
							GoToXY(x + 15, y + 12); cout << "                               ";
							GoToXY(x + 16 + mamh, y + 2 + vt);
						}
					}
				} break;
				case 1: //Vi tri con tro o phan tenmh
				{
					if (mamh == 0) 
					{
						GoToXY(x + 15, y + 12); cout << "Ma Mon Hoc khong duoc trong!";							
						Sleep(2000);
						GoToXY(x + 15, y + 12); cout << "                               ";
						vt--;
						GoToXY(x + 16 + mamh, y + 2 + vt);
					}
					else 
					{
						if(c == Backspace)
						{
							if(tenmh > 0)
							{
							temp->info.tenMH= temp->info.tenMH.substr(0, --tenmh);
							GoToXY(x + 16 + tenmh, y + 2 + vt); cout << " ";
							GoToXY(x + 16 + tenmh, y + 2 + vt);
							}		
						}
						else if((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122) || c == 32) // lay so, in hoa, in thuong
						{	

							temp->info.tenMH += c;
							tenmh++;
							cout << c;
						}
					}
				} break;
				case 2: //Vi tri con tro o phan stclt
				{
					if (tenmh == 0) 
					{
						GoToXY(x + 15, y + 12); cout << "Ten Mon Hoc khong duoc trong!";							
						Sleep(2000);
						GoToXY(x + 15, y + 12); cout << "                               ";
						vt--;
						GoToXY(x + 16 + tenmh, y + 2 + vt);
					}
					else 
					{
					if(c == Backspace)
					{
						if(stclt > 0)
						{
							temp->info.STCLT = temp->info.STCLT/10;
							stclt--;
							GoToXY(x + 16 + stclt, y + 2 + vt); cout << " ";
							GoToXY(x + 16 + stclt, y + 2 + vt);
						}		
					}
					else if(c >= 48 && c <= 57) //lay so
					{
						
						switch(c)
						{
							case '0': temp->info.STCLT = temp->info.STCLT * 10 + 0; break;
							case '1': temp->info.STCLT = temp->info.STCLT * 10 + 1; break;
							case '2': temp->info.STCLT = temp->info.STCLT * 10 + 2; break;
							case '3': temp->info.STCLT = temp->info.STCLT * 10 + 3; break;
							case '4': temp->info.STCLT = temp->info.STCLT * 10 + 4; break;
							case '5': temp->info.STCLT = temp->info.STCLT * 10 + 5; break;
							case '6': temp->info.STCLT = temp->info.STCLT * 10 + 6; break;
							case '7': temp->info.STCLT = temp->info.STCLT * 10 + 7; break;
							case '8': temp->info.STCLT = temp->info.STCLT * 10 + 8; break;
							case '9': temp->info.STCLT = temp->info.STCLT * 10 + 9; break;

						}	
						stclt++;
						cout << c;
					}
					}

				} break;
				case 3: //Vi tri con tro o phan stcth
				{
					if (stclt == 0) 
					{
						GoToXY(x + 15, y + 12); cout << "So TCLT khong duoc trong!";							
						Sleep(2000);
						GoToXY(x + 15, y + 12); cout << "                               ";
						vt--;
						GoToXY(x + 16 + stclt, y + 2 + vt);
					}
					else 
					{
					if(c == Backspace)
					{
						if(stcth > 0)
						{
							temp->info.STCTH = temp->info.STCTH/10;
							stcth--;
							GoToXY(x + 16 + stcth, y + 2 + vt); cout << " ";
							GoToXY(x + 16 + stcth, y + 2 + vt);
						}		
					}
					else if(c >= 48 && c <= 57) //lay so
					{						
						switch(c)
						{
							case '0': temp->info.STCTH = temp->info.STCTH * 10 + 0; break;
							case '1': temp->info.STCTH = temp->info.STCTH * 10 + 1; break;
							case '2': temp->info.STCTH = temp->info.STCTH * 10 + 2; break;
							case '3': temp->info.STCTH = temp->info.STCTH * 10 + 3; break;
							case '4': temp->info.STCTH = temp->info.STCTH * 10 + 4; break;
							case '5': temp->info.STCTH = temp->info.STCTH * 10 + 5; break;
							case '6': temp->info.STCTH = temp->info.STCTH * 10 + 6; break;
							case '7': temp->info.STCTH = temp->info.STCTH * 10 + 7; break;
							case '8': temp->info.STCTH = temp->info.STCTH * 10 + 8; break;
							case '9': temp->info.STCTH = temp->info.STCTH * 10 + 9; break;
						}	
						stcth++;
						cout << c;
					}
					}
				} break;
			}
		}
	} while(1);
}
void delKey(MHPTR &root, string x)     // xoa nut co mamh la...
{
	int i = x.compare(root->info.maMH);/*	i=0: Hai chuoi co ma Ascii bang nhau.
//											i<0: Chuoi thu nhat co ma Ascii nho hon chuoi thu hai.
//											i>0: Chuoi thu nhat co ma Ascii lon hon chuoi thu hai.*/
    if (root == NULL) return;
    else if (i < 0) return delKey(root->pLeft, x);
    else if (i > 0) return delKey(root->pRight, x);
    else // root->info.maMH = x ( i = 0)
    {
        if (root->pLeft == NULL) root = root->pRight;    // Node chi co cay con phai
        else if (root->pRight == NULL) root = root->pLeft;   // Node chi co cay con trai
        else // Node co ca 2 con
        {
            MHPTR q = root->pRight;
            while (q->pLeft != NULL)
            {
                q = q->pLeft;
            }// den day p la nut cuc trai cua cay con ben phai cua nut goc root
            root->info.maMH.assign(q->info.maMH); // root->info.maMH = q->info.maMH
            delKey(root->pRight, q->info.maMH);
        }
    }
}
int Search_infoLTCMH(DSLTC dsLopTinChi, string x) // ltc thu i có mamh
{
	for (int i = 0; i < dsLopTinChi.n; i++)
	{
		if( x == dsLopTinChi.dsLopTC[i]->maMonHoc)
		return i;
  	}
	return -1;
}
void XoaMonHoc(MHPTR &root,DSLTC dsLopTinChi, int i, int vt, int &sl) //Xoa 1 mon hoc trang i
{
	Normal();
	const int STACKSIZE = 500;
	MHPTR Stack[STACKSIZE];
	MHPTR p = root;	
	int key = (i - 1) * 15 + vt; //Vi tri cua mon hoc do
	int dem = -1;	//Dung de dem den vi tri cua mon hoc
	int sp = -1;	 // Khoi tao Stack rong
	do //LNR
	{ 
		while (p != NULL)
		{
			Stack[++sp]= p;
			p = p->pLeft;
    	}
		if (sp != -1)
		{	
			p = Stack[sp--];
			if(++dem == key) break; //Tai vi tri mon hoc do thi dung
			p = p->pRight;
    	}
    	else break;
	} while(1);
	int checkltc = Search_infoLTCMH(dsLopTinChi, p->info.maMH);
	if( checkltc != -1)
	{
		GoToXY(14, 15); cout << "Khong the xoa vi mon hoc da duoc mo lop tin chi!";
		Sleep(2500);
		GoToXY(14, 15); cout << "                                                ";
	}
	else
	{
		GoToXY(15, 15); cout << "Ban co muon xoa mon hoc?";
		GoToXY(15, 16); cout << "XOA (Y)\t KHONG XOA (N)";
		char kt;
		do
		{
			kt = GetKey();
			if(kt == 'Y' || kt == 'y')
			{
				delKey(root, p->info.maMH);
				SaveMonHoc(root);
				GoToXY(15, 15); cout << "                                  ";
				GoToXY(15, 16); cout << "                                  ";
				GoToXY(15, 14); cout << "Da xoa mon hoc thanh cong";				
				Sleep(2500);
				GoToXY(15, 14); cout << "                                  ";				
				sl--;				
				return;
			}
			else if(kt == 'N' || kt == 'n') { return; }
		} while(1);
	}
}
void HieuChinhMonHoc( MHPTR &root, DSLTC dsLopTinChi,int i, int k) // Hieu chinh 1 mon hoc
{
	Normal();
	int x= 0, y=13;
	modifyCursor(1, true);
	char c;
	int mamh, tenmh, stclt = 0, stcth = 0;
	int vt = 0;
	MHPTR p = root;
	const int STACKSIZE = 500;
	MHPTR Stack[STACKSIZE];
	int key = (i - 1) * 15 + k; //Vi tri cua mon hoc do
	int dem = -1; // Dem toi vi tri cua mon hoc do
	int sp = -1;	 // Khoi tao Stack rong
	do
	{ 
		while (p != NULL)
  		{
			Stack[++sp] = p;
			p = p->pLeft;
    	}
		if (sp != -1)
		{	
			p = Stack[sp--];
			if(++dem == key) break;
			p = p->pRight;
    	}
    	else break;
	} while(1);
	GoToXY(15, 14); cout << "HIEU CHINH MON HOC";
	BangThemMonHoc(x,y);	
	string MenuLTC[4] = {"Ma Mon Hoc:   ",
						"Ten Mon Hoc:   ",
						"So TCLT:     	",
						"So TCTH: 		"};
	for(int i = 0; i < 4; i++) { GoToXY(x + 1, y + 2 + i); cout << MenuLTC[i]; }
	MonHoc temp = p->info;
	GoToXY(x + 16, y + 2); cout << temp.maMH;							
	GoToXY(x + 16, y + 3); cout << temp.tenMH;							
	GoToXY(x + 16, y + 4); cout << temp.STCLT;							
	GoToXY(x + 16, y + 5); cout << temp.STCTH;									
	mamh = temp.maMH.length();
	tenmh = temp.tenMH.length();
	int so = temp.STCLT;
	while(so > 0) //LAY SO CHU SO
	{
		so = so / 10;
		stclt++;
	}
	so = temp.STCTH;
	while(so > 0) //LAY SO CHU SO
	{
		so = so / 10;
		stcth++;
	}					
	GoToXY(x + 16 + mamh, y + 2);				
	do
	{
		c = GetKey();
		switch (c)
		{
			case Up: if(vt + 1 > 1) //Len dong tren
			{
				vt--;
				if(vt == 0) GoToXY(x + 16 + mamh, y + 2 + vt);
				else if(vt == 1) GoToXY(x + 16 + tenmh, y + 2 + vt);
				else if(vt == 2) GoToXY(x + 16 + stclt, y + 2 + vt);
				else if(vt == 3) GoToXY(x + 16 + stcth, y + 2 + vt);
			} break;
			case Enter: if(vt + 1 < 4) //Xuong dong
			{
				vt++;
				if(vt == 0) GoToXY(x + 16 + mamh, y + 2 + vt);
				else if(vt == 1) GoToXY(x + 16 + tenmh, y + 2 + vt);
				else if(vt == 2) GoToXY(x + 16 + stclt, y + 2 + vt);
				else if(vt == 3) GoToXY(x + 16 + stcth, y + 2 + vt);
			} break;
			case Down: if(vt + 1 < 4) //Xuong dong
			{
				vt++;
				if(vt == 0) GoToXY(x + 16 + mamh, y + 2 + vt);
				else if(vt == 1) GoToXY(x + 16 + tenmh, y + 2 + vt);
				else if(vt == 2) GoToXY(x + 16 + stclt, y + 2 + vt);
				else if(vt == 3) GoToXY(x + 16 + stcth, y + 2 + vt);
			} break;
			case F2: //Luu du lieu
			{
				ChuanHoaInHoa(temp.maMH);
				ChuanHoaString(temp.tenMH);
				if (temp.maMH.compare("") == 0)
				{
					GoToXY(x + 13, y + 9); cout << "Ma Mon Hoc khong duoc de trong!";
					Sleep(2000);
					GoToXY(x + 13, y + 9); cout << "                                      ";
					vt = 0;
					GoToXY(x + 16 + mamh, y + 2 + vt);
				}
				else if (temp.tenMH.compare("") == 0)
				{
					GoToXY(x + 13, y + 9); cout << "Ten Mon Hoc khong duoc de trong!";
					Sleep(2000);
					GoToXY(x + 13, y + 9); cout << "                                      ";
					vt = 1;
					GoToXY(x + 16 + tenmh, y + 2 + vt);
				}
				else if (stclt == 0)
				{
					GoToXY(x + 13, y + 9); cout << "So TCLT khong duoc de trong!";
					Sleep(2000);
					GoToXY(x + 13, y + 9); cout << "                                      ";
					vt = 2;
					GoToXY(x + 16 + stclt, y + 2 + vt);
				}
				else if (stcth == 0)
				{
					GoToXY(x + 13, y + 9); cout << "So TCTH khong duoc de trong!";
					Sleep(2000);
					GoToXY(x + 13, y + 9); cout << "                                      ";
					vt = 3;
					GoToXY(x + 16 + stcth, y + 2 + vt);
				}
				else 
				{
					p->info = temp;
					SaveMonHoc ( root);
					GoToXY(x + 15, y + 9); cout << "                                 ";
					GoToXY(x + 15, y + 9); cout << "Du lieu da duoc luu lai";
					Sleep(2500);
					GoToXY(x + 15, y + 9); cout << "                                 ";
					return;
				}
				vt = 5;
			break;
			}
			case ESC: //Thoat ra
			{
				if(temp.maMH.compare("") == 0 || temp.tenMH.compare("") == 0 || stclt == 0 || stcth == 0 )
				{
					GoToXY(x + 15, y + 9); cout << "                                 ";
					GoToXY(x + 15, y + 9); cout << "Du lieu nhap chua dung";
					GoToXY(x + 15, y + 10); cout << "                                 ";
					GoToXY(x + 15, y + 10); cout << "Nhan ESC neu ban van muon thoat";
					char kt = GetKey();
					if(kt == ESC) 
					{
						GoToXY(x + 15, y + 9); cout << "                                ";
						GoToXY(x + 15, y + 10); cout << "                                ";
						return;
					}
				}
				else
				{
					GoToXY(x + 15, y + 8); cout << "                                ";
					GoToXY(x + 15, y + 8); cout << "Ban co muon luu du lieu?";
					GoToXY(x + 15, y + 9); cout << "                                ";
					GoToXY(x + 15, y + 9); cout << "LUU (Y)\t KHONG LUU (N)";
					do
					{
						char kt = GetKey();
						if(kt == 'Y' || kt == 'y') 
						{
							p->info = temp;
							SaveMonHoc ( root);
							GoToXY(x + 15, y + 9); cout << "                                 ";
							GoToXY(x + 15, y + 9); cout << "Du lieu da duoc luu lai";
							Sleep(2500);
							GoToXY(x + 15, y + 9); cout << "                                 ";
							return;
						}
						else if(kt == 'N' || kt == 'n') { return; }
					} while(1);
				}
				vt = 5;
				break;
			}
			default: switch(vt)
			{
				case 0: //Vi tri con tro o phan mamh
				{	
					int i = Search_infoLTCMH(dsLopTinChi, p->info.maMH); // ltc thu i co mnh la...
					if(	i != -1  )
					{
						GoToXY(x + 13, y + 12); cout << "Mon hoc duoc mo tin chi khong duoc chinh sua!";
						Sleep(2000);
						GoToXY(x + 13, y + 12); cout << "                                             ";
						vt = 1;
						GoToXY(x + 16 + tenmh, y + 2 + vt);
					}
					else 
					{
					if(c == Backspace)
					{
						if(mamh > 0)
						{
							temp.maMH = temp.maMH.substr(0, --mamh);
							GoToXY(x + 16 + mamh, y + 2 + vt); cout << " ";
							GoToXY(x + 16 + mamh, y + 2 + vt);
						}		
					}
					else if((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122)) // lay so, in hoa, in thuong
					{
						if( temp.maMH.length() < 7)
						{
							temp.maMH += c;
							mamh++;
							cout << c;
						}
						else 
						{
							GoToXY(x + 15, y + 12); cout << "Ma Mon Hoc chi toi da 7 ky tu!";							
							Sleep(2000);
							GoToXY(x + 15, y + 12); cout << "                               ";
							GoToXY(x + 16 + mamh, y + 2 + vt);
						}
					}
				}
				} break;
				case 1: //Vi tri con tro o phan tenmh
				{
					if (mamh == 0) 
					{
						GoToXY(x + 15, y + 12); cout << "Ma Mon Hoc khong duoc trong!";							
						Sleep(2000);
						GoToXY(x + 15, y + 12); cout << "                               ";
						vt--;
						GoToXY(x + 16 + mamh, y + 2 + vt);
					}
					else 
					{
						if(c == Backspace)
						{
							if(tenmh > 0)
							{
							temp.tenMH= temp.tenMH.substr(0, --tenmh);
							GoToXY(x + 16 + tenmh, y + 2 + vt); cout << " ";
							GoToXY(x + 16 + tenmh, y + 2 + vt);
							}		
						}
						else if((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122) || c == 32) // lay so, in hoa, in thuong
						{	

							temp.tenMH += c;
							tenmh++;
							cout << c;
						}
					}
				} break;
				case 2: //Vi tri con tro o phan stclt
				{
					int i = Search_infoLTCMH(dsLopTinChi, p->info.maMH);// ltc thu i co mnh la...
					if(	i!= -1 && dsLopTinChi.dsLopTC[i]->SLDK > 0)
					{
						GoToXY(x + 13, y + 12); cout << "Mon Hoc duoc mo lop tin chi khong duoc chinh sua!";
						Sleep(2000);
						GoToXY(x + 15, y + 12); cout << "                                                 ";
						vt = 1;
						GoToXY(x + 16 + tenmh, y + 2 + 1);
					}
					else 
					{
					if (tenmh == 0) 
					{
						GoToXY(x + 15, y + 12); cout << "Ten Mon Hoc khong duoc trong!";							
						Sleep(2000);
						GoToXY(x + 15, y + 12); cout << "                               ";
						vt--;
						GoToXY(x + 16 + tenmh, y + 2 + vt);
					}
					else 
					{
					if(c == Backspace)
					{
						if(stclt > 0)
						{
							temp.STCLT = temp.STCLT/10;
							stclt--;
							GoToXY(x + 16 + stclt, y + 2 + vt); cout << " ";
							GoToXY(x + 16 + stclt, y + 2 + vt);
						}		
					}
					else if(c >= 48 && c <= 57) //lay so
					{
						
						switch(c)
						{
							case '0': temp.STCLT = temp.STCLT * 10 + 0; break;
							case '1': temp.STCLT = temp.STCLT * 10 + 1; break;
							case '2': temp.STCLT = temp.STCLT * 10 + 2; break;
							case '3': temp.STCLT = temp.STCLT * 10 + 3; break;
							case '4': temp.STCLT = temp.STCLT * 10 + 4; break;
							case '5': temp.STCLT = temp.STCLT * 10 + 5; break;
							case '6': temp.STCLT = temp.STCLT * 10 + 6; break;
							case '7': temp.STCLT = temp.STCLT * 10 + 7; break;
							case '8': temp.STCLT = temp.STCLT * 10 + 8; break;
							case '9': temp.STCLT = temp.STCLT * 10 + 9; break;

						}	
						stclt++;
						cout << c;
					}
					}
				}

				} break;
				case 3: //Vi tri con tro o phan stcth
				{
					int i = Search_infoLTCMH(dsLopTinChi, p->info.maMH);// ltc thu i co mnh la...
					if(	i!= -1  )
					{
						GoToXY(x + 13, y + 12); cout << "Mon Hoc duoc mo lop tin chi khong duoc chinh sua!";
						Sleep(2000);
						GoToXY(x + 15, y + 12); cout << "                                                 ";
						vt = 1;
						GoToXY(x + 16 + tenmh, y + 2 + 1);
					}
					else 
					{
					if (stclt == 0) 
					{
						GoToXY(x + 15, y + 12); cout << "So TCLT khong duoc trong!";							
						Sleep(2000);
						GoToXY(x + 15, y + 12); cout << "                               ";
						vt--;
						GoToXY(x + 16 + stclt, y + 2 + vt);
					}
					else 
					{
					if(c == Backspace)
					{
						if(stcth > 0)
						{
							temp.STCTH = temp.STCTH/10;
							stcth--;
							GoToXY(x + 16 + stcth, y + 2 + vt); cout << " ";
							GoToXY(x + 16 + stcth, y + 2 + vt);
						}		
					}
					else if(c >= 48 && c <= 57) //lay so
					{
						
						switch(c)
						{
							case '0': temp.STCTH = temp.STCTH * 10 + 0; break;
							case '1': temp.STCTH = temp.STCTH * 10 + 1; break;
							case '2': temp.STCTH = temp.STCTH * 10 + 2; break;
							case '3': temp.STCTH = temp.STCTH * 10 + 3; break;
							case '4': temp.STCTH = temp.STCTH * 10 + 4; break;
							case '5': temp.STCTH = temp.STCTH * 10 + 5; break;
							case '6': temp.STCTH = temp.STCTH * 10 + 6; break;
							case '7': temp.STCTH = temp.STCTH * 10 + 7; break;
							case '8': temp.STCTH = temp.STCTH * 10 + 8; break;
							case '9': temp.STCTH = temp.STCTH * 10 + 9; break;
						}	
						stcth++;
						cout << c;
					}
					}
				}
				} break;
			}
		}
	} while(1);
}
void CapNhatDSMH(MHPTR root,DSLTC dsLopTinChi, int x, int y)// x= 60,y=15
{
	int sl, i = 1, muiten = 0;
	float k = 0;
	k = dem(root);
	sl = k ; //So luong mon hoc
	k = ceil(k/ 15); //So trang
	InDSMH(root, x, y, i, k);
	modifyCursor(1, false);
	GoToXY(x - 3, y + 4); MuiTen();
	do
	{
		char kytu = GetKey();
		switch (kytu)
		{
			case Up: if(muiten + 1 > 1) //Mui ten di len
			{
				Normal();
				GoToXY(x - 3, y + 4 + muiten); cout << "   ";
				muiten--;
				GoToXY(x - 3, y + 4 + muiten); MuiTen();
			} break;
			case Down: if(muiten + 1 < 15 && muiten < (sl - ((i - 1) * 15) - 1)) //Mui ten di xuong
			{
				Normal();
				GoToXY(x - 3, y + 4 + muiten); cout << "   ";
				muiten++;
				GoToXY(x - 3, y + 4 + muiten); MuiTen();
			} break;
			case Right: if(i < k) //Qua trang
			{
				XoaBangMonHoc(x, y);
				InDSMH(root, x, y, ++i, k);
				if(i == k && sl % 15 != 0 && muiten > sl % 15 - 1)
				{
					GoToXY(x - 3, y + 4 + muiten); cout << "   ";
					muiten = sl - ((i - 1) * 15) - 1;
					GoToXY(x - 3, y + 4 + muiten); MuiTen();
				}
			} break;
			case Left: if(i > 1) //Qua trang
			{
				XoaBangMonHoc(x ,y );
				InDSMH(root, x, y, --i, k);
			} break;
			case Insert: //Them mh
			{
				ThemMonHoc(root, x - 77, y - 2 );
				DeleteGocTrai();
				k = 0;
				sl = k = dem(root);
				k = ceil(k/ 15);
				XoaBangMonHoc(x , y );
				InDSMH(root, x, y, i, k);
				modifyCursor(1, false);
			} break;
			case Delete: //Xoa mh
			{
				XoaMonHoc(root, dsLopTinChi, i, muiten, sl);
				DeleteGocTrai();
				XoaBangMonHoc(x ,y );
				InDSMH(root, x, y, i, k);
				if(sl - (i - 1) * 15 == 0)
				{
					XoaBangMonHoc(x ,y );
					InDSMH(root, x, y, --i, --k);
				}
				else if(muiten > sl - (i - 1) * 15 - 1)
				{
					GoToXY(x - 3, y + 4 + muiten); cout << "   ";
					muiten = sl - ((i - 1) * 15) - 1;
					GoToXY(x - 3, y + 4 + muiten); MuiTen();
				}				
			} break;
			case Enter: //Hieu chinh mh
			{
				HieuChinhMonHoc(root, dsLopTinChi, i, muiten);
				modifyCursor(1, false);
				DeleteGocTrai();
				XoaBangMonHoc(x ,y );
				InDSMH(root, x, y, i, k);
			} break;
			case ESC:
			{
				DeleteScreen(); 
				DeleteGocTrai();
				DeleteSign();
				return;
			}	
		}
	} while(1);
}
//_____________________________________________CAUGK(DKLTC)__________________________________________________
// tim sv có ma sv in thong tin in ra bang thong tin // viet ham in Search_infoSV
//tim ltc co nien khoa hoc ki in ra bang ltc da mo // viet ham in vong lap n ltc neu bang nk, hk thi cout
//chon ltc -> DSDK -> MASV -> trangthai(con dki) // ma mh, nk, hk, nhom -> ltc vtri i -> DSDK -> them masv + trang thai 
//co maSV in dsltc da dk ke thua tim ltc co nk hk neu ltc co dsdk co masv + trangthai con dki thi in 
void InThongTinSV(DSSinhVien &m, string masv, int x, int y) // 0,13 in thong tin cua sc=v co masv la...
{
	ChuanHoaInHoa(masv);
	int i = Search_infoSV( m, masv);
	BangThongTinSV ( x, y);
	GoToXY(x + 1, y + 3); cout << "Ma Lop: "; 
	GoToXY(x + 9, y + 3); cout << m.DSSV[i].maLop;
	GoToXY(x + 1, y + 4); cout << "Ma SV: "; 
	GoToXY(x + 9, y + 4);cout << m.DSSV[i].maSV;
	GoToXY(x + 1, y + 5); cout << "Ho Ten: "; 
	GoToXY(x + 9, y + 5);cout << m.DSSV[i].ho << " " << m.DSSV[i].ten;
	GoToXY(x + 1, y + 6); cout << "Phai: "; 
	GoToXY(x + 9, y + 6);cout << m.DSSV[i].phai;
	GoToXY(x + 1, y + 7); cout << "SDT: "; 
	GoToXY(x + 9, y + 7);cout << m.DSSV[i].soDT;
}
int Search_infoLTCDaMo(DSLTC m, lopTinChi temp) // kiem tra xem trong nk hk co lopltc mo ko?
{
	for (int i = 0; i < m.n; i++)
	{
		if (temp.nienKhoa == m.dsLopTC[i]->nienKhoa && temp.hocki == m.dsLopTC[i]->hocki && m.dsLopTC[i]->trangThai == lopDuocMo)
		return 1;
	}
	return 0;
}
int DemLTCDaMo(DSLTC m, lopTinChi temp) // dem so ltc da mo trong nk hk
{
	int dem = 0;
	for (int i = 0; i < m.n; i++)
	{
		if (temp.nienKhoa == m.dsLopTC[i]->nienKhoa && temp.hocki == m.dsLopTC[i]->hocki && m.dsLopTC[i]->trangThai == lopDuocMo)
		dem++;
	}
	return dem;
}
int DemLTCDaDK(DSLTC m, lopTinChi temp, SinhVien a) // dem so ltc da dc sv dk
{	
	DKLTCPTR p;
	int dem = 0;
	for (int t = 0; t < m.n; t++)
	{
		if (temp.nienKhoa == m.dsLopTC[t]->nienKhoa && temp.hocki == m.dsLopTC[t]->hocki && m.dsLopTC[t]->trangThai == lopDuocMo)
		{			
			for (p = m.dsLopTC[t]->DSDK; p != NULL; p = p->pNext)
			{
				int k = a.maSV.compare(p->info.maSV);/*	i=0: Hai chuoi co ma Ascii bang nhau.
														i<0: Chuoi thu nhat co ma Ascii nho hon chuoi thu hai.
														i>0: Chuoi thu nhat co ma Ascii lon hon chuoi thu hai.*/
  	   			if(k == 0 && p->info.trangThai == conDangKi) 	dem++;	
			}			
		}
	}	
	return dem;
}
int KiemTraDK(DSLTC m, SinhVien a, int i) // kiem tra sv da, dang hoac chua dk ltc nay 
{
	DKLTCPTR r;
	int k;
	r = m.dsLopTC[i]->DSDK;	
	if ( r == NULL ) return 0;
	else
	{
		for (r = m.dsLopTC[i]->DSDK;r != NULL; r = r->pNext)
		{
			k = a.maSV.compare(r->info.maSV);/*	i=0: Hai chuoi co ma Ascii bang nhau.
											i<0: Chuoi thu nhat co ma Ascii nho hon chuoi thu hai.
											i>0: Chuoi thu nhat co ma Ascii lon hon chuoi thu hai.*/
			if (k == 0)
			{
				if (r->info.trangThai == conDangKi) return 1;
				else return -1;
			}
			else 
			{
				if(r->pNext == NULL) return 0;
			}
		}
	}		
}
void LTCDK(DSLTC dsLopTinChi, lopTinChi temp, int ltc[]) // them vào mang ltc co nk hk, con dki
{
	int b = 0;
	for (int t = 0; t < dsLopTinChi.n; t++)
	{
		if (temp.nienKhoa == dsLopTinChi.dsLopTC[t]->nienKhoa && temp.hocki == dsLopTinChi.dsLopTC[t]->hocki && dsLopTinChi.dsLopTC[t]->trangThai == lopDuocMo)
		{
  	   		ltc[b] = t;
			b++;	
		}
	}
}
void InDSLTCDaMo(DSLTC m, MHPTR root, lopTinChi temp, SinhVien a, int x, int y, int j, float page) //In du lieu lopTC da mo vao bang
{
	Normal();
	int kt, dem = -1;
	int slltcdamo = DemLTCDaMo(m, temp);
	int ltc[slltcdamo]; // mang chua 
	LTCDK(m, temp, ltc); // Them vao mang ltc da mo
	if(j * 6 > slltcdamo) kt = slltcdamo; //Vi tri ket thuc
	else kt = j * 6;	
	for(int i = (j - 1) * 6; i < kt; i++)
	{		
		dem++;
		GoToXY(x + 1, y + dem + 4); cout << m.dsLopTC[ltc[i]]->maMonHoc;
		GoToXY(x + 14, y + dem + 4); cout << search(root, m.dsLopTC[ltc[i]]->maMonHoc)->info.tenMH;
		GoToXY(x + 44, y + dem + 4); cout << m.dsLopTC[ltc[i]]->nhom;
		GoToXY(x + 52, y + dem + 4); cout << m.dsLopTC[ltc[i]]->SLDK;
		GoToXY(x + 60, y + dem + 4); cout << (m.dsLopTC[ltc[i]]->svMax - m.dsLopTC[ltc[i]]->svMin - m.dsLopTC[ltc[i]]->SLDK);
		GoToXY(x + 68, y + dem + 4); if (KiemTraDK(m, a, ltc[i]) == 1 ) cout << "  X"; else cout << "    ";
	}
	GoToXY(x + 69, y + 11); cout << "Trang " << j << "/" << page;
}
void InDSLTCDaDK(DSLTC m, MHPTR root, lopTinChi temp, SinhVien a, int x, int y, int j, float page) // in ds ltc sv da dk
{
	Normal();
	DKLTCPTR p;
	int kt, dem = -1;
	int slltcdadk = DemLTCDaDK(m, temp, a);
	if(j * 6 > slltcdadk) kt = slltcdadk; //Vi tri ket thuc 
	else kt = j * 6;
	int ltc[slltcdadk];
	int b = 0;
	for (int t = 0; t < m.n; t++)
	{
		if (temp.nienKhoa == m.dsLopTC[t]->nienKhoa && temp.hocki == m.dsLopTC[t]->hocki && m.dsLopTC[t]->trangThai == lopDuocMo)
		{	
			for (p = m.dsLopTC[t]->DSDK;p != NULL; p = p->pNext)
			{
				int k = a.maSV.compare(p->info.maSV);/*	i=0: Hai chuoi co ma Ascii bang nhau.
														i<0: Chuoi thu nhat co ma Ascii nho hon chuoi thu hai.
														i>0: Chuoi thu nhat co ma Ascii lon hon chuoi thu hai.*/
  	   			if(k == 0 && p->info.trangThai == conDangKi) 
  	   			{
  	   				ltc[b] = t;
					b++;	
				}
			}
			
		}
	}	
	for(int i = (j - 1) * 6; i < kt; i++)
	{		
		dem++;
		GoToXY(x + 1, y + dem + 4); cout << (i + 1);
		GoToXY(x + 9, y + dem + 4); cout << m.dsLopTC[ltc[i]]->maMonHoc;
		GoToXY(x + 22, y + dem + 4); cout << search(root, m.dsLopTC[ltc[i]]->maMonHoc)->info.tenMH;
		GoToXY(x + 52, y + dem + 4); cout << search(root, m.dsLopTC[ltc[i]]->maMonHoc)->info.STCLT;
		GoToXY(x + 60, y + dem + 4); cout << search(root, m.dsLopTC[ltc[i]]->maMonHoc)->info.STCTH;		
	}
	GoToXY(x + 69, y + 10); cout << "Trang " << j << "/" << page;
}
void DKiLTC(DSLTC &m, lopTinChi temp, SinhVien a, int x, int y) // sv dk ltc, dua tren msv, nk, hk, nhom, mamh
{
	Normal();
	DKLTCPTR r;
	int k;
	int i = Search_infoLTC(m, temp);
	r = m.dsLopTC[i]->DSDK;	
	if ( r == NULL ) // ltc chua co sv dk
	{
		m.dsLopTC[i]->DSDK = new NodeDKLopTinChi;
		m.dsLopTC[i]->DSDK->info.maSV = a.maSV;
		m.dsLopTC[i]->DSDK->info.trangThai = conDangKi;
		m.dsLopTC[i]->DSDK->info.diem;
		m.dsLopTC[i]->SLDK++;
		m.dsLopTC[i]->DSDK->pNext = NULL;
		GoToXY(x + 79, y + 6); cout <<"Dang ki lop tin chi thanh cong";
		Sleep (2000);
		GoToXY(x + 79, y + 6); cout <<"                              ";		
	}
	else // thay condki, thay huy dki, ko thay
	{
		for (r = m.dsLopTC[i]->DSDK;r != NULL; r = r->pNext)
		{
			k = a.maSV.compare(r->info.maSV); // ss masv cua sv a vs masv trong dsdk 
											/*	i=0: Hai chuoi co ma Ascii bang nhau.
											i<0: Chuoi thu nhat co ma Ascii nho hon chuoi thu hai.
											i>0: Chuoi thu nhat co ma Ascii lon hon chuoi thu hai.*/
			GoToXY(1,1);
			if (k == 0)
			{
				if (r->info.trangThai == conDangKi) // sv da dk ltc
				{
					GoToXY(x + 79, y + 6); cout <<"Lop tin chi da duoc dang ki!";
					Sleep (2000);
					GoToXY(x + 79, y + 6); cout <<"                            ";
				}
				else // sv da tung dk
				{
					r->info.trangThai = conDangKi;
					GoToXY(x + 79, y + 6); cout <<"Dang ki lop tin chi thanh cong";
					Sleep (2000);
					GoToXY(x + 79, y + 6); cout <<"                              ";
				}				
				break;
			} 
			else 
			if (r->pNext == NULL ) // sv chua dk
			{
				DKLTCPTR p = new NodeDKLopTinChi;
				r = m.dsLopTC[i]->DSDK; 
				while(r != NULL)
				{
					int ss = a.maSV.compare(r->info.maSV); /*	i=0: Hai chuoi co ma Ascii bang nhau.
																i<0: Chuoi thu nhat co ma Ascii nho hon chuoi thu hai.
																i>0: Chuoi thu nhat co ma Ascii lon hon chuoi thu hai.*/
					if(ss > 0 )
					{
						if (r->pNext == NULL) // them vao cuoi
						{
						p->info.maSV = a.maSV;
						p->info.trangThai = conDangKi;
						p->info.diem;
						r->pNext = p;
						p->pNext = NULL;
						m.dsLopTC[i]->SLDK++;
						GoToXY(x + 79, y + 6); cout <<"Dang ki lop tin chi thanh cong";
						Sleep (2000);
						GoToXY(x + 79, y + 6); cout <<"                              ";
						break;
						}
						else
						{
							int ss2 = a.maSV.compare(r->pNext->info.maSV);
							if(ss2 > 0) r = r->pNext;
							else // them vao giua r va r->pNext
							{
							p->info.maSV = a.maSV;
							p->info.trangThai = conDangKi;
							p->info.diem;
							p->pNext = r->pNext;
							r->pNext = p;							
							m.dsLopTC[i]->SLDK++;
							GoToXY(x + 79, y + 6); cout <<"Dang ki lop tin chi thanh cong";
							Sleep (2000);
							GoToXY(x + 79, y + 6); cout <<"                              ";
							break;
						}
						}						
					} 
					else // them vao dau
					{
						p->info.maSV = a.maSV;
						p->info.trangThai = conDangKi;
						p->info.diem;
						p->pNext = r; 
						r = p; 
						m.dsLopTC[i]->DSDK = r;
						m.dsLopTC[i]->SLDK++;
						GoToXY(x + 79, y + 6); cout <<"Dang ki lop tin chi thanh cong";
						Sleep (2000);
						GoToXY(x + 79, y + 6); cout <<"                              ";
						break;					
					}					
				} break;	
				}
		}
	}
}
void HuyDKiLTC(DSLTC &m, lopTinChi temp, SinhVien a, int x, int y) // huy dk ltc theo msv, nk, hk, nhom, mamh
{
	Normal();
	DKLTCPTR r;
	int k;
	int i = Search_infoLTC(m, temp);
	for (r = m.dsLopTC[i]->DSDK;r != NULL; r = r->pNext)
	{
		k = a.maSV.compare(r->info.maSV);
		if (k == 0 && r->info.trangThai == conDangKi)  
		{
			if (r->info.diem == 0)
			{
				r->info.trangThai = huyDangKi;
				GoToXY(x + 79, y + 5); cout <<"Da huy dang ki lop tin chi";
				Sleep (2000);
				GoToXY(x + 79, y + 5); cout <<"                          ";
			}
			else
			{
				GoToXY(x + 79, y + 5); cout <<"Khong the huy dang ki lop tin chi!";
				Sleep (2000);
				GoToXY(x + 79, y + 5); cout <<"                                  ";
			}
			break;
		}
	}			
}

void NhapThamSoNKHK(DSLTC &dsLopTinChi, MHPTR root, SinhVien a, int x, int y)//65,14 nhap nk hk de in ds ltc 
{
	modifyCursor(1, true);
	int n, vt = 0, nienkhoa = 0, hocki = 0;
	char c;
	lopTinChi temp; //Xai tam de them vao mang sau khi nhap xong
	temp.hocki = 0;
	Normal();
	HuongDanNhapNKHK();
	BangNhapNKHK( x, y); 								
	GoToXY(77,17);				
	do
	{
		c = GetKey();		
		switch (c)
		{
			case Up: if(vt + 1 > 1) //Len dong tren
			{
				vt--;
				if(vt == 0) GoToXY(x + 12 + nienkhoa, y + 3 + vt);
				else if(vt == 1) GoToXY(x + 12 + hocki, y + 3 + vt);
			} break;
			case Down: if(vt + 1 < 2) //Xuong dong
			{
				vt++;	
				if(vt == 0) GoToXY(x + 12 + nienkhoa, y + 3 + vt);
				else if(vt == 1) GoToXY(x + 12 + hocki, y + 3 + vt);
			} break;
			case Enter: // in ds ltc co nk hk
			{	
				HuongDanDKLopTC();			
				if (temp.nienKhoa.compare("") == 0)
				{
					GoToXY(x + 13, y + 12); cout << "Nien Khoa khong duoc de trong!";
					Sleep(2000);
					GoToXY(x + 13, y + 12); cout << "                                      ";
					vt = 0;
					GoToXY(x + 12 + nienkhoa, y + 3 + vt);
				}
				else if (temp.hocki == 0 )
				{
					GoToXY(x + 13, y + 12); cout << "Hoc Ki khong duoc de trong!";
					Sleep(2000);
					GoToXY(x + 13, y + 12); cout << "                                      ";
					vt = 1;
					GoToXY(x + 12 + hocki, y + 3 + vt);
				}
				else if (Search_infoLTCNKHK(dsLopTinChi, temp) == 0)
				{
					GoToXY(x + 1, y + 8); cout << "Khong tim thay lop tin chi da mo!";
					Sleep(2000);
					GoToXY(x + 1, y + 8); cout << "                                  ";
					vt = 0;
					GoToXY(x + 12 + nienkhoa, y +
					 3 + vt);
				}
				else
				{
					int j = 1, v = 1; // trang hien tai
					float page = 0, k = 0;
					int muiten = 0;					
					int sl = DemLTCDaMo(dsLopTinChi, temp); // so ltcdamo
					page = DemLTCDaMo(dsLopTinChi, temp);
					page = ceil(page/6); // so trang ltcdamo
					k = DemLTCDaDK(dsLopTinChi, temp, a);
					k = ceil(k/6);// so trang ltcdadk
					DeleteScreen();
					GoToXY(x + 19, y ); cout << " Nien Khoa: ";
					GoToXY(x + 31, y ); cout << temp.nienKhoa;
					GoToXY(x + 40, y );cout << " Hoc Ki: ";
					GoToXY(x + 49, y ); cout << temp.hocki;
					Normal();
					BangLTCDaMo(x, y, 6);
					BangLTCDaDK (x,y + 13, 6);
					InDSLTCDaMo(dsLopTinChi, root, temp, a, x, y, j, page); 
					InDSLTCDaDK(dsLopTinChi, root, temp, a, x, y + 13, v, k);
					modifyCursor(1, false);
					GoToXY(x - 3, y + 4 + muiten); MuiTen();					
					do
					{				
					char z;
					z = GetKey();	
					switch (z)
					{	
						case Up: if(muiten + 1 > 1) //Mui ten di len
						{
							Normal();
							GoToXY(x - 3, y + 4 + muiten); cout << "   ";
							muiten--;
							GoToXY(x - 3, y + 4 + muiten); MuiTen();
						} break;
						case Down: if(muiten + 1 < 6 && muiten < (sl - ((j - 1) * 6) - 1)) //Mui ten di xuong
						{
							Normal();
							GoToXY(x - 3, y + 4 + muiten); cout << "   ";
							muiten++;
							GoToXY(x - 3, y + 4 + muiten); MuiTen();
						} break;			
						case Right: if(j < page) //Qua trang
						{
							XoaBangLTCDaMo(x, y);					
							InDSLTCDaMo(dsLopTinChi, root, temp, a, x, y, ++j, page);
							if(j == page && sl % 6 != 0 && muiten > sl % 6 - 1)
							{
								GoToXY(x - 3, y + 4 + muiten); cout << "   ";
								muiten = sl - ((j - 1) * 6) - 1;
								GoToXY(x - 3, y + 4 + muiten); MuiTen();
							}
						} break;
						case Left: if(j > 1) //Qua trang
						{
							XoaBangLTCDaMo(x, y);	
							InDSLTCDaMo(dsLopTinChi, root, temp, a, x, y, --j, page);
						} break;
						case Enter: // dk ltc
						{
							int l = (j - 1)* 6 + muiten; 
							DKLTCPTR p;
							lopTinChi temp1;
							int ltc[sl];
//							int b = 0;
//							for (int t = 0; t < dsLopTinChi.n; t++)
//							{
//								if (temp.nienKhoa == dsLopTinChi.dsLopTC[t]->nienKhoa && temp.hocki == dsLopTinChi.dsLopTC[t]->hocki)
//								{
//  	   								ltc[b] = t;
//									b++;	
//								}
//							}
							LTCDK(dsLopTinChi, temp, ltc);
//							for(int i= 0; i<sl;i++){cout << ltc[i]<<" ";
//							}
							temp1.maMonHoc = dsLopTinChi.dsLopTC[ltc[l]]->maMonHoc;
							temp1.nienKhoa = dsLopTinChi.dsLopTC[ltc[l]]->nienKhoa;
							temp1.hocki = dsLopTinChi.dsLopTC[ltc[l]]->hocki;
							temp1.nhom = dsLopTinChi.dsLopTC[ltc[l]]->nhom;
							DKiLTC(dsLopTinChi, temp1, a, x, y);
							SaveDangKiLopTC(dsLopTinChi);
							k = DemLTCDaDK(dsLopTinChi, temp, a);
							k = ceil(k/6);
							XoaBangLTCDaDK(x, y + 13);
							InDSLTCDaDK(dsLopTinChi, root, temp, a, x, y + 13, v, k);
							XoaBangLTCDaMo(x, y);
							InDSLTCDaMo(dsLopTinChi, root, temp, a, x, y, j, page);
						} break;
						case Delete://huydk
						{
							Normal();
							int sl1 = DemLTCDaDK(dsLopTinChi, temp, a);
							int ltc[sl1], l, h;
							l = (j - 1)* 6 + muiten;//l=1
							k = sl1;
							k = ceil(k/6);
//							b = 0;
//							for (int t = 0; t < dsLopTinChi.n; t++)
//							{
//								if (temp.nienKhoa == dsLopTinChi.dsLopTC[t]->nienKhoa && temp.hocki == dsLopTinChi.dsLopTC[t]->hocki)
//									{
//  	   									ltc[b] = t;
//										b++;	
//									}
//							}
							LTCDK(dsLopTinChi, temp, ltc);
//							for(int i= 0; i<sl;i++){cout << ltc[i]<<" ";
//							}
							h = KiemTraDK(dsLopTinChi, a, ltc[l]);
							if ( h == 1) // thay condk
							{
								GoToXY(x + 79, y + 6); cout << "Ban co muon huy dang ki?";
								GoToXY(x + 79, y + 8); cout << "LUU (Y)\t KHONG LUU (N)";
								do
								{
									char kt = GetKey();
									if(kt == 'Y' || kt == 'y') 
									{
									lopTinChi temp1;
									temp1.maMonHoc = dsLopTinChi.dsLopTC[ltc[l]]->maMonHoc;
									temp1.nienKhoa = dsLopTinChi.dsLopTC[ltc[l]]->nienKhoa;
									temp1.hocki = dsLopTinChi.dsLopTC[ltc[l]]->hocki;
									temp1.nhom = dsLopTinChi.dsLopTC[ltc[l]]->nhom;
									GoToXY(x + 79, y + 6); cout << "                                ";
									GoToXY(x + 79, y + 8); cout << "                                ";
									HuyDKiLTC(dsLopTinChi, temp1, a, x, y);
									k = DemLTCDaDK(dsLopTinChi, temp, a);
									k = ceil(k/6);
									XoaBangLTCDaDK(x, y + 13);
									InDSLTCDaDK(dsLopTinChi, root, temp, a, x, y + 13, v, k);
									XoaBangLTCDaMo(x, y);
									InDSLTCDaMo(dsLopTinChi, root, temp, a, x, y, j, page);
									SaveDangKiLopTC(dsLopTinChi);
									break;
									}
									else if(kt == 'N' || kt == 'n') break;
								} while(1);	
							}
							else // thay huydki, ko thay
							{
								if(h == -1) // thay huydki
								{
									GoToXY(x + 79, y + 6); cout << "Lop tin chi da duoc huy dang ki!";
									Sleep(2000);
									GoToXY(x + 79, y + 6); cout << "                                ";
								}
								else if(h==0) // ko thay
								{
									GoToXY(x + 79, y + 6); cout << "Lop tin chi chua duoc dang ki!";
									Sleep(2000);
									GoToXY(x + 79, y + 6); cout << "                              ";
								}								
							}
						} break;
						case F3:// chuyen sang xem ds da dk
						{
							int muiten1 = 0, sl1;							
							sl1 = k = DemLTCDaDK(dsLopTinChi, temp, a);
							k = ceil(k/6);
							modifyCursor(1, false);
							GoToXY(x - 3, y + 4 + muiten); cout << "   ";
							GoToXY(x - 3, y + 4 + 13); MuiTen();	
							do
							{				
								char w;
								w = GetKey();	
								switch (w)
								{	
									case Up: if(muiten1 + 1 > 1) //Mui ten di len
									{
										Normal();
										GoToXY(x - 3, y + 4 + 13 + muiten1); cout << "   ";
										muiten1--;
										GoToXY(x - 3, y + 4 + 13 + muiten1); MuiTen();
									} break;
									case Down: if(muiten1 + 1 < 6 && muiten1 < (sl1 - ((v - 1) * 6) - 1)) //Mui ten di xuong
									{
										Normal();
										GoToXY(x - 3, y + 4 + 13 + muiten1); cout << "   ";
										muiten1++;
										GoToXY(x - 3, y + 4 + 13 + muiten1); MuiTen();
									} break;			
									case Right: if(v < k) //Qua trang
									{
										XoaBangLTCDaDK(x, y + 13);					
										InDSLTCDaDK(dsLopTinChi, root, temp, a, x, y + 13, ++v, k);
										if(v == k && sl1 % 6 != 0 && muiten1 > sl1 % 6 - 1)
										{
											GoToXY(x - 3, y + 4 + 13 + muiten1); cout << "   ";
											muiten1 = sl1 - ((v - 1) * 6) - 1;
											GoToXY(x - 3, y + 4 + 13 + muiten1); MuiTen();
										}
									} break;
									case Left: if(v > 1) //Qua trang
									{
										XoaBangLTCDaDK(x, y + 13);	
										InDSLTCDaDK(dsLopTinChi, root, temp, a, x, y + 13, --v, k);
									} break;
									case ESC:
									{
										GoToXY(x - 3, y + 4 + 13 + muiten1); cout << "   ";
										GoToXY(x - 3, y + 4 + muiten); MuiTen();
									}break; 
								} if ( w == ESC) break;	
							} while(1);
						} break;
						case ESC: break;
					} 
					if(z == ESC) // thoat ra de nhap laij nk, hk
					{
						DeleteScreen();
						DeleteSign();
						HuongDanNhapNKHK();
						XoaBangNhapNKHK(x, y);
						BangNhapNKHK(x, y);						
						temp.nienKhoa.assign("");	// gan temp.niekhoa la rong
						temp.hocki = 0;
						nienkhoa = 0, hocki = 0, vt = 0;
						GoToXY(x + 12 + nienkhoa, y + 3 + vt);
						modifyCursor(1, true);
						break;	
					}				 
					} while (1);					
				} 
			} break;
			case ESC: // thoat ra de nhap lai masv
			{
				XoaBangNhapMSV(x, y);
				DeleteScreen();
				DeleteSign();
				DeleteGocTrai();
				HuongDanNhapMSV();
				BangNhapMSV( x, y);
				GoToXY(x + 8, y + 2); cout << a.maSV;
				modifyCursor(1, true);
				return;
			} 
			default: switch(vt)
			{
				case 0: //Vi tri con tro o phan nien khoa
				{
					
					if(c == Backspace)
					{
						if(nienkhoa > 0)
						{
 							temp.nienKhoa= temp.nienKhoa.substr(0, --nienkhoa);
							GoToXY(x + 12 + nienkhoa, y + 3 + vt); cout << " ";
							GoToXY(x + 12 + nienkhoa, y + 3 + vt);
						}		
					}
					else if(c == 45 || (c >= 48 && c <= 57)) //bao gom ky tu (-), so
					{	
						if(nienkhoa < 9)
						{
							temp.nienKhoa += c;
							nienkhoa++;
							cout << c;
						}
						else
						{
							GoToXY(x + 15, y + 12); cout << "Nien Khoa chi toi da 9 ky tu!";							
							Sleep(2000);
							GoToXY(x + 15, y + 12); cout << "                               ";
							GoToXY(x + 12 + nienkhoa, y + 3 + vt);
						}						
					}					
				} break;
				case 1: //Vi tri con tro o phan hoc ki
				{
					if (nienkhoa == 0) 
					{
						GoToXY(x + 15, y + 12); cout << "Nien Khoa khong duoc trong!";							
						Sleep(1000);
						GoToXY(x + 15, y + 12); cout << "                               ";
						vt--;
						GoToXY(x + 12 + nienkhoa, y + 3 + vt);
					}
					else 
					{
					if(c == Backspace)
					{
						if(hocki > 0)
						{
							temp.hocki = 0;
							hocki--;
							GoToXY(x + 12 + hocki, y + 3 + vt); cout << " ";
							GoToXY(x + 12 + hocki, y + 3 + vt);
						}		
					}
					else if(c >= 49 && c <= 51) //chi lay so 1,2,3
					{
						if ( hocki < 1)
						{
							switch(c)
							{
								case '1': temp.hocki = temp.hocki + 1; break;
								case '2': temp.hocki = temp.hocki + 2; break;
								case '3': temp.hocki = temp.hocki + 3; break;	
							}	
							hocki++;
							cout << c;
						}
						else 
						{
							GoToXY(x + 15, y + 12); cout << "Hoc Ki: 1, 2, 3!";
							Sleep(1000);
							GoToXY(x + 15, y + 12); cout << "                               ";
							GoToXY(x + 12 + hocki, y + 3 + vt);
						}
						
					}
					else 
					{
						GoToXY(x + 15, y + 12); cout << "Hoc Ki: 1, 2, 3!";
						Sleep(1000);
						GoToXY(x + 15, y + 12); cout << "                               ";
						GoToXY(x + 12 + hocki, y + 3 + vt);
					}
					}

				} break;
			}
		}
	} while(1);
}
void NhapThamSoMASV(DSSinhVien dsSinhVien, DSLTC dsLopTinChi, MHPTR root, int x, int y) // (65,14) nhap masv dk ltc
{
	modifyCursor(1, true);
	int vt = 0, masv = 0;
	char c;
	SinhVien temp; //Xai tam them vao sau khi nhap xong
	Normal();
	HuongDanNhapMSV();
	BangNhapMSV( x, y); 							
	GoToXY(73,16); 			
	do
	{
		c = GetKey();		
		switch (c)
		{
			case Enter:  //In thong tin sv
			{	
				ChuanHoaInHoa(temp.maSV);
				int sv = Search_infoSV(dsSinhVien, temp.maSV);
//				cout << sv;
				if(sv != -1)
				{
					DeleteScreen();
					InThongTinSV(dsSinhVien, temp.maSV , 0, 13);
					NhapThamSoNKHK(dsLopTinChi, root,  temp, x, y); 
				}
				else 
				{
					GoToXY(x + 1, y + 6); cout << "Ma Sinh Vien khong chinh xac!";
					Sleep(2000);
					GoToXY(x + 1, y + 6); cout << "                               ";
					vt = 0;
					GoToXY(x + 8 + masv, y + 2);
				}								
			} break;	
			case ESC: 
			{
				DeleteScreen(); 
				DeleteGocTrai();
				DeleteSign();
				return;
			} 
		default: switch(vt)
		{
			case 0: //Vi tri con tro o masv
			{
				if ( c == Backspace)
				{
					if(masv > 0)
		 	     	{
						temp.maSV = temp.maSV.substr(0, --masv);
						GoToXY(x + 8 + masv, y + 2); cout << " ";
						GoToXY(x + 8 + masv, y + 2);
					}
				}
				else if((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122)) //bao gom so, in hoa, in thuong
				{					
					if( temp.maSV.length() < 10)
					{
						temp.maSV += c;
						masv++;
						cout << c;
					}
					else 
					{
						GoToXY(x + 1, y + 6); cout << "Ma Sinh Vien chi toi da 10 ky tu!";							
						Sleep(2000);
						GoToXY(x + 1, y + 6); cout << "                                 ";
						vt = 0;
						GoToXY(x + 8 + masv, y + 2 );
					}
				}		
			} break;
		}
		}
	} while(1);
}
//-----------------------------------------CAUH(HUYLTC)----------------------------------
void HuyLTC(DSLTC &m, lopTinChi temp) // huy ltc
{
	Normal();
	int x = 65, y = 14;
	int i = Search_infoLTC(m, temp);
	DKLTCPTR r ;	
	if (m.dsLopTC[i]->SLDK == 0) // ltc chua co sv dk
	{
		m.dsLopTC[i]->trangThai = lopBiHuy;
		GoToXY( 3, 16); cout << "Lop Tin Chi da duoc huy!";							
		Sleep(2000);
		GoToXY(x + 79, y + 8); cout << "                        ";	
	}
	else // lts da co ds dk
	{
		for (r = m.dsLopTC[i]->DSDK; r!= NULL; r = r->pNext )
		{
			if (r->info.diem != 0) // ltc co sv da thi
			{
				GoToXY(3, 16); cout <<"Lop Tin Chi khong the huy vi da co SV thi!";
				Sleep (2000);
				GoToXY(3, 16); cout <<"                                           ";
				break;
			}
			if ( r->pNext == NULL)
			{
				m.dsLopTC[i]->trangThai = lopBiHuy;
				GoToXY(3, 16); cout << "Lop Tin Chi da duoc huy!";							
				Sleep(2000);
				GoToXY(3, 16); cout << "                         ";			
			}
		}
	}			
}
void MoLaiLTC(DSLTC &m, lopTinChi temp) // mo lai ltc
{
	Normal();
	int x = 65, y = 14;
	int i = Search_infoLTC(m, temp);
	DKLTCPTR r ;	
	m.dsLopTC[i]->trangThai = lopDuocMo;
	GoToXY(3, 16); cout << "Lop Tin Chi da duoc mo lai";							
	Sleep(2000);
	GoToXY(3, 16); cout << "                           ";
					
}
int DemLTCkoDuDK(DSLTC m, lopTinChi temp) // dem so ltc ko du dk (co the huy)
{
	int dem = 0;
	for (int i = 0; i < m.n; i++)
	{
		if (temp.nienKhoa == m.dsLopTC[i]->nienKhoa && temp.hocki == m.dsLopTC[i]->hocki && m.dsLopTC[i]->SLDK < m.dsLopTC[i]->svMin )
		dem++;
	}
	return dem;
}
void InDSLTCKoDuDK(DSLTC m, MHPTR root, lopTinChi temp, int x, int y, int j, float page) //In du lieu lopTC vao bang
{
	Normal();
	int kt, dem = -1;
	int slltckodudk = DemLTCkoDuDK(m, temp);
	if(j * 15 > slltckodudk) kt = slltckodudk; //Vi tri ket thuc
	else kt = j * 15;
	int ltc[slltckodudk];
	int b = 0;
	for (int t = 0; t < m.n; t++)
	{
		if (temp.nienKhoa == m.dsLopTC[t]->nienKhoa && temp.hocki == m.dsLopTC[t]->hocki && m.dsLopTC[t]->SLDK < m.dsLopTC[t]->svMin)
		{
			ltc[b] = t;
			b++;
		}
	}	
	for(int i = (j - 1) * 15; i < kt; i++)
	{		
		dem++;
		GoToXY(x + 1, y + dem + 4); cout << m.dsLopTC[ltc[i]]->maMonHoc;
		GoToXY(x + 14, y + dem + 4); cout << search(root, m.dsLopTC[ltc[i]]->maMonHoc)->info.tenMH;
		GoToXY(x + 44, y + dem + 4); cout << m.dsLopTC[ltc[i]]->nhom;
		GoToXY(x + 52, y + dem + 4); cout << m.dsLopTC[ltc[i]]->svMin;
		GoToXY(x + 60, y + dem + 4); cout << m.dsLopTC[ltc[i]]->SLDK;
		GoToXY(x + 68, y + dem + 4); 
		 if(m.dsLopTC[ltc[i]]->trangThai == 1) cout << " Lop Duoc Mo";
		 else  cout << " Lop Bi Huy";
	}
	GoToXY(x + 39, y + 20); cout << "Trang " << j << "/" << page;
}
void NhapNKHKKoDuDK(DSLTC &dsLopTinChi, MHPTR root, int x, int y)//65,14 nhap nk hk de in ltc co the bi huy
{
	modifyCursor(1, true);
	int n, vt = 0, nienkhoa = 0, hocki = 0;
	char c;
	lopTinChi temp; //Xai tam de them vao mang sau khi nhap xong
	temp.hocki = 0;
	Normal();
	HuongDanNhapNKHKLTCKDDK();
	BangNhapNKHK( x, y); 								
	GoToXY(77,17);				
	do
	{
		c = GetKey();		
		switch (c)
		{
			case Up: if(vt + 1 > 1) //Len dong tren
			{
				vt--;
				if(vt == 0) GoToXY(x + 12 + nienkhoa, y + 3 + vt);
				else if(vt == 1) GoToXY(x + 12 + hocki, y + 3 + vt);
			} break;
			case Down: if(vt + 1 < 2) //Xuong dong
			{
				vt++;	
				if(vt == 0) GoToXY(x + 12 + nienkhoa, y + 3 + vt);
				else if(vt == 1) GoToXY(x + 12 + hocki, y + 3 + vt);
			} break;
			case Enter: // in ds ltc co the huy co nk hk
			{				
				if (temp.nienKhoa.compare("") == 0)
				{
					GoToXY(x + 13, y + 12); cout << "Nien Khoa khong duoc de trong!";
					Sleep(2000);
					GoToXY(x + 13, y + 12); cout << "                                      ";
					vt = 0;
					GoToXY(x + 12 + nienkhoa, y + 3 + vt);
				}
				else if (temp.hocki == 0 )
				{
					GoToXY(x + 13, y + 12); cout << "Hoc Ki khong duoc de trong!";
					Sleep(2000);
					GoToXY(x + 13, y + 12); cout << "                                      ";
					vt = 1;
					GoToXY(x + 12 + hocki, y + 3 + vt);
				}
				else if (Search_infoLTCNKHK(dsLopTinChi, temp) == 0)
				{
					GoToXY(x + 1, y + 8); cout << "Khong tim thay danh sach lop tin chi!";
					Sleep(2000);
					GoToXY(x + 1, y + 8); cout << "                                      ";
					vt = 0;
					GoToXY(x + 12 + nienkhoa, y + 3 + vt);
				}
				else
				{
					int j = 1; // trang hien tai
					float page = 0;
					int muiten = 0;					
					int sl = DemLTCkoDuDK(dsLopTinChi, temp);
					page = sl;
					page = ceil(page/15); // so trang ltckodudk
					DeleteScreen();
					GoToXY(x + 19, y ); cout << " Nien Khoa: ";
					GoToXY(x + 31, y ); cout << temp.nienKhoa;
					GoToXY(x + 40, y );cout << " Hoc Ki: ";
					GoToXY(x + 49, y ); cout << temp.hocki;
					Normal();
					HuongDanLTCKoDuDK();
					BangLTCKoDuDK(x, y, 15);
					InDSLTCKoDuDK(dsLopTinChi, root, temp, x, y, j, page); 
					modifyCursor(1, false);
					GoToXY(x - 3, y + 4 + muiten); MuiTen();					
					do
					{				
					char z;
					z = GetKey();	
					switch (z)
					{	
						case Up: if(muiten + 1 > 1) //Mui ten di len
						{
							Normal();
							GoToXY(x - 3, y + 4 + muiten); cout << "   ";
							muiten--;
							GoToXY(x - 3, y + 4 + muiten); MuiTen();
						} break;
						case Down: if(muiten + 1 < 15 && muiten < (sl - ((j - 1) * 15) - 1)) //Mui ten di xuong
						{
							Normal();
							GoToXY(x - 3, y + 4 + muiten); cout << "   ";
							muiten++;
							GoToXY(x - 3, y + 4 + muiten); MuiTen();
						} break;			
						case Right: if(j < page) //Qua trang
						{
							XoaBangLTCKoDuDK(x, y);					
							InDSLTCKoDuDK(dsLopTinChi, root, temp, x, y, ++j, page);
							if(j == page && sl % 15 != 0 && muiten > sl % 15 - 1)
							{
								GoToXY(x - 3, y + 4 + muiten); cout << "   ";
								muiten = sl - ((j - 1) * 15) - 1;
								GoToXY(x - 3, y + 4 + muiten); MuiTen();
							}
						} break;
						case Left: if(j > 1) //Qua trang
						{
							XoaBangLTCKoDuDK(x, y);	
							InDSLTCKoDuDK(dsLopTinChi, root, temp, x, y, --j, page);
						} break;
						case Delete:// huy ltc
						{
							Normal();
							sl = DemLTCkoDuDK(dsLopTinChi, temp);
							int ltc[sl], b = 0, l, h;
							l = (j - 1)* 15 + muiten;//ltc thu l trong mang ltc
							b = 0;
							for (int t = 0; t < dsLopTinChi.n; t++)
							{
								if (temp.nienKhoa == dsLopTinChi.dsLopTC[t]->nienKhoa && temp.hocki == dsLopTinChi.dsLopTC[t]->hocki && dsLopTinChi.dsLopTC[t]->SLDK < dsLopTinChi.dsLopTC[t]->svMin)
									{
  	   									ltc[b] = t;
										b++;	
									}
							}
							if(dsLopTinChi.dsLopTC[ltc[l]]->trangThai == lopDuocMo)
							{
								GoToXY(3, 16); cout << "Ban co muon huy Lop Tin Chi nay khong?";
								GoToXY(3, 17); cout << "HUY (Y)\t KHONG HUY (N)";
								do
								{
									char kt = GetKey();
									if(kt == 'Y' || kt == 'y') 
									{
									Normal();
									lopTinChi temp1;
									temp1.maMonHoc = dsLopTinChi.dsLopTC[ltc[l]]->maMonHoc;
									temp1.nienKhoa = dsLopTinChi.dsLopTC[ltc[l]]->nienKhoa;
									temp1.hocki = dsLopTinChi.dsLopTC[ltc[l]]->hocki;
									temp1.nhom = dsLopTinChi.dsLopTC[ltc[l]]->nhom;
									GoToXY(3, 16); cout << "                                      ";
									GoToXY(3, 17); cout << "                                ";
									HuyLTC(dsLopTinChi, temp1);
									sl = DemLTCkoDuDK(dsLopTinChi, temp);
									page = sl;
									page = ceil(page/15); // so trang ltckodudk
									XoaBangLTCKoDuDK(x, y);
									InDSLTCKoDuDK(dsLopTinChi, root, temp, x, y, j, page);
									SaveLopTC(dsLopTinChi);
									if( sl % 15 == 0)
									{
										XoaBangLTCKoDuDK(x, y);
										InDSLTCKoDuDK(dsLopTinChi, root, temp, x, y, j, page);
									}
									else if(j == page && sl % 15 != 0 && muiten > sl % 15 - 1)
									{
										GoToXY(x - 3, y + 4 + muiten); cout << "   ";
										muiten = sl - ((j - 1) * 15) - 1; 
										GoToXY(x - 3, y + 4 + muiten); MuiTen();
									}
									
									break;
									}
									else if(kt == 'N' || kt == 'n') 
									{
										GoToXY(3, 16); cout << "                                      ";
										GoToXY(3, 17); cout << "                                ";
										break;
									}
								} while(1);	
							}
							else
							{
								GoToXY(3, 16); cout << "Lop Tin Chi da bi huy!";							
								Sleep(2000);
								GoToXY(3, 16); cout << "                        ";
								break;
							}
								
						} break;
						case Enter:// mo lai ltc
						{
							Normal();
							sl = DemLTCkoDuDK(dsLopTinChi, temp);
							int ltc[sl], b = 0, l, h;
							l = (j - 1)* 15 + muiten;//l=1
							b = 0;
							for (int t = 0; t < dsLopTinChi.n; t++)
							{
								if (temp.nienKhoa == dsLopTinChi.dsLopTC[t]->nienKhoa && temp.hocki == dsLopTinChi.dsLopTC[t]->hocki && dsLopTinChi.dsLopTC[t]->SLDK < dsLopTinChi.dsLopTC[t]->svMin)
									{
  	   									ltc[b] = t;
										b++;	
									}
							}
							
							if(dsLopTinChi.dsLopTC[ltc[l]]->trangThai == lopBiHuy)
							{
								GoToXY(3, 16); cout << "Ban co muon mo lai Lop Tin Chi nay khong?";
								GoToXY(3, 17); cout << "CO (Y)\t KHONG (N)";
								do
								{
									char kt = GetKey();
									if(kt == 'Y' || kt == 'y') 
									{
									Normal();
									lopTinChi temp1;
									temp1.maMonHoc = dsLopTinChi.dsLopTC[ltc[l]]->maMonHoc;
									temp1.nienKhoa = dsLopTinChi.dsLopTC[ltc[l]]->nienKhoa;
									temp1.hocki = dsLopTinChi.dsLopTC[ltc[l]]->hocki;
									temp1.nhom = dsLopTinChi.dsLopTC[ltc[l]]->nhom;
									GoToXY(3, 16); cout << "                                               ";
									GoToXY(3, 17); cout << "                         ";
									MoLaiLTC(dsLopTinChi, temp1);
									sl = DemLTCkoDuDK(dsLopTinChi, temp);
									page = sl;
									page = ceil(page/15); // so trang ltckodudk
									XoaBangLTCKoDuDK(x, y);
									InDSLTCKoDuDK(dsLopTinChi, root, temp, x, y, j, page);
									SaveLopTC(dsLopTinChi);
									if( sl % 15 == 0)
									{
										XoaBangLTCKoDuDK(x, y);
										InDSLTCKoDuDK(dsLopTinChi, root, temp, x, y, j, page);
									}
									else if(j == page && sl % 15 != 0 && muiten > sl % 15 - 1)
									{
										GoToXY(x - 3, y + 4 + muiten); cout << "   ";
										muiten = sl - ((j - 1) * 15) - 1; 
										GoToXY(x - 3, y + 4 + muiten); MuiTen();
									}
									
									break;
									}
									else if(kt == 'N' || kt == 'n') 
									{
										GoToXY(3, 16); cout << "                                               ";
										GoToXY(3, 17); cout << "                         ";
										break;
									}
								} while(1);	
							}
							else
							{
								GoToXY(3, 16); cout << "Lop Tin Chi da duoc mo!";							
								Sleep(2000);
								GoToXY(3, 16); cout << "                        ";
								break;	
							}
								
						} break;
						case ESC: break;
					}
					if( z == ESC) // thoat ra de nhap lai nk hk
					{
						DeleteScreen();
						DeleteSign();
						HuongDanNhapNKHKLTCKDDK();
						XoaBangNhapNKHK(x, y);
						BangNhapNKHK(x, y);						
						temp.nienKhoa.assign("");	// gan temp.nienkhoa bang rong
						temp.hocki = 0;
						nienkhoa = 0, hocki = 0, vt = 0;
						GoToXY(x + 12 + nienkhoa, y + 3 + vt);
						modifyCursor(1, true);
						break;
					} 
					} while (1);					
				} 
			} break;
			case ESC:// thoat ra menu
			{
				DeleteScreen();
				DeleteSign();
				return;
			}
			default: switch(vt)
			{
				case 0: //Vi tri con tro o phan nien khoa
				{
					
					if(c == Backspace)
					{
						if(nienkhoa > 0)
						{
 							temp.nienKhoa= temp.nienKhoa.substr(0, --nienkhoa);
							GoToXY(x + 12 + nienkhoa, y + 3 + vt); cout << " ";
							GoToXY(x + 12 + nienkhoa, y + 3 + vt);
						}		
					}
					else if(c == 45 || (c >= 48 && c <= 57)) //bao gom ky tu (-), so
					{	
						if(nienkhoa < 9)
						{
							temp.nienKhoa += c;
							nienkhoa++;
							cout << c;
						}
						else
						{
							GoToXY(x + 15, y + 12); cout << "Nien Khoa chi toi da 9 ky tu!";							
							Sleep(2000);
							GoToXY(x + 15, y + 12); cout << "                               ";
							GoToXY(x + 12 + nienkhoa, y + 3 + vt);
						}						
					}					
				} break;
				case 1: //Vi tri con tro o phan hoc ki
				{
					if (nienkhoa == 0) 
					{
						GoToXY(x + 15, y + 12); cout << "Nien Khoa khong duoc trong!";							
						Sleep(1000);
						GoToXY(x + 15, y + 12); cout << "                               ";
						vt--;
						GoToXY(x + 12 + nienkhoa, y + 3 + vt);
					}
					else 
					{
					if(c == Backspace)
					{
						if(hocki > 0)
						{
							temp.hocki = 0;
							hocki--;
							GoToXY(x + 12 + hocki, y + 3 + vt); cout << " ";
							GoToXY(x + 12 + hocki, y + 3 + vt);
						}		
					}
					else if(c >= 49 && c <= 51) //chi lay so 1,2,3
					{
						if ( hocki < 1)
						{
							switch(c)
							{
								case '1': temp.hocki = temp.hocki + 1; break;
								case '2': temp.hocki = temp.hocki + 2; break;
								case '3': temp.hocki = temp.hocki + 3; break;	
							}	
							hocki++;
							cout << c;
						}
						else 
						{
							GoToXY(x + 15, y + 12); cout << "Hoc Ki: 1, 2, 3!";
							Sleep(1000);
							GoToXY(x + 15, y + 12); cout << "                               ";
							GoToXY(x + 12 + hocki, y + 3 + vt);
						}
						
					}
					else 
					{
						GoToXY(x + 15, y + 12); cout << "Hoc Ki: 1, 2, 3!";
						Sleep(1000);
						GoToXY(x + 15, y + 12); cout << "                               ";
						GoToXY(x + 12 + hocki, y + 3 + vt);
					}
					}

				} break;
			}
		}
	} while(1);
}
//---------------------------------------------CAUI(NHAPDIEM)----------------------------------------------
float stringtofloat(string s) // chuyen tu string sang float
{
	float a = 0;
	switch(s[0])
	{
		case 48: a = a + 0; break;
		case 49: a = a + 1; break;
		case 50: a = a + 2; break;
		case 51: a = a + 3; break;
		case 52: a = a + 4; break;
		case 53: a = a + 5; break;
		case 54: a = a + 6; break;
		case 55: a = a + 7; break;
		case 56: a = a + 8; break;
		case 57: a = a + 9; break;
	}
	if(s.length() != 1)
	{
	if ( s[1] == 46)
	{
		switch(s[2])
		{
			case 48: a = a + 0; break;
			case 49: a = a + 0.1; break;
			case 50: a = a + 0.2; break;
			case 51: a = a + 0.3; break;
			case 52: a = a + 0.4; break;
			case 53: a = a + 0.5; break;
			case 54: a = a + 0.6; break;
			case 55: a = a + 0.7; break;
			case 56: a = a + 0.8; break;
			case 57: a = a + 0.9; break;
		}
	}
	else a = a + 9; //10.0
//		switch(s[3])
//		{
//			case 48: a = a + 0; break;
//			case 49: a = a + 0.01; break;
//			case 50: a = a + 0.02; break;
//			case 51: a = a + 0.03; break;
//			case 52: a = a + 0.04; break;
//			case 53: a = a + 0.05; break;
//			case 54: a = a + 0.06; break;
//			case 55: a = a + 0.07; break;
//			case 56: a = a + 0.08; break;
//			case 57: a = a + 0.09; break;
//		}
	}	
	return a;
}
void CheckDiemNhap(string diem[], int contro) // ktra nhap diem
{
	if(diem[contro][0] >= 48 && diem[contro][0] <= 57 )
    {
    	if(diem[contro][0] == 49 && diem[contro][1] > 48 ) //11
    	{
    		GoToXY(80 + 60, 15 + 7); cout << " Diem lon hon 0 va nho hon 10 ";
			Sleep(2000);
			GoToXY(80 + 60, 15 + 7); cout << "                                  ";
		}
    	else if(diem[contro][1] != 46 && diem[contro][1] >= 48 && diem[contro][0] != 49)//21
    	{
    		GoToXY(80 + 60, 15 + 7); cout << " Diem lon hon 0 va nho hon 10 ";
			Sleep(2000);
			GoToXY(80 + 60, 15 + 7); cout << "                                  ";			
		}
		else if(diem[contro][1] == 46 && diem[contro][2] == 46)//1..
		{
			GoToXY(80 + 60, 15 + 7); cout << " Diem nhap sai, moi nhap lai!";
			Sleep(2000);
			GoToXY(80 + 60, 15 + 7); cout << "                             ";
			
		}
		else if(diem[contro][2] == 46 && diem[contro][3] > 48 )//10.3
		{
			GoToXY(80 + 60, 15 + 7); cout << " Diem nhap sai, moi nhap lai!";
			Sleep(2000);
			GoToXY(80 + 60, 15 + 7); cout << "                             ";			
		}    								
	}
	else//..
	{
		GoToXY(80 + 60, 15 + 7); cout << " Diem nhap sai, moi nhap lai!";
		Sleep(2000);
		GoToXY(80 + 60, 15 + 7); cout << "                             ";
	}
	GoToXY(80 + 53 + diem[contro].length(), 15 + 4 );
}
int CheckDiemLuu(int sl, string diem[],int vt1)//kiem tra can luu
{
	for (int x = 0; x < sl; x++)
	{
		if (diem[x].length() != 0)//2.3
		{
//			if ( diem[x][0] >= 48 && diem[x][0] <= 57 )
//			{
//			if(diem[x][0] == 49 && diem[x][1] > 48 )//13
//			{
//				GoToXY(80 + 60, 15 + 7); cout << " Diem lon hon 0 va nho hon 10";
//				Sleep(2000);
//				GoToXY(80 + 60, 15 + 7); cout << "                             ";
//				GoToXY(80 + 53 + diem[0].length(), 15 + 4 );
//				return 1;
//			}
//			else if (diem[x][0] != 49 && diem[x][1] >= 48 && diem[x][1] != 46) //35 
//			{
//				GoToXY(80 + 60, 15 + 7); cout << " Diem lon hon 0 va nho hon 10";
//				Sleep(2000);
//				GoToXY(80 + 60, 15 + 7); cout << "                             ";
//				GoToXY(80 + 53 + diem[0].length(), 15 + 4 );
//				return 1;				
//			}
//			}
//			else if(diem[x][1] == 46 || diem[x][2] == 46) // 5.., 5.5.
//			{
//				GoToXY(80 + 60, 15 + 7); cout << " Diem nhap sai, moi nhap lai!";
//				Sleep(2000);
//				GoToXY(80 + 60, 15 + 7); cout << "                             ";
//				GoToXY(80 + 53 + diem[0].length(), 15 + 4 );
//				return 1;
//			}
//				return 0;
//		}
//		else if (diem[x][0] == 49 && diem[x][1] == 48 && diem[x][2] != 46)//104
//		{
////			if (diem[x][2] == 46 && diem[x][3] != 48) // 10.2
////			{
////				GoToXY(80 + 60, 15 + 7); cout << " Diem nhap sai, moi nhap lai!";
////				Sleep(2000);
////				GoToXY(80 + 60, 15 + 7); cout << "                             ";
////				GoToXY(80 + 53 + diem[0].length(), 15 + 4 );
////				return 1;
////			}
////			else //103
////			if (diem[x][2] != 46)
////			{
//				GoToXY(80 + 60, 15 + 7); cout << " Diem nhap sai, moi nhap lai!";
//				Sleep(2000);
//				GoToXY(80 + 60, 15 + 7); cout << "                             ";
//				GoToXY(80 + 53 + diem[0].length(), 15 + 4 );
//				return 1;
//			}
			if(diem[x][0] >= 48 && diem[x][0] <= 57 )
    		{
    			if(diem[x][0] == 49 && diem[x][1] > 48 ) //11
    			{
    				GoToXY(80 + 60, 15 + 7); cout << " Diem lon hon 0 va nho hon 10 ";
					Sleep(2000);
					GoToXY(80 + 60, 15 + 7); cout << "                                  ";
					GoToXY(80 + 53 + diem[x].length(), 15 + 4 + vt1);
					return 1;
				}
    			else if(diem[x][1] != 46 && diem[x][1] >= 48 && diem[x][0] != 49)//21
    			{
    				GoToXY(80 + 60, 15 + 7); cout << " Diem lon hon 0 va nho hon 10 ";
					Sleep(2000);
					GoToXY(80 + 60, 15 + 7); cout << "                                  ";
					GoToXY(80 + 53 + diem[x].length(), 15 + 4 + vt1);		
					return 1;	
				}
				else if(diem[x][1] == 46 && diem[x][2] == 46)//1..
				{
					GoToXY(80 + 60, 15 + 7); cout << " Diem nhap sai, moi nhap lai!";
					Sleep(2000);
					GoToXY(80 + 60, 15 + 7); cout << "                             ";
					GoToXY(80 + 53 + diem[x].length(), 15 + 4 + vt1);
					return 1;
			
				}
				else if(diem[x][2] == 46 && diem[x][3] > 48 )//10.3
				{
					GoToXY(80 + 60, 15 + 7); cout << " Diem nhap sai, moi nhap lai!";
					Sleep(2000);
					GoToXY(80 + 60, 15 + 7); cout << "                             ";
					GoToXY(80 + 53 + diem[x].length(), 15 + 4 + vt1);	
					return 1;		
				}    								
			}
			else//..
			{
				GoToXY(80 + 60, 15 + 7); cout << " Diem nhap sai, moi nhap lai!";
				Sleep(2000);
				GoToXY(80 + 60, 15 + 7); cout << "                             ";
				GoToXY(80 + 53 + diem[x].length(), 15 + 4 + vt1 );
				return 1;
			}
		}
		else
		{
			GoToXY(80 + 60, 15 + 7); cout << " Co sinh vien chua nhap diem, moi nhap lai!";
			Sleep(2000);
			GoToXY(80 + 60, 15 + 7); cout << "                                            ";
			GoToXY(80 + 53 + diem[x].length(), 15 + 4 + vt1);
			return 1;
		}										
	}return 0;
}
void NhapDiem(string diem[], int contro, int vt1, char z) // nhap diem
{
	int s = diem[contro].length();
		if(z == Backspace)
	{
		if( diem[contro].length() > 0)
		{		
			diem[contro] = diem[contro].substr(0, --s);
			GoToXY(80 + 53 + s, 15 + vt1 + 4); cout << " ";																		
			GoToXY(80 + 53 + s, 15 + vt1 + 4);
		}		
	}
	else if(z == 46 || (z >= 48 && z <= 57)) //bao gom ky tu (.), so
	{	
		if ( diem[contro].length() < 3)
		{
			diem[contro] += z;
			s++;
			cout << z;
  			CheckDiemNhap(diem, contro);
  			GoToXY(80 + 53 + s, 15 + 4 + vt1);
		}
		else
		{
			GoToXY(80 + 60, 15 + 7); cout << "Nhap diem lon nhat bang 10";
			GoToXY(80 + 60, 15 + 7); cout << "Chi nhap den so thap phan thu 1!";							
			Sleep(2000);
			GoToXY(80 + 60, 15 + 7); cout << "                           ";
			GoToXY(80 + 60, 15 + 7); cout << "                                 ";
			GoToXY(80 + 53 + s, 15 + 4 + vt1);
		}		
	}
	
}
void LuuDiemCuaSV(DSLTC &dsLopTinChi, DKLTCPTR p,int i, string diem[]) // luu diem
{
	Normal();
	int k = 0;
	p = dsLopTinChi.dsLopTC[i]->DSDK;
	for(;p != NULL; p = p->pNext)
	{
		if(p->info.trangThai == conDangKi)
		{
			p->info.diem = stringtofloat(diem[k]);
			k++;
		}		
	}
}
int sldk(DSLTC dsLopTinChi, DKLTCPTR p,int i)
{
	p = dsLopTinChi.dsLopTC[i]->DSDK;
	int sl = 0;
	if(p == NULL) return 0;
	else
	{
		for(;p != NULL; p = p->pNext)
		{
			if(p->info.trangThai == conDangKi)
			sl++;
		}
		return sl;
	}
	
}
void NhapDiemSV(DSLTC &dsLopTinChi, MHPTR root, DKLTCPTR p, DSSinhVien dsSinhVien, int x, int y) //nhap nk,hk,nhom,mmh cua ltc can nhap diem
{
	modifyCursor(1, true);
	int n, vt = 0, mamh = 0, nienkhoa = 0, hocki = 0, nhom = 0;
	char c, g;
	DKLTCPTR r;
	lopTinChi temp; //Xai tam de them vao sau khi nhap xong
	temp.hocki = 0;
	temp.nhom = 0;
	Normal();
	GoToXY(15 ,14); cout << "NHAP THAM SO";
	BangThamSoSVDK( x, y); 	
	HuongDanNhapNKHKDiemSV();							
	GoToXY(16,16);				
	do
	{
		c = GetKey();		
		switch (c)
		{
			case Up: if(vt + 1 > 1) //Len dong tren
			{
				vt--;
				if(vt == 0) GoToXY(x + 16 + nienkhoa, y + 3 + vt);
				else if(vt == 1) GoToXY(x + 16 + hocki, y + 3 + vt);
				else if(vt == 2) GoToXY(x + 16 + nhom, y + 3 + vt);
				else if(vt == 3) GoToXY(x + 16 + mamh, y + 3 + vt);
			} break;
//			case Enter: if(vt + 1 < 4) //Xuong dong
//			{
//				vt++;	
//				if(vt == 0) GoToXY(x + 16 + nienkhoa, y + 3 + vt);
//				else if(vt == 1) GoToXY(x + 16 + hocki, y + 3 + vt);
//				else if(vt == 2) GoToXY(x + 16 + nhom, y + 3 + vt);
//				else if(vt == 3) GoToXY(x + 16 + mamh, y + 3 + vt);
//
//			} break;
			case Down: if(vt + 1 < 4) //Xuong dong
			{
				vt++;	
				if(vt == 0) GoToXY(x + 16 + nienkhoa, y + 3 + vt);
				else if(vt == 1) GoToXY(x + 16 + hocki, y + 3 + vt);
				else if(vt == 2) GoToXY(x + 16 + nhom, y + 3 + vt);
				else if(vt == 3) GoToXY(x + 16 + mamh, y + 3 + vt);
			} break;

			case Enter: // in ds sinh vien dk
			{	
				if (temp.nienKhoa.compare("") == 0)
				{
					GoToXY(x + 13, y + 12); cout << "Nien Khoa khong duoc de trong!";
					Sleep(2000);
					GoToXY(x + 13, y + 12); cout << "                                      ";
					vt = 0;
					GoToXY(x + 16 + nienkhoa, y + 3 + vt);
				}
				else if (temp.hocki == 0 )
				{
					GoToXY(x + 13, y + 12); cout << "Hoc Ki khong duoc de trong!";
					Sleep(2000);
					GoToXY(x + 13, y + 12); cout << "                                      ";
					vt = 1;
					GoToXY(x + 16 + hocki, y + 3 + vt);
				}
				else if (temp.nhom == 0 || nhom == 0)
				{
					GoToXY(x + 13, y + 12); cout << "Nhom lon hon 0 va khong duoc de trong!";
					Sleep(2000);
					GoToXY(x + 13, y + 12); cout << "                                      ";
					vt = 2;
					GoToXY(x + 16 + nhom, y + 3 + vt);
				}
				else if (temp.maMonHoc.compare("") == 0)
				{
					GoToXY(x + 13, y + 12); cout << "Ma Mon Hoc khong duoc de trong!";
					Sleep(2000);
					GoToXY(x + 13, y + 12); cout << "                                      ";
					vt = 3;
					GoToXY(x + 16 + mamh, y + 3 + vt);
				}
				else 
				{
					DeleteScreen();
					HuongDanNhapDiem();
					ChuanHoaInHoa(temp.maMonHoc);
					int i = Search_infoLTC(dsLopTinChi, temp);
					if(i == -1)
					{
						GoToXY(60, 15); cout << "KHONG TIM THAY LOP TIN CHI DE IN DANH SACH SINH VIEN DANG KI";
						Sleep(2000);
						GoToXY(60, 15); cout << "                                                            ";
						vt = 4;
						GoToXY(x + 16 , y + 3 + vt);
						break;
					} 
					else 
					{
						p = dsLopTinChi.dsLopTC[i]->DSDK;
						int sl = sldk(dsLopTinChi,p,i); // sldk
						if ( sl == 0)
						{
						GoToXY(60, 15); cout << "LOP TIN CHI CHUA CO SINH VIEN DANG KI!";
						Sleep(2000);
						GoToXY(60, 15); cout << "                                          ";
						vt = 4;
						GoToXY(x + 16 , y + 3 + vt);
						break;
						}
						else
						{
						BangSVDKNhapDiem( 80,15,15);
						int t = 1; // trang hien tai
						float page = 0;										
						page = sl;
						page = ceil(page/15);						
						int vt1 = 0, k = 0;
						int contro;
						contro = (t - 1) * 15 + vt1;
						string diem[dsLopTinChi.dsLopTC[i]->SLDK];
						string diem2;												
						XoaBangSVDKNhapDiem(80,15);
						InDSSVDK(dsLopTinChi, dsSinhVien, p, t, i, page, temp);	
						for(;p != NULL;p = p->pNext)
						{
							ostringstream d; // doi tu float sang string
							if (p->info.trangThai == conDangKi)
							{
								d << p->info.diem;
								diem2 = d.str(); 
								diem[k].assign(diem2); // gan diem thu k trong mang bang diem2
								k++;
							}							
						}	
						int kt;
						if( t * 15 > sl) kt = sl; // vtri ket thuc
						else kt = t * 15;
						int dem = -1;
						for (int l = (t - 1) * 15; l < kt; l++) // in diem vao bang
						{
							dem++;
							GoToXY(80 + 53, 15 + 4 + dem); cout << diem[l]; 
						}											
						GoToXY(80 + 53 + diem[vt1].length(), 15 + 4 + vt1);
					do
					{				
					char z;
					z = GetKey();	
					switch (z)
					{	
						
						case Up: if(vt1 + 1 > 1) //Len dong tren
						{
							vt1--;
							contro--;
							GoToXY(80 + 53 + diem[contro].length(), 15 + 4 + vt1);
						} break;
						case Down: if(vt1 + 1 < 15 && vt1 < (sl - ((t - 1) * 15) - 1)) //Xuong dong
						{
							vt1++;	
							contro++;
							GoToXY(80 + 53 + diem[contro].length(), 15 + 4 + vt1);							
						} break;			
						case Right: if(t < page) //Qua trang
						{
							XoaBangSVDKNhapDiem(80,15);					
							InDSSVDK(dsLopTinChi, dsSinhVien, Search_infoDSDK(dsLopTinChi, p, t, i), ++t, i, page, temp);
							contro = (t - 1) * 15;
							if( t * 15 > sl) kt = sl; // vtri ket thuc
							else kt = t * 15;
							int dem = -1;
							
							for (int l1 = (t - 1) * 15; l1 < kt; l1++) // in diem trang i
							{
								dem++;
								GoToXY(80 + 53, 15 + 4 + dem); cout << diem[l1]; 
							}
							vt1 = 0;
							GoToXY(80 + 53 + diem[(t-1)*15].length(), 15 + 4 );
						} break;
						case Left: if(t > 1) //Qua trang
						{
							XoaBangSVDKNhapDiem(80,15);	
							p = dsLopTinChi.dsLopTC[i]->DSDK;				
							InDSSVDK(dsLopTinChi, dsSinhVien, p, --t, i, page, temp);
							contro = (t - 1) * 15 + vt1;
							if( t * 15 > sl) kt = sl; // vtri ket thuc
							else kt = t * 15;
							int dem = -1;
							
							for (int l2 = (t - 1) * 15; l2 < kt; l2++) //in diem trang i
							{
								dem++;
								GoToXY(80 + 53, 15 + 4 + dem); cout << diem[l2]; 
							}
							vt1=0;
							GoToXY(80 + 53 + diem[(t-1)*15].length(), 15 + 4 );
						} break;
						case F2: // luu diem
						{
								GoToXY(80 + 60, 15 + 6); cout << "Ban co muon luu diem khong?";
								GoToXY(80 + 60, 15 + 8); cout << "LUU (Y)\t KHONG LUU (N)";
								do
								{
									char kt = GetKey();
									if(kt == 'Y' || kt == 'y') 
									{
									int s;
									GoToXY(80 + 60, 15 + 6); cout << "                                ";
									GoToXY(80 + 60, 15 + 8); cout << "                                ";
									int check = CheckDiemLuu( sl, diem, vt1);
									if (check == 0)
									{
										LuuDiemCuaSV(dsLopTinChi, p, i, diem);									
										GoToXY(80 + 60, 15 + 7); cout << " Da luu diem thanh cong";
										Sleep(2000);
										GoToXY(80 + 60, 15 + 7); cout << "                        ";
										SaveDangKiLopTC(dsLopTinChi);
										break;
									}
									else break;
									}
									else if(kt == 'N' || kt == 'n') break;
								} while(1);	
						} break;
						case ESC: break;
						
						default: switch(vt1)
						{
							case 0:	NhapDiem(diem, contro, vt1, z);	break;
							case 1:	NhapDiem(diem, contro, vt1, z); break;
							case 2:	NhapDiem(diem, contro, vt1, z);	break;
							case 3:	NhapDiem(diem, contro, vt1, z); break;
							case 4:	NhapDiem(diem, contro, vt1, z);	break;
							case 5:	NhapDiem(diem, contro, vt1, z); break;
							case 6:	NhapDiem(diem, contro, vt1, z);	break;
							case 7:	NhapDiem(diem, contro, vt1, z); break;
							case 8:	NhapDiem(diem, contro, vt1, z);	break;
							case 9:	NhapDiem(diem, contro, vt1, z); break;
							case 10: NhapDiem(diem, contro, vt1, z); break;
							case 11: NhapDiem(diem, contro, vt1, z); break;
							case 12: NhapDiem(diem, contro, vt1, z); break;
							case 13: NhapDiem(diem, contro, vt1, z); break;
							case 14: NhapDiem(diem, contro, vt1, z); break;

						}
					}
					if (z == ESC)
						{
							int ck = CheckDiemLuu(sl, diem,vt1);
							if(ck != 0)
							{
								GoToXY(80 + 60, 15 + 7); cout << " Neu tiep tuc nhan ESC";
								GoToXY(80 + 60, 15 + 6); cout <<" Tat ca diem vua nhap se khong duoc luu lai!";
								Sleep(2500);																 
								char kytu = GetKey();
								if(kytu == ESC) 
								{
									GoToXY(80 + 60, 15 + 7); cout << "                       ";
									GoToXY(80 + 60, 15 + 6); cout <<"                                             ";
									DeleteScreen();
									XoaBangThamSo(0,13);						
									temp.nienKhoa.assign("");	//gan temp.niekhoa bang rong
									temp.maMonHoc.assign("");//gan temp.mnh bang rong
									temp.hocki = 0;
									temp.nhom = 0;
									mamh= 0, nienkhoa = 0, hocki = 0, nhom = 0, vt =0;
									GoToXY(x + 16 + nienkhoa, y + 3 + vt);
									break;
								}
								GoToXY(80 + 53 + diem[0].length(), 15 + 4);
							}
							else
							{
//								GoToXY(80 + 60, 15 + 6); cout << "Ban co muon luu diem khong?";
//								GoToXY(80 + 60, 15 + 8); cout << "LUU (Y)\t KHONG LUU (N)";
//								do
//								{
//									char kt1 = GetKey();
//									if(kt1 == 'Y' || kt1 == 'y') 
//									{
									int s;
									GoToXY(80 + 60, 15 + 6); cout << "                                ";
									GoToXY(80 + 60, 15 + 8); cout << "                                ";
									LuuDiemCuaSV(dsLopTinChi, p, i, diem);									
									GoToXY(80 + 60, 15 + 7); cout << " Diem da duoc luu lai!";
									Sleep(2000);
									GoToXY(80 + 60, 15 + 7); cout << "                      ";
									SaveDangKiLopTC(dsLopTinChi);
									DeleteScreen();
									XoaBangThamSo(0,13);						
									temp.nienKhoa.assign("");	//gan temp.niekhoa bang rong
									temp.maMonHoc.assign("");//gan temp.manh bang rong
									temp.hocki = 0;
									temp.nhom = 0;
									mamh= 0, nienkhoa = 0, hocki = 0, nhom = 0, vt =0;
									GoToXY(x + 16 + nienkhoa, y + 3 + vt);
									break;
//									}
//									else if(kt1 == 'N' || kt1 == 'n') break;
//								} while(1);	
							}
						}			 
					} while (1);
				}
				}
				}
			} break;
			case F1:
			{
				DeleteScreen();
				BangMonHoc(77, 15, 15);
				TenMonHocTangDan(root, 87, 12);
				if(vt == 0) GoToXY(x + 16 + nienkhoa, y + 3 + vt);
				else if(vt == 1) GoToXY(x + 16 + hocki, y + 3 + vt);
				else if(vt == 2) GoToXY(x + 16 + nhom, y + 3 + vt);
				else if(vt == 3) GoToXY(x + 16 + mamh, y + 3 + vt);
				break;
			} 
			case ESC: 
			{
				DeleteScreen(); 
				DeleteGocTrai();
				DeleteSign();
				return;
			}
			default: switch(vt)
			{
				case 0: //Vi tri con tro o phan nien khoa
				{
					
					if(c == Backspace)
					{
						if(nienkhoa > 0)
						{
 							temp.nienKhoa= temp.nienKhoa.substr(0, --nienkhoa);
							GoToXY(x + 16 + nienkhoa, y + 3 + vt); cout << " ";
							GoToXY(x + 16 + nienkhoa, y + 3 + vt);
						}		
					}
					else if(c == 45 || (c >= 48 && c <= 57)) //bao gom ky tu (-), so
					{	
						if(nienkhoa < 9)
						{
							temp.nienKhoa += c;
							nienkhoa++;
							cout << c;
						}
						else
						{
							GoToXY(x + 15, y + 12); cout << "Nien Khoa chi toi da 9 ky tu!";							
							Sleep(2000);
							GoToXY(x + 15, y + 12); cout << "                               ";
							GoToXY(x + 16 + nienkhoa, y + 3 + vt);
						}						
					}					
				} break;
				case 1: //Vi tri con tro o phan hoc ki
				{
					if (nienkhoa == 0) 
					{
						GoToXY(x + 15, y + 12); cout << "Nien Khoa khong duoc trong!";							
						Sleep(1000);
						GoToXY(x + 15, y + 12); cout << "                               ";
						vt--;
						GoToXY(x + 16 + nienkhoa, y + 3 + vt);
					}
					else 
					{
					if(c == Backspace)
					{
						if(hocki > 0)
						{
							temp.hocki = 0;
							hocki--;
							GoToXY(x + 16 + hocki, y + 3 + vt); cout << " ";
							GoToXY(x + 16 + hocki, y + 3 + vt);
						}		
					}
					else if(c >= 49 && c <= 51) //chi lay so 1,2,3
					{
						if ( hocki < 1)
						{
							switch(c)
							{
								case '1': temp.hocki = temp.hocki + 1; break;
								case '2': temp.hocki = temp.hocki + 2; break;
								case '3': temp.hocki = temp.hocki + 3; break;	
							}	
							hocki++;
							cout << c;
						}
						else 
						{
							GoToXY(x + 15, y + 12); cout << "Hoc Ki: 1, 2, 3!";
							Sleep(1000);
							GoToXY(x + 15, y + 12); cout << "                               ";
							GoToXY(x + 16 + hocki, y + 3 + vt);
						}
						
					}
					else 
					{
						GoToXY(x + 15, y + 12); cout << "Hoc Ki: 1, 2, 3!";
						Sleep(1000);
						GoToXY(x + 15, y + 12); cout << "                               ";
						GoToXY(x + 16 + hocki, y + 3 + vt);
					}
					}

				} break;
				case 2: //Vi tri con tro o phan nhom
				{
					if (hocki == 0) 
					{
						GoToXY(x + 15, y + 12); cout << "Hoc Ki khong duoc trong!";							
						Sleep(1000);
						GoToXY(x + 15, y + 12); cout << "                               ";
						vt--;
						GoToXY(x + 16 + hocki, y + 3 + vt);
					}
					else 
					{
						if(c == Backspace)
						{
							if(nhom > 0)
							{
								temp.nhom = temp.nhom/10;
								nhom--;
								GoToXY(x + 16 + nhom, y + 3 + vt); cout << " ";
								GoToXY(x + 16 + nhom, y + 3 + vt);
							}		
						}
						else if(c >= 48 && c <= 57)
						{
							switch(c)
							{
								case '0': temp.nhom = temp.nhom * 10 + 0; break;
								case '1': temp.nhom = temp.nhom * 10 + 1; break;
								case '2': temp.nhom = temp.nhom * 10 + 2; break;
								case '3': temp.nhom = temp.nhom * 10 + 3; break;
								case '4': temp.nhom = temp.nhom * 10 + 4; break;
								case '5': temp.nhom = temp.nhom * 10 + 5; break;
								case '6': temp.nhom = temp.nhom * 10 + 6; break;
								case '7': temp.nhom = temp.nhom * 10 + 7; break;
								case '8': temp.nhom = temp.nhom * 10 + 8; break;
								case '9': temp.nhom = temp.nhom * 10 + 9; break;
							}
							nhom++;
							cout << c;
							if (temp.nhom == 0 ) 
							{
								GoToXY(x + 15, y + 12); cout << " Nhom phai lon hon 0!";
								Sleep(1000);
								GoToXY(x + 15, y + 12); cout << "                               ";
								GoToXY(x + 16 + nhom, y + 3 + vt);
							}
						}
					}	
				} break;
				case 3: //Vi tri con tro o phan ma mon hoc
				{
					if (nhom == 0) 
					{
						GoToXY(x + 15, y + 12); cout << "Nhom khong duoc trong!";							
						Sleep(1000);
						GoToXY(x + 15, y + 12); cout << "                               ";
						vt--;
						GoToXY(x + 16 + nhom, y + 3 + vt);
					}
					else 
					{
						if(c == Backspace)
						{
							if(mamh > 0)
							{
								temp.maMonHoc = temp.maMonHoc.substr(0, --mamh);
								GoToXY(x + 16 + mamh, y + 3 + vt); cout << " ";
								GoToXY(x + 16 + mamh, y + 3 + vt);
							}		
						}
						else if((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122)) // lay so, in hoa, in thuong
						{
							if( temp.maMonHoc.length() < 7)
							{
								temp.maMonHoc += c;
								mamh++;
								cout << c;
							}
							else 
							{
								GoToXY(x + 15, y + 12); cout << "Ma Mon Hoc chi toi da 7 ky tu!";							
								Sleep(1000);
								GoToXY(x + 15, y + 12); cout << "                               ";
								GoToXY(x + 16 + mamh, y + 3 + vt);
							}
						}
					} 
				} break;
			}
		}
	} while(1);
}
