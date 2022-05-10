//CAUA
void DanhSachLTC(DSLTC m, MHPTR root)
{	
	DeleteSign();	
	CapNhatDSLTC( m, root, 64, 14);
}
//CAUB
void DanhSachSVDK(DSLTC dsLopTinChi, DSSinhVien dsSinhVien, DKLTCPTR dkLopTinChi, MHPTR root)
{
	DeleteSign();
	HuongDanSVDK();
	NhapThamSoSVDK(dsLopTinChi, root, dkLopTinChi, dsSinhVien, 0, 13);
}
//CAUE
void DanhsachMH(MHPTR root, DSLTC dsLopTinChi)
{
	DeleteSign();
	HuongDanMonHoc();
//	ThemMonHoc(root, 0, 13);
	BangMonHoc(77, 15, 15);
	CapNhatDSMH(root, dsLopTinChi, 77, 15);
}
//CAU
// ve cot da dk, neu nhan lan mot chua co ai dk-> dk- tb, co dk -> do coi dki chuwa> chuwa>dk->tb; dk r>huy dk->thong bao
void DangKiLTC(DSSinhVien dsSinhVien, DSLTC dsLopTinChi, MHPTR root)
{
	DeleteSign();
//	HuongDanNhapMSV();
	NhapThamSoMASV(dsSinhVien, dsLopTinChi, root, 65, 14);
//	NhapThamSoNKHK(dsLopTinChi, root, x, y); 
}
//CAU
void DsLTCKoDuDK(DSLTC dsLopTinChi, MHPTR root)
{
	DeleteSign();
	NhapNKHKKoDuDK(dsLopTinChi, root, 65, 14);//65,14
}
//CAU
void NhapDiem(DSLTC dsLopTinChi, MHPTR root, DSSinhVien dsSinhVien, DKLTCPTR dkLopTinChi)
{
	DeleteSign();
	NhapDiemSV( dsLopTinChi, root, dkLopTinChi, dsSinhVien, 0, 13);
}
