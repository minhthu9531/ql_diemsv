
void SaveMaLopTC(int m[], int n)// luu file MaLopTC
{
	ofstream fout;
	fout.open("MaLopTC.txt", ios_base::out);
	fout << --n << endl;
	for (int i = 0; i < n; i++)
	{
		fout << m[i] << endl;
	}
	fout.close();
}
void SaveLopTC (DSLTC ds) //Luu mang tuyen tinh con tro -> Danh sach lop TC
{
	ofstream fout;
	fout.open("LopTC.txt", ios_base::out);
	fout << ds.n << endl;
	for (int i = 0; i < ds.n; i++)
	{
		fout << ds.dsLopTC[i]->maLopTinChi << endl
		     << ds.dsLopTC[i]->maMonHoc << endl
		     << ds.dsLopTC[i]->nienKhoa << endl
		     << ds.dsLopTC[i]->hocki << endl
		     << ds.dsLopTC[i]->nhom << endl
			 << ds.dsLopTC[i]->svMin << endl
			 << ds.dsLopTC[i]->svMax << endl
			 << ds.dsLopTC[i]->trangThai << endl;		
	}
	fout.close();
} 
void SaveDangKiLopTC(DSLTC dsLTC) //Luu vao file DangKiLopTC.txt
{
	DKLTCPTR r;
	ofstream fout;
	fout.open("DangKiLopTC.txt", ios_base::out);
	fout << dsLTC.n << endl;
	for(int i = 0; i < dsLTC.n ; i++)
	{		
//		cout << dsLTC.dsLopTC[i]->maLopTinChi << endl;
		fout << dsLTC.dsLopTC[i]->maLopTinChi << endl;
//		cout << dsLTC.dsLopTC[i]->SLDK << endl;
		fout << dsLTC.dsLopTC[i]->SLDK << endl;	
		
		//cout << dsLTC.dsLopTC[i]->DSDK->pNext->info.maSV << endl;
		
		for(r = dsLTC.dsLopTC[i]->DSDK; r != NULL; r = r->pNext)
		{
//			cout << r->info.maSV << " "; 
//			cout << r->info.trangThai << " "; 
//			cout << r->info.diem << endl;
			
			fout << r->info.maSV << endl; 
			fout << r->info.trangThai << endl; 
			fout << r->info.diem << endl;			
		}		
	}
	fout.close();
}

void SaveSinhVien (DSSinhVien &ds) //Luu mang tuyen tinh -> Danh sach sinh vien
{
	ofstream fout;
	fout.open("SinhVien.txt", ios_base::out);
	fout << ds.n << endl;
	for (int i = 0; i < ds.n; i++)
	{	
		fout << ds.DSSV[i].maSV << endl
	    	 << ds.DSSV[i].ho << endl
	     	 << ds.DSSV[i].ten << endl
	     	 << ds.DSSV[i].phai << endl
	     	 << ds.DSSV[i].soDT << endl
			 << ds.DSSV[i].maLop << endl;
//		cout << ds.DSSV[i].maSV << endl
//	    	 << ds.DSSV[i].ho << endl
//	     	 << ds.DSSV[i].ten << endl
//	     	 << ds.DSSV[i].phai << endl
//	     	 << ds.DSSV[i].soDT << endl
//			 << ds.DSSV[i].maLop << endl;
	}
	fout.close();
} 
int dem(MHPTR root) //Dem so mon hoc
{
	if(root == NULL) return 0;	
	else return( dem(root->pRight) + dem(root->pLeft) ) + 1;
}

void SaveMonHoc (MHPTR root) //Luu cay nhi phan tim kiem-> Danh sach mon hoc
{
	ofstream fout;
	fout.open("MonHoc.txt", ios_base::out);
	nMH = dem(root);
//	cout << nMH;
	fout << nMH << endl;
	const int STACKSIZE = 500;
    MHPTR Stack[STACKSIZE];
    MHPTR p = root;
    int sp = -1;	 // Khoi tao Stack rong
    do //LNR
	{ 
		while(p != NULL)
		{	
			Stack[++sp] = p;
			p = p->pLeft;
        }
        if (sp != -1)
        {	
			p = Stack[sp--];
//			cout << p->info.maMH;
//			cout << p->info.tenMH;
//			cout << p->info.STCLT;
			fout << p->info.maMH << endl
				 << p->info.tenMH << endl
				 << p->info.STCLT << endl
				 << p->info.STCTH << endl;
			p = p->pRight;
        }
        else break;
	} while (1);
    fout.close();
}


