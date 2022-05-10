//Khai bao du lieu
const int Up = -72, Down = -80, Left = -75, Right = -77, Enter = 13, ESC = 27, Delete = -83, F1 = -59, F2 = -60, F3 = -61, Space = 32, Backspace = 8, Insert = -82;
const int MAXLOPTC = 1000;
const int MAXSV = 5000;
const int MAXMH = 1000;
int nLTCDK,nDK,nMH;
int MALTC[MAXLOPTC];

//---------------------------------------------------------------------------------------------------------------------------------------------

// ==========================KHAI BAO CAU TRUC==============================

// Danh Sach Sinh Vien: Danh Sach Tuyen Tinh
struct SinhVien
{
	string maSV;
	string ho;
	string ten;
	string phai;
	string soDT;
	string maLop;
};

struct DSSinhVien
{
	int n;
	SinhVien DSSV[MAXSV];
};

//Danh Sach Mon Hoc: Cay nhi phan tim kiem
struct MonHoc
{
	string maMH;
	string tenMH;
	int STCLT;
	int STCTH;
};

struct NodeMonHoc
{
	MonHoc info;
	NodeMonHoc* pLeft, * pRight;
};
typedef struct NodeMonHoc* MHPTR;


//typedef struct NodeDSMonHoc* Node;

//Danh Sach Dang Ki Lop Tin Chi: DS Lien Ket Don
enum TrangThaiDKLTC {huyDangKi, conDangKi};
struct dkLopTinChi
{
	string maSV;
	TrangThaiDKLTC trangThai; // 0 huy dang ki   1 con dang ki
	float diem;
};

struct NodeDKLopTinChi
{
	dkLopTinChi info;
	NodeDKLopTinChi* pNext;
};
typedef struct NodeDKLopTinChi *DKLTCPTR; 

//Danh Sach Lop Tin Chi: DS Tuyen Tinh La Mot Mang Con Tro
enum TrangThaiLTC {lopBiHuy, lopDuocMo};
struct lopTinChi
{
	int maLopTinChi; //So nguyen tu dong tang
	string maMonHoc;
	string nienKhoa;
	int hocki;
	int SLDK;
	int nhom;
	int svMin;
	int svMax;
	TrangThaiLTC trangThai; // 0: Lop Bi Huy    1: Lop Duoc Mo
	DKLTCPTR DSDK = NULL;
};

struct DSLTC
{   
	int n;
	lopTinChi *dsLopTC[MAXLOPTC];
};
