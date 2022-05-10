//#pragma once

void DanhSachSV(DSSinhVien &m, DSLTC dsltc)
{	
//	loadSinhVien(m);
	HuongDanSinhVien();
	BangSinhVien(60, 15, 15);
	CapNhatDSSV(m, 60, 15, dsltc);
}

/////// Câu D ///////////////
void InDanhSachSinhVien(DSSinhVien &m)  //// In DSSV tan dan theo ten ho
{
//	DeleteScreen();
    HuongDanInDSSinhVien();
    chayCT(m);
}

////////// Câu F ///////////
void InDanhSachMonHoc(MHPTR root) ////In danh sach mon hoc tang dan theo ten
{
//	DeleteScreen();
	HuongDanInDSMonHoc();
	GoToXY(60 + 24, 14); cout << "DANH SACH MON HOC";
	BangMonHoc(65, 15, 15);
	TenMonHocTangDan(root, 75, 12);
}

//////////// Cau J ///////////////////
void InDanhSachDiem(DSLTC dsLopTinChi, MHPTR root, DSSinhVien dsSinhVien, DKLTCPTR dkLopTinChi)
{

	HuongDanInDiem();
	NhapThongTin(dsLopTinChi, root, dkLopTinChi, dsSinhVien, 0, 13);	
}
