
void BangSinhVien(int x, int y, int i) // In Bang Sinh Vien
{
	Normal();
	int j,k;
	// ve khung
	GoToXY(x, y + 1); for (k = 0; k < 80; k++) cout << (char)196; // duong ngang
	GoToXY(x, y + 3); for (k = 0; k < 80; k++) cout << (char)196;
	GoToXY(x, y + 1); cout << (char)218; // goc vuong sang phai xuong duoi
	GoToXY(x, y + 2); cout << (char)179; // duong doc
	GoToXY(x, y + 3); cout << (char)195;// ba canh sang phai
	GoToXY(x + 80, y + 1); cout << (char)191;// goc vuong sang trai xuong duoi
	GoToXY(x + 80, y + 2); cout << (char)179;
	GoToXY(x + 80, y + 3); cout << (char)180;// ba canh sang trai
	for (j = 0; j < i; j++)
	{
		GoToXY(x, y + 4 + j); cout << (char)179; // duong doc
		GoToXY(x + 80, y + 4 + j); cout << (char)179;// duong doc
	}
	GoToXY(x, y + 4 + i); cout << (char)192; // goc vuong sang phai len tren	
	GoToXY(x + 1, y + 4 + i); for (k = 0; k < 80; k++) cout << (char)196;
	GoToXY(x + 80, y + 4 + i); cout << (char)217;// goc vuong sang trai len tren
	GoToXY(x + 15, y - 1); cout << "______________DANH SACH SINH VIEN_______________";
	// ve cot
	// cot 1
	int t = 14; // sua do rong cot tinh tu canh trai
	GoToXY(x + 3, y + 2); cout << " MASV";
	GoToXY(x + t, y + 1); cout << (char)194;// ba canh xuong duoi
	GoToXY(x + t, y + 2); cout << (char)179;
	GoToXY(x + t, y + 3); cout << (char)197;// bon canh +
	for (j = 0; j < i; j++)
	{
		GoToXY(x + t, y + 4 + j); cout << (char)179; // duong doc
	}
	GoToXY(x + t, y + 4 + i); cout << (char)193;// ba canh len tren
	// cot 2
	t = 35; // sua do rong cot
	GoToXY(x + 18, y + 2); cout << "      HO";
	GoToXY(x + t, y + 1); cout << (char)194;// ba canhj xuong duoi
	GoToXY(x + t, y + 2); cout << (char)179;
	GoToXY(x + t, y + 3); cout << (char)197;// bon canh +
	for (j = 0; j < i; j++)
	{
		GoToXY(x + t, y + 4 + j); cout << (char)179; // duong doc
	}
	GoToXY(x + t, y + 4 + i); cout << (char)193;// ba canh len tren
	// cot 3
	t = 45; // sua do rong cot
	GoToXY(x + 36, y + 2); cout << "   TEN";
	GoToXY(x + t, y + 1); cout << (char)194;// ba canhj xuong duoi
	GoToXY(x + t, y + 2); cout << (char)179;
	GoToXY(x + t, y + 3); cout << (char)197;// bon canh +
	for (j = 0; j < i; j++)
	{
		GoToXY(x + t, y + 4 + j); cout << (char)179; // duong doc
	}
	GoToXY(x + t, y + 4 + i); cout << (char)193;// ba canh len tren
	// cot 4
	t = 52; // sua do rong cot
	GoToXY(x + 46, y + 2); cout << " PHAI";
	GoToXY(x + t, y + 1); cout << (char)194;// ba canhj xuong duoi
	GoToXY(x + t, y + 2); cout << (char)179;
	GoToXY(x + t, y + 3); cout << (char)197;// bon canh +
	for (j = 0; j < i; j++)
	{
		GoToXY(x + t, y + 4 + j); cout << (char)179; // duong doc
	}
	GoToXY(x + t, y + 4 + i); cout << (char)193;// ba canh len tren
	// cot 5
	t = 65; // sua do rong cot
	GoToXY(x + 53, y + 2); cout << "    SDT";
	GoToXY(x + t, y + 1); cout << (char)194;// ba canhj xuong duoi
	GoToXY(x + t, y + 2); cout << (char)179;
	GoToXY(x + t, y + 3); cout << (char)197;// bon canh +
	for (j = 0; j < i; j++)
	{
		GoToXY(x + t, y + 4 + j); cout << (char)179; // duong doc
	}
	GoToXY(x + t, y + 4 + i); cout << (char)193;// ba canh len tren
	// cot 6

	GoToXY(x + 66, y + 2); cout << "     MALOP";
	
}
void XoaBangSinhVien(int x , int y)// x=60, y=15
{
	Normal();
	for(int i = 0; i < 15; i++)
	{
		GoToXY(x + 1, y + i + 4); cout << "           ";
		GoToXY(x + 15, y + i + 4); cout << "                  ";
		GoToXY(x + 36, y + i + 4); cout << "         ";
		GoToXY(x + 46, y + i + 4); cout << "   ";
		GoToXY(x + 53, y + i + 4); cout << "            ";
		GoToXY(x + 66, y + i + 4); cout << "            ";
	}
}
void BangSinhVien2(int x, int y, int i) // In bang lop tin chi
{
	Normal();
	int j,k;
	// ve khung
	GoToXY(x, y + 1); for (k = 0; k < 65; k++) cout << (char)196; // duong ngang
	GoToXY(x, y + 3); for (k = 0; k < 65; k++) cout << (char)196;
	GoToXY(x, y + 1); cout << (char)218; // goc vuong sang phai xuong duoi
	GoToXY(x, y + 2); cout << (char)179; // duong doc
	GoToXY(x, y + 3); cout << (char)195;// ba canh sang phai
	GoToXY(x + 65, y + 1); cout << (char)191;// goc vuong sang trai xuong duoi
	GoToXY(x + 65, y + 2); cout << (char)179;
	GoToXY(x + 65, y + 3); cout << (char)180;// ba canh sang trai
	for (j = 0; j < i; j++)
	{
		GoToXY(x, y + 4 + j); cout << (char)179; // duong doc
		GoToXY(x + 65, y + 4 + j); cout << (char)179;// duong doc
	}
	GoToXY(x, y + 4 + i); cout << (char)192; // goc vuong sang phai len tren	
	GoToXY(x + 1, y + 4 + i); for (k = 0; k < 65; k++) cout << (char)196;
	GoToXY(x + 65, y + 4 + i); cout << (char)217;// goc vuong sang trai len tren

	// ve cot
	// cot 1
	int t = 14; // sua do rong cot tinh tu canh trai
	GoToXY(x + 3, y + 2); cout << " MASV";
	GoToXY(x + t, y + 1); cout << (char)194;// ba canh xuong duoi
	GoToXY(x + t, y + 2); cout << (char)179;
	GoToXY(x + t, y + 3); cout << (char)197;// bon canh +
	for (j = 0; j < i; j++)
	{
		GoToXY(x + t, y + 4 + j); cout << (char)179; // duong doc
	}
	GoToXY(x + t, y + 4 + i); cout << (char)193;// ba canh len tren
	// cot 2
	t = 35; // sua do rong cot
	GoToXY(x + 18, y + 2); cout << "      HO";
	GoToXY(x + t, y + 1); cout << (char)194;// ba canhj xuong duoi
	GoToXY(x + t, y + 2); cout << (char)179;
	GoToXY(x + t, y + 3); cout << (char)197;// bon canh +
	for (j = 0; j < i; j++)
	{
		GoToXY(x + t, y + 4 + j); cout << (char)179; // duong doc
	}
	GoToXY(x + t, y + 4 + i); cout << (char)193;// ba canh len tren
	// cot 3
	t = 45; // sua do rong cot
	GoToXY(x + 36, y + 2); cout << "   TEN";
	GoToXY(x + t, y + 1); cout << (char)194;// ba canhj xuong duoi
	GoToXY(x + t, y + 2); cout << (char)179;
	GoToXY(x + t, y + 3); cout << (char)197;// bon canh +
	for (j = 0; j < i; j++)
	{
		GoToXY(x + t, y + 4 + j); cout << (char)179; // duong doc
	}
	GoToXY(x + t, y + 4 + i); cout << (char)193;// ba canh len tren
	// cot 4
	t = 52; // sua do rong cot
	GoToXY(x + 46, y + 2); cout << " PHAI";
	GoToXY(x + t, y + 1); cout << (char)194;// ba canhj xuong duoi
	GoToXY(x + t, y + 2); cout << (char)179;
	GoToXY(x + t, y + 3); cout << (char)197;// bon canh +
	for (j = 0; j < i; j++)
	{
		GoToXY(x + t, y + 4 + j); cout << (char)179; // duong doc
	}
	GoToXY(x + t, y + 4 + i); cout << (char)193;// ba canh len tren
	// cot 5
	t = 65; // sua do rong cot
	GoToXY(x + 53, y + 2); cout << "    SDT";
	
}
void BangThemSinhVien(int x, int y) // x=0, y=13
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

void HuongDanSinhVien() //Huong dan them sinh vien
{
	DeleteSign();
	int t = 15;
	GoToXY(x3 + 17, y3 + t ); cout << "HUONG DAN";
	
	GoToXY(x3, y3 + t + 1); cout << "Them sinh vien\t\t\tInsert";
	GoToXY(x3, y3 + t + 2); cout << "Xoa sinh vien\t\t\tDelete";
	GoToXY(x3, y3 + t + 3); cout << "Hieu chinh sinh vien\t\tEnter";
	GoToXY(x3, y3 + t + 4); cout << "In danh sach sinh vien\t\tF1";
	GoToXY(x3, y3 + t + 5); cout << "Luu \t\t\t\tF2";
	GoToXY(x3, y3 + t + 6); cout << "Thoat\t\t\t\tESC";
	GoToXY(x3, y3 + t + 7); cout << "Di chuyen mui ten\t\tMui ten len xuong";
	GoToXY(x3, y3 + t + 8); cout << "Qua trang\t\t\tMui ten trai phai";
	
}

void HuongDanInDiem() //Bang Huong Dan In Bang Diem
{
	DeleteSign();
	int t = 15;
	GoToXY(x3 + 17, y3 + t); cout << "HUONG DAN";
	GoToXY(x3, y3 + t + 1); cout << "Nhap cac thong tin\tMui ten len xuong";
	GoToXY(x3, y3 + t + 2); cout << "In danh sach mon hoc\tF1";
	GoToXY(x3, y3 + t + 3); cout << "Chon\t\t\tEnter";
	GoToXY(x3, y3 + t + 4); cout << "Qua trang\t\tMui ten trai phai";
	GoToXY(x3, y3 + t + 5); cout << "Thoat chuong trinh\tESC";
}
void DeleteHuongDanInBanDiem() //Xoa Bang Huong Dan In Bang Diem
{
	DeleteSign();
	Normal();
//	modifyCursor(1, false);
	int i, j;
	for (i = 0; i < 7; i++)
	{
		GoToXY(x3, y3 + 16 + i); // x3=0, y3=13
		for (j = 0; j < 53; j++) cout << " ";
	}
}

void HuongDanInDSMonHoc() //Bang Huong Dan In Danh Sach Mon Hoc
{
	DeleteSign();
	int t = 15;
	GoToXY(x3 + 17, y3 + t); cout << "HUONG DAN";
	GoToXY(x3, y3 + t + 1); cout << "Chon\t\t\tEnter";
	GoToXY(x3, y3 + t + 2); cout << "Qua trang\t\tMui ten trai phai";
	GoToXY(x3, y3 + t + 3); cout << "Thoat chuong trinh\tESC";

}
void DeleteHuongDanInDSMonHoc() //Xoa Bang Huong Dan In Bang Mon Hoc
{
	DeleteSign();
	Normal();
//	modifyCursor(1, false);
	int i, j;
	for (i = 0; i < 7; i++)
	{
		GoToXY(x3, y3 + 16 + i); // x3=0, y3=13
		for (j = 0; j < 53; j++) cout << " ";
	}
}

void HuongDanInDSSinhVien() //Bang Huong Dan In Danh Sach Sinh Vien
{
	DeleteSign();
	int t = 15;
	GoToXY(x3 + 17, y3 + t); cout << "HUONG DAN";
	GoToXY(x3, y3 + t + 1); cout << "Chon\t\t\tEnter";
	GoToXY(x3, y3 + t + 2); cout << "Qua trang\t\tMui ten trai phai";
	GoToXY(x3, y3 + t + 3); cout << "Thoat chuong trinh\tESC";

}
void DeleteHuongDanInDSSinhVien() //Xoa Bang Huong Dan In Bang Mon Hoc
{
	DeleteSign();
	Normal();
//	modifyCursor(1, false);
	int i, j;
	for (i = 0; i < 7; i++)
	{
		GoToXY(x3, y3 + 16 + i); // x3=0, y3=13
		for (j = 0; j < 53; j++) cout << " ";
	}
}


///////////////////////////////////////////////////////////// Ham Kiem Tra SV Dang Ki Mon Hoc//////////////////////
bool KiemTraSinhVienDangKyMonHoc(DSLTC dsltc, string maSV)
  {	
	for (int i=0; i < dsltc.n; i++) // Chay het lop tin chi 
	 {
		
		for (NodeDKLopTinChi* p = dsltc.dsLopTC[i]->DSDK; p!=NULL; p=p->pNext) // Duyet tung danh sach dang ki cua lop tin chi i
		{
			if (p->info.maSV==maSV && p->info.trangThai == conDangKi)
			{
				return 1;
			}
//			else if (p->info.maSV==conDangKi)
//			{
//				return 1;
//			}
		}
	}
	return 0;
}
////////////////////////////////////////

void InDSSV2(DSSinhVien &m, int x, int y, int j, double page) //In du lieu SV theo lop
{
	Normal();
	int kt, dem = -1;
	if(j * 15 > m.n) kt = m.n; //Vi tri ket thuc
	else kt = j * 15;
	for(int i = (j - 1) * 15; i < kt; i++)
	{
		dem++;
		GoToXY(x + 1, y + dem + 4); cout << m.DSSV[i].maSV;
		GoToXY(x + 15, y + dem + 4); cout << m.DSSV[i].ho;
		GoToXY(x + 36, y + dem + 4); cout << m.DSSV[i].ten;
		GoToXY(x + 46, y + dem + 4); cout << m.DSSV[i].phai;
		GoToXY(x + 53, y + dem + 4); cout << m.DSSV[i].soDT;
		
	}
	GoToXY(x + 30, y + 21); cout << "Trang " << j << "/" << page;
}
	
void InDSSV(DSSinhVien &m, int x, int y, int j, double page) //In du lieu SV nhap
{
	Normal();
	int kt, dem = -1;
	if(j * 15 > m.n) kt = m.n; //Vi tri ket thuc
	else kt = j * 15;
//	cout << "oooooooooooooooo";
	for(int i = (j - 1) * 15; i < kt; i++)
	{
		dem++;
		GoToXY(x + 1, y + dem + 4); cout << m.DSSV[i].maSV;
		GoToXY(x + 15, y + dem + 4); cout << m.DSSV[i].ho;
		GoToXY(x + 36, y + dem + 4); cout << m.DSSV[i].ten;
		GoToXY(x + 46, y + dem + 4); cout << m.DSSV[i].phai;
		GoToXY(x + 53, y + dem + 4); cout << m.DSSV[i].soDT;
		GoToXY(x + 66, y + dem + 4); cout << m.DSSV[i].maLop;
	}
	GoToXY(x + 30, y + 21); cout << "Trang " << j << "/" << page;
}

string MALOP(int x, int y)
{
	string temp = "";
	modifyCursor(1, true);
	Normal();
	BangThemSinhVien(x,y);
	GoToXY(x+1,y+2);
	cout << "NHAP MA LOP: ";
	char c = GetKey();
	while (c!=ESC && c!=Enter){
		if(c == Backspace)
		{
			if(temp.length() > 0)
			{
				temp= temp.substr(0, temp.length()-1);
				GoToXY(x + 14 + temp.length(), y + 2); cout << " ";
				GoToXY(x + 14 + temp.length(), y + 2);
			}		
		}
		else 
		{
			temp+=c;
			cout<<c;
		}
		c = GetKey();
	}
	if (c==ESC) {
		return "";
	}
	GoToXY(x+1,y+2);
	cout << "                                                    ";
	return temp;
}

bool kiemTraTrungMaSV(DSSinhVien dsSV, string maSV){
	for (int i=0; i<dsSV.n; i++)
		if (dsSV.DSSV[i].maSV==maSV) {
			return 1;
		}
  
	return 0;
}
////////////////////////////Cau c: Nhap Sinh Vien///////////////////////////

void ThemSinhVien(DSSinhVien &dsSV, int x, int y) //Them 1 SV // x=0,y=13
{
	modifyCursor(1, true);
	int n, vt = 0;
	string maSV="",ho="",ten="",phai="",soDT="", maLop="";
	char c;
	SinhVien temp; 
	temp.maSV = "";
	temp.ho = "";
	temp.ten = "";
	temp.phai = "";
	temp.soDT = "";
	temp.maLop = MALOP(x,y);
	ChuanHoaInHoa(temp.maLop);
	Normal();
	GoToXY(15 ,14); cout << "THEM SINH VIEN";
	BangThemSinhVien(x,y);
	string MenuLTC[6] = {"Ma Sinh Vien:",
						 "Ho:          ",
						 "Ten:         ",
						 "Phai:        ",
						 "SDT:   	   ",
						 "Ma Lop:      "};
	for(int i = 0; i < 6; i++) { GoToXY(x + 1, y + 2 + i); cout << MenuLTC[i]; }
	GoToXY(x+16, y+2+5); cout << temp.maLop;
	GoToXY(16,15);				
	do
	{
		c = GetKey();
		switch (c)
		{
			case Up: if(vt + 1 > 1) //Len dong tren
			{
				vt--;
				if(vt == 0) GoToXY(x + 16 + temp.maSV.length() , y + 2 + vt);
				else if(vt == 1) GoToXY(x + 16 + temp.ho.length() , y + 2 + vt);
				else if(vt == 2) GoToXY(x + 16 + temp.ten.length() , y + 2 + vt);
				else if(vt == 3) GoToXY(x + 16 + temp.phai.length(), y + 2 + vt);
				else if(vt == 4) GoToXY(x + 16 + temp.soDT.length(), y + 2 + vt);
			} break;
			case Enter: if(vt + 1 < 7) //Xuong dong
			{
				vt++;	
				if(vt == 0) GoToXY(x + 16 + temp.maSV.length(), y + 2 + vt);
				else if(vt == 1) GoToXY(x + 16 + temp.ho.length(), y + 2 + vt);
				else if(vt == 2) GoToXY(x + 16 + temp.ten.length(), y + 2 + vt);
				else if(vt == 3) GoToXY(x + 16 + temp.phai.length(), y + 2 + vt);
				else if(vt == 4) GoToXY(x + 16 + temp.soDT.length(), y + 2 + vt);

			} break;
			
			
			case Down: if(vt + 1 < 7) //Xuong dong
			{
				vt++;
				if(vt == 0) GoToXY(x + 16 + temp.maSV.length(), y + 2 + vt);
				else if(vt == 1) GoToXY(x + 16 + temp.ho.length(), y + 2 + vt);
				else if(vt == 2) GoToXY(x + 16 + temp.ten.length(), y + 2 + vt);
				else if(vt == 3) GoToXY(x + 16 + temp.phai.length(), y + 2 + vt);
				else if(vt == 4) GoToXY(x + 16 + temp.soDT.length(), y + 2 + vt);
			} break;
			case F2: //Luu du lieu
			{
			ChuanHoaString(temp.ho);
			ChuanHoaString(temp.ten);
			ChuanHoaString(temp.phai);
			ChuanHoaInHoa(temp.maLop);
			ChuanHoaInHoa(temp.maSV);
					
					if (temp.maSV.length() ==0 || temp.ho.length() ==0 || temp.ten.length() ==0 || temp.phai.length()==0 || temp.soDT.length()==0 || temp.maLop.length() ==0) 
					{
						GoToXY(x + 13, y + 12); cout << "Khong duoc bo trong";
						Sleep(1000);
						GoToXY(x + 13, y + 12); cout << "                                      ";
						GoToXY(x + 16 + temp.maSV.length(), y + 2);
						vt=0;

					}
					else if (kiemTraTrungMaSV(dsSV,temp.maSV)==1) {
						GoToXY(x + 13, y + 12); cout << "Ma sinh vien da ton tai";
						Sleep(1000);
						GoToXY(x + 13, y + 12); cout << "                                      ";
						GoToXY(x + 16 + temp.maSV.length(), y + 2);
						vt=0;
					} 
					else if (temp.phai.compare("Nam")!=0 && temp.phai.compare("Nu")!=0) {
						GoToXY(x + 13, y + 12); cout << "Phai chi duoc nhap Nam hoac Nu";
						Sleep(2000);
						GoToXY(x + 13, y + 12); cout << "                                      ";
						GoToXY(x + 16 + temp.phai.length(), y + 2 + 3);
						vt=3;
					}
					else if (temp.soDT.length() > 11 || temp.soDT.length()<10)  {
						GoToXY(x + 15, y + 12); cout << "SDT chi tu 10 den 11 so";							
						Sleep(2000);
						GoToXY(x + 15, y + 12); cout << "                                       ";
						GoToXY(x + 16 + temp.soDT.length(), y + 2 + 4);
						vt=4;
					}
					else 
					{
						dsSV.DSSV[dsSV.n].maSV = temp.maSV;
						dsSV.DSSV[dsSV.n].ho = temp.ho;
						dsSV.DSSV[dsSV.n].ten = temp.ten;
						dsSV.DSSV[dsSV.n].phai = temp.phai;
						dsSV.DSSV[dsSV.n].soDT = temp.soDT;
						dsSV.DSSV[dsSV.n].maLop = temp.maLop;
						dsSV.n++;					
						SaveSinhVien(dsSV);
						GoToXY(x + 15, y + 12); cout << "                                 ";
						GoToXY(x + 15, y + 12); cout << "Du lieu da duoc luu lai";
						Sleep(2500);
						GoToXY(x + 15, y + 12); cout << "                                 ";
						return;
					}
			break;
			}
				case ESC: //Thoat ra
			{
			ChuanHoaString(temp.ho);
			ChuanHoaString(temp.ten);
			ChuanHoaString(temp.phai);
			ChuanHoaInHoa(temp.maLop);
			ChuanHoaInHoa(temp.maSV);
			
				if(temp.maSV.length() ==0 || temp.ho.length() ==0 || temp.ten.length() ==0 || temp.phai.length()==0 || temp.soDT.length()==0 || temp.maLop.length() ==0
					|| (temp.phai.compare("Nam")!=0 && temp.phai.compare("Nu")!=0) || (temp.soDT.length()<10 || temp.soDT.length()>11)
					|| kiemTraTrungMaSV(dsSV,temp.maSV)==1)
				{
					GoToXY(x + 15, y + 12); cout << "                                 ";
					GoToXY(x + 15, y + 12); cout << "Du lieu nhap chua dung";
					Sleep(1000);
					GoToXY(x + 15, y + 13); cout << "                                 ";
					GoToXY(x + 15, y + 13); cout << "Nhan ESC neu ban van muon thoat";
					char kt = GetKey();
					if(kt == ESC) 
					{
						GoToXY(x + 15, y + 12); cout << "                                ";
						GoToXY(x + 15, y + 13); cout << "                                ";
						return;
					}
				}
				else
				{
					GoToXY(x + 15, y + 12); cout << "                                ";
					GoToXY(x + 15, y + 12); cout << "Ban co muon luu du lieu?";
					GoToXY(x + 15, y + 13); cout << "                                ";
					GoToXY(x + 15, y + 13); cout << "LUU (Y)\t KHONG LUU (N)";
					do
					{
						char kt = GetKey();
						if(kt == 'Y' || kt == 'y') 
						{
							dsSV.DSSV[dsSV.n].maSV = temp.maSV;
							dsSV.DSSV[dsSV.n].ho = temp.ho;
							dsSV.DSSV[dsSV.n].ten = temp.ten;
							dsSV.DSSV[dsSV.n].phai = temp.phai;
							dsSV.DSSV[dsSV.n].soDT = temp.soDT;
							dsSV.DSSV[dsSV.n].maLop = temp.maLop;
 
							dsSV.n++;
							SaveSinhVien(dsSV);
							GoToXY(x + 15, y + 12); cout << "                                 ";
							GoToXY(x + 15, y + 12); cout << "Du lieu da duoc luu lai";
							Sleep(2500);
							GoToXY(x + 15, y + 12); cout << "                                 ";
							return;
						}
						else if(kt == 'N' || kt == 'n') { return; }
					} while(1);
				}
				vt = 7;
				break;
			}
			default: switch(vt)
			{
				case 0: //Vi tri con tro o phan masv
				{	
					if(c == Backspace)
					{
						if(temp.maSV.length() > 0)
						{
							temp.maSV = temp.maSV.substr(0, temp.maSV.length()-1);
							GoToXY(x + 16 + temp.maSV.length(), y + 2 + vt); cout << " ";
							GoToXY(x + 16 + temp.maSV.length(), y + 2 + vt);
						}		
					}
					else if((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122)) // lay so, in hoa, in thuong
					{
						if(temp.maSV.length() < 10)
						{
							temp.maSV += c;
							cout << c;
						}
						else 
						{
							GoToXY(x + 15, y + 12); cout << "Ma SV chi toi da 10 ky tu!";							
							Sleep(1000);
							GoToXY(x + 15, y + 12); cout << "                               ";
							GoToXY(x + 16 + temp.maSV.length(), y + 2 + vt);
						}
					}
				} break;
				case 1: //Vi tri con tro o phan ho
				{
					if(c == Backspace)
					{
						if(temp.ho.length() > 0)
						{
						temp.ho= temp.ho.substr(0, temp.ho.length()-1);
						GoToXY(x + 16 + temp.ho.length(), y + 2 + vt); cout << " ";
						GoToXY(x + 16 + temp.ho.length(), y + 2 + vt);
						}		
					}
					else if((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || c==32)
					{	

						temp.ho += c;
						cout << c;
					}
				} break;
				case 2: //Vi tri con tro o phan ten
				{
					if(c == Backspace)
					{
						if(temp.ten.length() > 0)
						{
						temp.ten= temp.ten.substr(0, temp.ten.length()-1);
						GoToXY(x + 16 + temp.ten.length(), y + 2 + vt); cout << " ";
						GoToXY(x + 16 + temp.ten.length(), y + 2 + vt);
						}		
					}
					else if((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || c==32)
					{	

						temp.ten += c;
						cout << c;
					}
				} break;
				case 3: //Vi tri con tro o phan phai
				{
					if(c == Backspace)
					{
						if(temp.phai.length() > 0)
						{
						temp.phai= temp.phai.substr(0, temp.phai.length()-1);
						GoToXY(x + 16 + temp.phai.length(), y + 2 + vt); cout << " ";
						GoToXY(x + 16 + temp.phai.length(), y + 2 + vt);
						}		
					}
					else if((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
					{	

						temp.phai += c;
						cout << c;
					}
				} break;
				case 4: //Vi tri con tro o phan sdt
				{
						if(c == Backspace)
						{
							if(temp.soDT.length() > 0)
							{
								temp.soDT= temp.soDT.substr(0, temp.soDT.length()-1);
								GoToXY(x + 16 + temp.soDT.length(), y + 2 + vt); cout << " ";
								GoToXY(x + 16 + temp.soDT.length(), y + 2 + vt);
							}		
						}
						else if(c >= 48 && c <= 57) //Chi lay so
							{
								temp.soDT += c;
								cout << c;
							}
				} break;
				case 5: //Vi tri con tro o phan maLop
				{
					if(c == Backspace)
					{
						if(temp.maLop.length() > 0)
						{
							temp.maLop= temp.maLop.substr(0, temp.maLop.length()-1);
							GoToXY(x + 16 + temp.maLop.length(), y + 2 + vt); cout << " ";
							GoToXY(x + 16 + temp.maLop.length(), y + 2 + vt);
						}
					}
					else if((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
					{
						temp.maLop += c;
						cout << c;
					}
				} 
				break;
			}
		}
	} while(1);
}

void XoaSinhVien(DSSinhVien &m, int x, int y, int l, DSLTC dsltc)
  {
  	Normal();
  	if (KiemTraSinhVienDangKyMonHoc(dsltc, m.DSSV[l].maSV)==1){
  		GoToXY(x + 10, y + 7); cout << "Khong duoc xoa sinh vien da dang ky mon hoc.";
  		Sleep(2500);
  		return;
	}
  	GoToXY(x + 15, y + 7); cout << "Ban co muon xoa sinh vien nay khong?";
		GoToXY(x + 15, y + 8); cout << "XOA (Y)\t KHONG XOA (N)";
		do
		{
			char c = GetKey();
			if(c == 'Y' || c == 'y')
			{
				
				for(int i = l; i < m.n - 1; i++) { m.DSSV[i] = m.DSSV[i + 1]; }
				m.n--;
				SaveSinhVien (m);
				GoToXY(x + 15, y + 7); cout << "                                             ";
				GoToXY(x + 15, y + 8); cout << "                                           ";
				GoToXY(x + 15, y + 7); cout << "Da xoa sinh vien thanh cong!";
				Sleep(2500);
				return;
			}
			else if(c == 'N' || c == 'n') { return; }
		} while(1);
  	
 
  	
  }
  
void HieuChinhDanhSachSinhVien(DSSinhVien &dsSinhVien, int x, int y, int l) // Hieu Chinh DS Sinh Vien
{
	modifyCursor(1, true); 
	string maSV="",ho="",ten="",phai="",soDT="", maLop="";
	int vt = 0;
	char c;
	SinhVien temp;    //Xai tam de them vao mang sau khi nhap xong
	temp.maSV = dsSinhVien.DSSV[l].maSV;
	temp.ho = dsSinhVien.DSSV[l].ho;
	temp.ten = dsSinhVien.DSSV[l].ten;
	temp.phai = dsSinhVien.DSSV[l].phai;
	temp.soDT = dsSinhVien.DSSV[l].soDT;
	temp.maLop = dsSinhVien.DSSV[l].maLop;
	maSV = temp.maSV.length();
	ho = temp.ho.length();
	ten = temp.ten.length();
	phai = temp.phai.length();
	soDT = temp.soDT.length();
	maLop = temp.maLop.length();

	Normal();
	GoToXY(13, 14); cout << "HIEU CHINH DANH SACH SINH VIEN";
	BangThemSinhVien(x,y);	
	string MenuDSSV[6] = {"Ma Sinh Vien:",
						"Ho:           ",
						"Ten:       	",
						"Phai:      	",
						"SDT: 			",
						"Ma Lop:    	"};
					
	for(int i = 0; i < 6; i++) { GoToXY(x + 1, y + 2 + i); cout << MenuDSSV[i]; }
	GoToXY(x + 16, y + 2); cout << temp.maSV;							
	GoToXY(x + 16, y + 3); cout << temp.ho;							
	GoToXY(x + 16, y + 4); cout << temp.ten;							
	GoToXY(x + 16, y + 5); cout << temp.phai;							
	GoToXY(x + 16, y + 6); cout << temp.soDT;							
	GoToXY(x + 16, y + 7); cout << temp.maLop;							

	GoToXY(16,15);		
	do
	{
		c = GetKey();
		switch (c)
		{
			case Up: if(vt + 1 > 1) //Len dong tren
			{
				vt--;
				if(vt == 0) GoToXY(x + 16 + temp.maSV.length() , y + 2 + vt);
				else if(vt == 1) GoToXY(x + 16 + temp.ho.length() , y + 2 + vt);
				else if(vt == 2) GoToXY(x + 16 + temp.ten.length() , y + 2 + vt);
				else if(vt == 3) GoToXY(x + 16 + temp.phai.length(), y + 2 + vt);
				else if(vt == 4) GoToXY(x + 16 + temp.soDT.length(), y + 2 + vt);
				else if(vt == 5) GoToXY(x + 16 + temp.maLop.length() , y + 2 + vt);
			} break;
			case Enter: if(vt + 1 < 7) //Xuong dong
			{
				vt++;	
				if(vt == 0) GoToXY(x + 16 + temp.maSV.length(), y + 2 + vt);
				else if(vt == 1) GoToXY(x + 16 + temp.ho.length(), y + 2 + vt);
				else if(vt == 2) GoToXY(x + 16 + temp.ten.length(), y + 2 + vt);
				else if(vt == 3) GoToXY(x + 16 + temp.phai.length(), y + 2 + vt);
				else if(vt == 4) GoToXY(x + 16 + temp.soDT.length(), y + 2 + vt);
				else if(vt == 5) GoToXY(x + 16 + temp.maLop.length(), y + 2 + vt);

			} break;
			
			
			case Down: if(vt + 1 < 7) //Xuong dong
			{
				vt++;
				if(vt == 0) GoToXY(x + 16 + temp.maSV.length(), y + 2 + vt);
				else if(vt == 1) GoToXY(x + 16 + temp.ho.length(), y + 2 + vt);
				else if(vt == 2) GoToXY(x + 16 + temp.ten.length(), y + 2 + vt);
				else if(vt == 3) GoToXY(x + 16 + temp.phai.length(), y + 2 + vt);
				else if(vt == 4) GoToXY(x + 16 + temp.soDT.length(), y + 2 + vt);
				else if(vt == 5) GoToXY(x + 16 + temp.maLop.length(), y + 2 + vt);
			} break;
			case F2: //Luu du lieu
			{
				ChuanHoaString(temp.ho);
				ChuanHoaString(temp.ten);
				ChuanHoaString(temp.phai);
				ChuanHoaInHoa(temp.maLop);
				ChuanHoaInHoa(temp.maSV);
					if (temp.maSV.length() ==0 || temp.ho.length() ==0 || temp.ten.length() ==0 || temp.phai.length()==0 || temp.soDT.length()==0 || temp.maLop.length() ==0) 
					{
						GoToXY(x + 13, y + 12); cout << "Khong duoc bo trong";
						Sleep(1000);
						GoToXY(x + 13, y + 12); cout << "                                      ";
						GoToXY(x + 16 + temp.maSV.length(), y + 2);
						vt=0;

					}
					else if (kiemTraTrungMaSV(dsSinhVien,temp.maSV)==1) {
						GoToXY(x + 13, y + 12); cout << "Ma sinh vien da ton tai";
						Sleep(1000);
						GoToXY(x + 13, y + 12); cout << "                                      ";
						GoToXY(x + 16 + temp.maSV.length(), y + 2);
						vt=0;
					} 
					else if (temp.phai.compare("Nam")!=0 && temp.phai.compare("Nu")!=0) {
						GoToXY(x + 13, y + 12); cout << "Phai chi duoc nhap Nam hoac Nu";
						Sleep(2000);
						GoToXY(x + 13, y + 12); cout << "                                      ";
						GoToXY(x + 16 + temp.phai.length(), y + 2 + 3);
						vt=3;
					}
					else if (temp.soDT.length() > 11 || temp.soDT.length()<10)  {
						GoToXY(x + 15, y + 12); cout << "SDT chi tu 10 den 11 so";							
						Sleep(2000);
						GoToXY(x + 15, y + 12); cout << "                                       ";
						GoToXY(x + 16 + temp.soDT.length(), y + 2 + 4);
						vt=4;
					}
					else 
					{
						dsSinhVien.DSSV[l].maSV = temp.maSV;
						dsSinhVien.DSSV[l].ho = temp.ho;
						dsSinhVien.DSSV[l].ten = temp.ten;
						dsSinhVien.DSSV[l].phai = temp.phai;
						dsSinhVien.DSSV[l].soDT = temp.soDT;
						dsSinhVien.DSSV[l].maLop = temp.maLop;
						SaveSinhVien(dsSinhVien);
						GoToXY(x + 15, y + 12); cout << "                                 ";
						GoToXY(x + 15, y + 12); cout << "Du lieu da duoc luu lai";
						Sleep(2500);
						GoToXY(x + 15, y + 12); cout << "                                 ";
						return;
					}
				break;
			}
			case ESC: //Thoat ra
			{
		
				if(temp.maSV.length() ==0 || temp.ho.length() ==0 || temp.ten.length() ==0 || temp.phai.length()==0 || temp.soDT.length()==0 || temp.maLop.length() ==0
					|| (temp.phai.compare("Nam")!=0 && temp.phai.compare("Nu")!=0) || (temp.soDT.length()<10 || temp.soDT.length()>11)
					|| kiemTraTrungMaSV(dsSinhVien,temp.maSV)==1)
				{
					GoToXY(x + 15, y + 12); cout << "                                 ";
					GoToXY(x + 15, y + 12); cout << "Du lieu nhap chua dung";
					GoToXY(x + 15, y + 13); cout << "                                 ";
					GoToXY(x + 15, y + 13); cout << "Nhan ESC neu ban van muon thoat";
					char kt = GetKey();
					if(kt == ESC) 
					{
						GoToXY(x + 15, y + 12); cout << "                                ";
						GoToXY(x + 15, y + 13); cout << "                                ";
						return;
					}
				}
				else
				{
					GoToXY(x + 15, y + 12); cout << "                                ";
					GoToXY(x + 15, y + 12); cout << "Ban co muon luu du lieu?";
					GoToXY(x + 15, y + 13); cout << "                                ";
					GoToXY(x + 15, y + 13); cout << "LUU (Y)\t KHONG LUU (N)";
					do
					{
						char kt = GetKey();
						if(kt == 'Y' || kt == 'y') 
						{
							dsSinhVien.DSSV[l].maSV = temp.maSV;
							dsSinhVien.DSSV[l].ho = temp.ho;
							dsSinhVien.DSSV[l].ten = temp.ten;
							dsSinhVien.DSSV[l].phai = temp.phai;
							dsSinhVien.DSSV[l].soDT = temp.soDT;
							dsSinhVien.DSSV[l].maLop = temp.maLop;
 
							SaveSinhVien(dsSinhVien);
							GoToXY(x + 15, y + 12); cout << "                                 ";
							GoToXY(x + 15, y + 12); cout << "Du lieu da duoc luu lai";
							Sleep(2500);
							GoToXY(x + 15, y + 12); cout << "                                 ";
							return;
						}
						else if(kt == 'N' || kt == 'n') { return; }
					} while(1);
				}
				vt = 7;
				break;
			}
			default: switch(vt)
			{
				case 0: //Vi tri con tro o phan masv
				{	
					if(c == Backspace)
					{
						if(temp.maSV.length() > 0)
						{
							temp.maSV = temp.maSV.substr(0, temp.maSV.length()-1);
							GoToXY(x + 16 + temp.maSV.length(), y + 2 + vt); cout << " ";
							GoToXY(x + 16 + temp.maSV.length(), y + 2 + vt);
						}		
					}
					else if((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122)) // lay so, in hoa, in thuong
					{
						if(temp.maSV.length() < 10)
						{
							temp.maSV += c;
							cout << c;
						}
						else 
						{
							GoToXY(x + 15, y + 12); cout << "Ma SV chi toi da 10 ky tu!";							
							Sleep(1000);
							GoToXY(x + 15, y + 12); cout << "                               ";
							GoToXY(x + 16 + temp.maSV.length(), y + 2 + vt);
						}
					}
				} break;
  				case 2: //Vi tri con tro o phan ten
				{
					if(c == Backspace)
					{
						if(temp.ten.length() > 0)
						{
						temp.ten= temp.ten.substr(0, temp.ten.length()-1);
						GoToXY(x + 16 + temp.ten.length(), y + 2 + vt); cout << " ";
						GoToXY(x + 16 + temp.ten.length(), y + 2 + vt);
						}		
					}
					else if((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || c==32)
					{	

						temp.ten += c;
						cout << c;
					}
				} break;
				case 3: //Vi tri con tro o phan phai
				{
					if(c == Backspace)
					{
						if(temp.phai.length() > 0)
						{
						temp.phai= temp.phai.substr(0, temp.phai.length()-1);
						GoToXY(x + 16 + temp.phai.length(), y + 2 + vt); cout << " ";
						GoToXY(x + 16 + temp.phai.length(), y + 2 + vt);
						}		
					}
					else if((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
					{	

						temp.phai += c;
						cout << c;
					}
				} break;
				case 4: //Vi tri con tro o phan sdt
				{
						if(c == Backspace)
						{
							if(temp.soDT.length() > 0)
							{
								temp.soDT= temp.soDT.substr(0, temp.soDT.length()-1);
								GoToXY(x + 16 + temp.soDT.length(), y + 2 + vt); cout << " ";
								GoToXY(x + 16 + temp.soDT.length(), y + 2 + vt);
							}		
						}
						else if(c >= 48 && c <= 57) //Chi lay so
						{
							temp.soDT += c;
							cout << c;
						}
				} break;
				case 5: //Vi tri con tro o phan maLop
				{
					if(c == Backspace)
					{
						if(temp.maLop.length() > 0)
						{
							temp.maLop= temp.maLop.substr(0, temp.maLop.length()-1);
							GoToXY(x + 16 + temp.maLop.length(), y + 2 + vt); cout << " ";
							GoToXY(x + 16 + temp.maLop.length(), y + 2 + vt);
						}
					}
					else if((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
					{
						temp.maLop += c;
						cout << c;
					}
				} 
				break;
			}
		}
	} while(1);
}
void CapNhatDSSV(DSSinhVien &m, int x, int y, DSLTC dsltc)// x= 60,y=15
{
	int sl, i = 1, muiten = 0;
	float k = 0;
	sl = k = m.n; //So luong lop tc
	k = ceil(k/ 15); //So trang
	InDSSV( m,x, y, i, k);
	modifyCursor(1, false);
	GoToXY(x - 3, y + 4);
	MuiTen();
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
				XoaBangSinhVien(x , y);
				BangSinhVien(x, y, 15);
				InDSSV( m, x, y, ++i, k);
				if(i == k && sl % 15 != 0 && muiten > sl % 15 - 1)
				{
					GoToXY(x - 3, y + 4 + muiten); cout << "   ";
					muiten = sl - ((i - 1) * 15) - 1;
					GoToXY(x - 3, y + 4 + muiten); MuiTen();
				}
			} break;
			case Left: if(i > 1) //Qua trang
			{
				XoaBangSinhVien(x , y);
				BangSinhVien(x, y, 15);
				InDSSV( m, x, y, --i, k);
			} break;
			case Insert: //Them Sinh Vien
			{
//				cout << "llllllllllllllllllll";
				ThemSinhVien(m, x-60,y-2 );
				DeleteGocTrai();
				k = 0;
				sl = k = m.n;
				k = ceil(k/ 15);
				XoaBangSinhVien(x , y);
				BangSinhVien(x, y, 15);
				InDSSV(m, x, y, i, k);
				modifyCursor(1, false);
			} break;
			case Delete: //Xoa SV
			{
				XoaSinhVien(m, 0, 13, (i - 1) * 15 + muiten, dsltc);
				DeleteGocTrai();
//				loadSinhVien(m);
				sl = m.n;
				XoaBangSinhVien(x , y);
				InDSSV( m, x, y, i, k);
				if( m.n % 15 == 0)
				{
					XoaBangSinhVien(x ,y);
					InDSSV( m, x, y, --i, --k);
				}
				else if(i == k && m.n % 15 != 0 && muiten > m.n % 15 - 1)
				{
					GoToXY(x-3, y + 4 + muiten); cout << "   ";
					muiten = m.n - ((i - 1) * 15) - 1;
//					cout << muiten;
					GoToXY(x-3, y + 4 + muiten); MuiTen();
				}
				
			} break;
			case Enter: //Hieu Chinh DS Sinh Vien
			{
				HieuChinhDanhSachSinhVien(m, 0, 13, (i - 1) * 15 + muiten);
				modifyCursor(1, false);
				DeleteGocTrai();
				XoaBangSinhVien(x ,y);
				InDSSV( m, x, y, i, k);
			} break;
			case ESC: return;	
		}
	} while(1);
}

///////////////// Cau D: In DSSV cua 1 lop (dua vao ma lop) theo thu tu tang dan ten + ho /////////

void SapXepTheoTenHo(DSSinhVien m) // Sap Xep theo thu tu SV tang dan theo ho ten
{
	int x = 60, y = 15;
	int i, j;
	SinhVien temp;
	DeleteGocTrai(); 
	for(i = 0; i < m.n; i++)
	{	
		for (j = i + 1; j < m.n; j++)
		{
			if(m.DSSV[i].ten > m.DSSV[j].ten)
			{
				temp = m.DSSV[i];
				m.DSSV[i]=m.DSSV[j];
				m.DSSV[j]=temp;
			}
			else if(m.DSSV[i].ten == m.DSSV[j].ten)
			{
				if(m.DSSV[i].ho > m.DSSV[j].ho)
				{
				    temp = m.DSSV[i];
				    m.DSSV[i] = m.DSSV[j];
				    m.DSSV[j] = temp;
				}

			}
		}
	}	
    double k = m.n;
    i = 1;
    k = ceil(k/15);   // bang=15 , k=1
//	cout << k;	
	XoaBangSinhVien(x , y);
	BangSinhVien2(x, y, 15);
	InDSSV2( m, x, y, i, k);			
    do
    {
    	
    	char kytu = GetKey();
    	switch (kytu)
    	{
    		case Right: if(i < k) // qua trang
    		{
    			XoaBangSinhVien(x , y);
				InDSSV2( m, x, y, ++i, k);

    			
    		} break;
    		case Left: if(i > 1) // qua trang
    		{
    			XoaBangSinhVien(x , y);
				InDSSV2( m, x, y, ++i, k);
    	
    		} break;
    		case ESC: return;

    	}
    } while(1);
}

void chayCT(DSSinhVien &m)
{
	while (1) {
		string s = MALOP(0, 13);
		if (s=="")
		{
			return;
		}
		ChuanHoaInHoa(s);
		DSSinhVien x;
		int dem = 0, kt = 0;
		for (int i = 0; i < m.n; i++)
		{
	
			if (m.DSSV[i].maLop.compare(s) == 0)
			{			
				x.DSSV[dem] = m.DSSV[i];
				dem++;
				kt++;
			}
			else if(i == m.n - 1 && kt == 0 ) 
			{
				GoToXY( 13, 25); cout << "Khong tim thay ma lop!";
				Sleep(2000);
				GoToXY(13, 25); cout << "                       ";
				GoToXY(1 + s.length(), 15); 
			}
		}
		x.n = dem;
		if (kt != 0)
		{
			GoToXY(60 + 18, 14); cout << "DANH SACH SINH VIEN LOP "<<s;
			SapXepTheoTenHo(x);
		}
	}
		


}

////////////////////// Câu F: In danh sach mon hoc tang dan theo ten //////////////

void TreeToMang(MHPTR p, MHPTR *m, int &dem) // Chuyen cay nhi phan thanh mang
{
	if(p != NULL)
	{
		TreeToMang(p->pLeft, m, dem);
		m[++dem] = p;
		TreeToMang(p->pRight, m, dem);
	}
}

void DSMonHocMang(MHPTR *m, int x, int y, int i, int k, int dem)  // In Danh Sach Mon Hoc Dua Tren Mang
{
	int u = 0;
	if(i * 15 < dem) dem = i * 15; // kt -> ket thuc: bien dung de j chay toi phan tu cuoi cua Mang
	for(int j = ((i-1) * 15); j < dem; j++ )
	{
		GoToXY(x - 7, y + 7 + u); cout << m[j]->info.maMH;
		GoToXY(x + 6, y + 7 + u); cout << m[j]->info.tenMH;
		GoToXY(x + 36, y + 7 + u); cout << m[j]->info.STCLT;
		GoToXY(x + 44, y + 7 + u); cout << m[j]->info.STCTH;
		u++;
	}
	GoToXY(x + 16, y + 25); cout<< "Trang " << i << "/" <<k;
}

void  TenMonHocTangDan(MHPTR root, int x, int y)  // Sap Xep Thu Tu Mon Hoc Tang Dan
{
	MHPTR m[MAXMH];
	int i, j, dem = -1;
	MHPTR temp;
	TreeToMang(root, m, dem);
	dem++;
	for (i = 0; i < dem; i++)
	{
		for(j = i + 1; j < dem; j++)
		{
			if(m[i]->info.tenMH > m[j]->info.tenMH)
			{
				temp = m[i];
				m[i] = m[j];
				m[j] = temp;
			}
		}
	}
    double k = dem;
    i = 1;
    k = ceil(k/15);
    DSMonHocMang(m, x, y, i, k, dem);
    do
    {
    	char kytu = GetKey();
    	switch (kytu)
    	{
    		case Right: if(i < k) // qua trang
    		{
    			XoaBangMonHoc(x - 8, y + 3);
    			DSMonHocMang(m, x, y, ++i, k, dem);
    		} break;
    		case Left: if(i > 1) // qua trang
    		{
    			XoaBangMonHoc(x - 8, y + 3);
    			DSMonHocMang(m, x, y, --i, k, dem);
    		} break;
    		case ESC: return;
    	}
    } while(1);
}


//////////////// Câu J: In bang diem mon hoc cua mot lop tin chi ////////////////
void InBangDiemMonHoc(DSLTC dsLopTinChi, DSSinhVien &dsSinhVien, DKLTCPTR p, int t, float page, lopTinChi temp) //In du lieu SVDK vao bang, (60, 15) toa do, j trang hien tai, i chi so loptc
{
	Normal();
	int x = 80, y = 15;
	int kt, dem = -1, sv, i, sldk, k;
	i = Search_infoLTC(dsLopTinChi, temp); // tim lop tin chi thu i co nh, hk, nhom, mamh
	sldk = dsLopTinChi.dsLopTC[i]->SLDK;
	if( t * 15 > sldk) kt = sldk; // vtri ket thuc
	else kt = t * 15;
	k = (t - 1) * 15;
	do
	{
		if (p->info.trangThai == conDangKi)
		{
		dem++;
		GoToXY(x + 3, y + dem + 4); cout << p->info.maSV; // p chay tu dau
		sv = Search_infoSV(dsSinhVien, p->info.maSV);  // tm ma sv
		GoToXY(x + 18, y + dem + 4); cout << dsSinhVien.DSSV[sv].ho << " "
											<< dsSinhVien.DSSV[sv].ten;	
		GoToXY(x + 53, y + dem + 4); cout <<p->info.diem;
		k++;
		}															 
		p = p->pNext;	
		
	} while(p != NULL && k < kt);
	GoToXY(60 + 43, 15 + 20); cout << "Trang " << t << "/" << page;		
}
void NhapThongTin(DSLTC &dsLopTinChi, MHPTR root, DKLTCPTR p, DSSinhVien dsSinhVien, int x, int y) //Nhap nk, hk, nhom, mamh dem tim diem
{
	modifyCursor(1, true);
	int n, vt = 0, mamh = 0, nienkhoa = 0, hocki = 0, nhom = 0;
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
						BangSVDKNhapDiem( 80,15,15);
						int t = 1,  sl; // trang hien tai
						float page = 0;
						sl = dsLopTinChi.dsLopTC[i]->SLDK;							
						page = sl;
						page = ceil(page/15);
						p = dsLopTinChi.dsLopTC[i]->DSDK;
																		
						XoaBangSVDKNhapDiem(80,15);
						InBangDiemMonHoc(dsLopTinChi, dsSinhVien, p, t, page, temp);	
												
					do
					{				
					char z;
					z = GetKey();	
					switch (z)
					{	
						
						case Right: if(t < page) //Qua trang
						{
							XoaBangSVDKNhapDiem(80,15);					
							InBangDiemMonHoc(dsLopTinChi, dsSinhVien, Search_infoDSDK(dsLopTinChi, p, t, i), ++t, page, temp);
							
						} break;
						case Left: if(t > 1) //Qua trang
						{
							XoaBangSVDKNhapDiem(80,15);	
							p = dsLopTinChi.dsLopTC[i]->DSDK;				
							InBangDiemMonHoc(dsLopTinChi, dsSinhVien, p, --t, page, temp);
							
						} break;
						case ESC: break;
						
					}	
					if(z == ESC)
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
			} break;
			case ESC: 
			{
				DeleteScreen(); 
				DeleteGocTrai();
				DeleteSign();
				return;
			}
			case F1:
			{
				
				BangMonHoc(77, 15, 15);
				TenMonHocTangDan(root, 87, 12);
				if(vt == 0) GoToXY(x + 16 + nienkhoa, y + 3 + vt);
				else if(vt == 1) GoToXY(x + 16 + hocki, y + 3 + vt);
				else if(vt == 2) GoToXY(x + 16 + nhom, y + 3 + vt);
				else if(vt == 3) GoToXY(x + 16 + mamh, y + 3 + vt);
				break;
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
						temp.nienKhoa += c;
						nienkhoa++;
						cout << c;
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




