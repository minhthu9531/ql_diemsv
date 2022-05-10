#include "Library.h"
#include "CTDL.h"
#include "DocFile.h"
#include "LuuFile.h"
#include "GiaoDien.h"
#include "ThangLib.h"
#include "ThangMain.h"
#include "ThuLib.h"
#include "ThuMain.h"


void LRN(MHPTR root)   // Xoa Cay Nhi Phan ---> DS Mon Hoc	
{
	if (root != NULL)
	{
		LRN(root->pLeft);
		LRN(root->pRight);
		delete root;
	}
}

void CleardkLopTinChi(DKLTCPTR &dkLopTinChi) // Xoa Danh Sach Lien Ket Don ---> DS Dang Ki Lop Tin Chi
{
    DKLTCPTR tmp = dkLopTinChi;
    while(tmp!=NULL)
	{
       DKLTCPTR tmpDel = tmp;
       tmp=tmp->pNext;
       delete tmpDel;
    }
}

void ClearLTC(DSLTC &dsLopTinChi)  // Xoa Mang Con tro ---> Lop Tin Chi
{
	for(int i = 0; i < dsLopTinChi.n; i++){
		
		CleardkLopTinChi(dsLopTinChi.dsLopTC[i]->DSDK);
		
		delete dsLopTinChi.dsLopTC[i];
	}
}
void DocFile(MHPTR &root, DSSinhVien &dsSinhVien, DSLTC &dsLopTinChi)
{
	loadMonHoc(root);	
//	cout << 1;	
	loadLopTinChi(dsLopTinChi);	
//	cout << 2;	
	loadDangKiLopTC(dsLopTinChi);
//	cout << 3;
	loadSinhVien(dsSinhVien);
//	cout << 4;
}
void ClearAll(DSLTC &dsLopTinChi,DKLTCPTR &dkLopTinChi, MHPTR &root)
{
	LRN(root);
	CleardkLopTinChi(dkLopTinChi);
	ClearLTC(dsLopTinChi);
}
void chayChuongTrinh(DSLTC &dsLopTinChi, MHPTR &root, DSSinhVien &dsSinhVien, DKLTCPTR &dkLopTinChi){
	int choose = 0;
	do
	{
		system("cls");
		Outline();
		Title();
		Sign();
		choose = Menu();
		Normal();
		switch (choose)
		{
			case 1: DanhSachLTC( dsLopTinChi, root); break;
			case 2: DanhSachSVDK( dsLopTinChi, dsSinhVien, dkLopTinChi, root); break;
			case 3: DanhSachSV(dsSinhVien, dsLopTinChi); break;
			case 4: InDanhSachSinhVien(dsSinhVien); break;
			case 5: DanhsachMH( root, dsLopTinChi); break;
			case 6: InDanhSachMonHoc(root); break;
			case 7: DangKiLTC( dsSinhVien,dsLopTinChi, root); break;
			case 8: DsLTCKoDuDK(dsLopTinChi, root); break;
			case 9: NhapDiem( dsLopTinChi, root, dsSinhVien, dkLopTinChi); break;
			case 10: InDanhSachDiem( dsLopTinChi, root, dsSinhVien, dkLopTinChi); break;
		}
//		system ("Pause");
		Normal();
	} while (1);
}

int main()
{	
	Setup();
	DSLTC dsLopTinChi;
	dsLopTinChi.n = 0;
	DSSinhVien dsSinhVien;
	dsSinhVien.n = 0;
	MHPTR root = NULL;
	DKLTCPTR dkLopTinChi;
	DocFile(root, dsSinhVien, dsLopTinChi);
	chayChuongTrinh(dsLopTinChi, root, dsSinhVien, dkLopTinChi);	
	ClearAll(dsLopTinChi, dkLopTinChi, root);

	return 0;
}
