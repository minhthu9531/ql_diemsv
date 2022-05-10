void loadLopTinChi(DSLTC &dsLopTinChi) //Doc file LopTC.txt
{
	int j;
	string temp;
	ifstream fin;
	fin.open("LopTC.txt", ios_base::in);
	fin >> dsLopTinChi.n; // So lop tin chi	n
//	cout << dsLopTinChi.n;
	getline(fin, temp);
	for(int i = 0; i < dsLopTinChi.n; i++)
	{
		dsLopTinChi.dsLopTC[i] = new lopTinChi;
		fin >> dsLopTinChi.dsLopTC[i]->maLopTinChi;
		getline(fin, temp);
		getline(fin, dsLopTinChi.dsLopTC[i]->maMonHoc);
		getline(fin, dsLopTinChi.dsLopTC[i]->nienKhoa);
		fin >> dsLopTinChi.dsLopTC[i]->hocki;
		getline(fin, temp);		
		fin >> dsLopTinChi.dsLopTC[i]->nhom;	
		getline(fin, temp);	
		fin >> dsLopTinChi.dsLopTC[i]->svMin;
		getline(fin, temp);		
		fin >> dsLopTinChi.dsLopTC[i]->svMax;
		getline(fin, temp);
		fin >> j;
		getline(fin, temp);
		if(j == 0) dsLopTinChi.dsLopTC[i]->trangThai = lopBiHuy;
		else dsLopTinChi.dsLopTC[i]->trangThai = lopDuocMo;
	}
	fin.close();
}

void loadSinhVien(DSSinhVien &dsSinhVien) //Doc file SinhVien.txt 
{ 
	string temp;
	ifstream fin;
	fin.open("SinhVien.txt", ios_base::in);
	fin >> dsSinhVien.n; // So lop
	getline(fin, temp);
	for(int i = 0; i < dsSinhVien.n ; i++)
	{				
		getline(fin, dsSinhVien.DSSV[i].maSV);
		getline(fin, dsSinhVien.DSSV[i].ho);
		getline(fin, dsSinhVien.DSSV[i].ten);
		getline(fin, dsSinhVien.DSSV[i].phai);
		getline(fin, dsSinhVien.DSSV[i].soDT);	
		getline(fin, dsSinhVien.DSSV[i].maLop);	
		
    }
	fin.close();
}
int Search_info(DSLTC &dsLopTinChi, int info)
{
	for ( int i = 0 ; i < dsLopTinChi.n ; i++)
  	     if (dsLopTinChi.dsLopTC[i]->maLopTinChi == info) return i;
	return -1;
}
// sua nDK dsLTC.dsLopTC[i]->SLDK
void loadDangKiLopTC(DSLTC &dsLTC) //Doc file DangKiLopTC.txt
{
	int k,y,m;
	string temp;
	ifstream fin;
	DKLTCPTR r;
	DKLTCPTR q;
	fin.open("DangKiLopTC.txt", ios_base::in);
	fin >> nLTCDK; //so lop TC da dc dki
//	cout << nLTCDK;
	getline(fin, temp);
	for(int i = 0; i < dsLTC.n; i++)
	{	
		fin >> k; // maltc
		//cout << k << endl;
		getline(fin,temp);
		fin >> dsLTC.dsLopTC[i]->SLDK;	
		//cout << dsLTC.dsLopTC[i]->SLDK << endl;
		getline(fin,temp);		
		for(int j = 0;j < dsLTC.dsLopTC[i]->SLDK; j++)
		{	
			q = new NodeDKLopTinChi;
			if (dsLTC.dsLopTC[i]->DSDK == NULL )
			{
				dsLTC.dsLopTC[i]->DSDK = new NodeDKLopTinChi;
				getline(fin,dsLTC.dsLopTC[i]->DSDK->info.maSV);
				fin >> y; // trang thai
				getline (fin,temp);
				if(y == 0) dsLTC.dsLopTC[i]->DSDK->info.trangThai = huyDangKi;
				else dsLTC.dsLopTC[i]->DSDK->info.trangThai = conDangKi;
				fin >> dsLTC.dsLopTC[i]->DSDK->info.diem;
				getline(fin, temp);
				//cout << dsLTC.dsLopTC[i]->DSDK->info.maSV << " " << dsLTC.dsLopTC[i]->DSDK->info.trangThai << " " << dsLTC.dsLopTC[i]->DSDK->info.diem << endl;
				r = dsLTC.dsLopTC[i]->DSDK;
				dsLTC.dsLopTC[i]->DSDK->pNext = NULL;
			}
			else 
			{
				DKLTCPTR t = new NodeDKLopTinChi;
				getline(fin,t->info.maSV);
				fin >> y; //trang thai
				getline (fin,temp);
				if(y == 0) t->info.trangThai = huyDangKi;
				else t->info.trangThai = conDangKi;
				fin >> t->info.diem;
				getline(fin,temp); 
				//for(r = dsLTC.dsLopTC[i]->DSDK; r->pNext != NULL; r = r->pNext); 
				r->pNext = t;
				t->pNext = NULL;
				r = r->pNext;
			}
//			cout << dsLTC.dsLopTC[i]->DSDK->info.maSV;
//			cout << q->info.maSV;
		}
		
		}
	
	fin.close();

}
void Insert_node(MHPTR &root, MonHoc x) // chen 1 Node vao cay
{
    if (root != NULL)
    {
    	int i = x.maMH.compare(root->info.maMH); /*	i=0: Hai chuoi co ma Ascii bang nhau.
//											i<0: Chuoi thu nhat co ma Ascii nho hon chuoi thu hai.
//											i>0: Chuoi thu nhat co ma Ascii lon hon chuoi thu hai.*/
        if (i == 0) {GoToXY(0 + 13, 13 + 9); cout << "Mon Hoc da ton tai!"; } // Node nay da co
        if (i < 0) return Insert_node(root->pLeft, x); // chen vao Node trai
        else if (i > 0) return Insert_node(root->pRight, x);   // chen vao Node phai
    }
    else 
    {
   	root = new NodeMonHoc;
    root->info = x;
    root->pLeft = root->pRight = NULL;
	}
}
void loadMonHoc(MHPTR &root) //Doc file MonHoc.txt
{
	string key;
	MonHoc temp;
	string t;
	MHPTR p;
//	string A[500]; // mang mon hoc
	ifstream fin;
	fin.open("MonHoc.txt", ios_base::in);
	fin >> nMH; // So mon hoc
//	cout << nMH;
	getline(fin, t);
	for(int i = 0; i < nMH; i++)
	{
		getline(fin, temp.maMH);
//		TaoMangMonHoc( A, key, nMH);
		getline(fin, temp.tenMH);
		fin >> temp.STCLT;
		getline(fin, t);
		fin >> temp.STCTH;
		getline(fin, t);
		if(root == NULL)
		{
			p = new NodeMonHoc;
//			p->info.maMH.assign(key);
//			cout << p->info.maMH;
			p->info = temp;
//			cout << p->info.tenMH;
			p->pLeft = NULL;		p->pRight = NULL;
			root = p;								
		}
		else {
//			cout << key;
//			cout << temp.tenMH;
//			Insert_node(root, key, temp);
			Insert_node(root,temp);
		}
	}
	fin.close();
}
void LoadMaLopTC(int m[], int &n)// doc file MaLopTC.txt
{
	string temp;
	ifstream fin;
	fin.open("MaLopTC.txt", ios_base::in);
	fin >> n;
	getline(fin,temp);
	for(int i = 0; i < n; i++)
	{
		fin >> m[i];
		getline(fin,temp);
	}
	fin.close();
}
