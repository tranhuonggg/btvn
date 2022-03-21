/* Ho va ten: Tran Thi Huong
   Ma sinh vien: 21103100308*/
#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;

void so_armstrong(){
	int n;
	cout << " + Nhap n = " ; cin >> n;
	int gan,tong = 0,cacso;
	gan = n;
   	while (n != 0) {
      cacso = n % 10;
      tong = tong + (cacso*cacso*cacso);
      n = n / 10;
   	}
   	if(gan == tong){ 
   		cout  << gan << " la so Armstrong !  \n";
   	}
     
   else{
   	 	cout  << gan << " khong phai la so Armstrong ! \n";
   }
     
}

void TinhDiemRL(){
	float TCS , TVP, XSTK, TLH, LGH, QTH;
	
	cout << " + Nhap cac so diem sau : " << endl;
	nhaplai1:
	cout << " \t Tin co so : " ; cin >> TCS;
	if (TCS < 0 || TCS > 10) {
		cout << " ! Nhap loi moi nhap lai !" << endl;
		goto nhaplai1;
	}
	nhaplai2:
	cout << " \t Tin van phong : " ; cin >> TVP;
	if (TVP < 0 || TVP > 10) {
		cout << " ! Nhap loi moi nhap lai !" << endl;
		goto nhaplai2;
	}
	nhaplai3:
	cout << " \t Xac suat thong ke : " ; cin >> XSTK ;
	if (XSTK < 0 || XSTK > 10) {
		cout << " ! Nhap loi moi nhap lai !" << endl;
		goto nhaplai3;
	}
	nhaplai4:
	cout << " \t Tam ly hoc : " ; cin >> TLH ;
	if (TLH < 0 || TLH > 10) {
		cout << " ! Nhap loi moi nhap lai !" << endl;
		goto nhaplai4;
	}
	nhaplai5:
	cout << " \t Logic hoc : " ; cin >> LGH ;
	if (LGH < 0 || LGH > 10) {
		cout << " ! Nhap loi moi nhap lai !" << endl;
		goto nhaplai5;
	}
	nhaplai6:
	cout << " \t Quan tri hoc : " ; cin >> QTH ;
	if (QTH < 0 || QTH > 10) {
		cout << " [!] Nhap loi moi nhap lai !" << endl;
		goto nhaplai6;
	}

	float DTB ;
	DTB = (TCS*4 + TVP*2 + XSTK*3 + TLH*3 + LGH*2 + QTH*2) / 16;
	cout << " + Diem trung binh cua ban : " << DTB << endl;
	if (DTB >= 9){
		cout << " + Diem ren luyen cua ban : 5" << endl;
	}
	else if (DTB >= 8){
		cout << " + Diem ren luyen cua ban : 3" << endl;
	}
	else if (DTB >= 7) {
		cout << " + Diem ren luyen cua ban : 2" << endl;
	}
	else if (DTB < 7) {
		cout << " + Diem ren luyen cua ban : 0" << endl;
	}
}

void MENU (int luachon){
	nhaplai:
	cout << "************MENU************" << endl;
	cout << "* 1. So Armstrong          *" << endl;
	cout << "* 2. Tinh diem ren luyen   *" << endl;
	cout << "* 0. Thoat                 *" << endl;
	cout << "****************************" << endl;
	cout << endl;
	cout << " + Moi ban nhap vao lua chon : " ; cin >> luachon;
	 
	switch(luachon) {
		case 1 : 
			so_armstrong();
			cout << " \n? Ban co muon quay lai MENU khong ? (Y/N)" << endl;
		    char LC;
		    cout << " ! Lua chon cua ban : " ; cin >> LC;
		  	if (LC == 'Y' || LC == 'y') {
		 	cout << endl;
		 	system ("cls"); 
		 	goto nhaplai;
		 	} else {
		 		cout << " ! Cam on va hen gap lai ! Ket thuc !! ";
		 	} 
			break;
		case 2 :
			TinhDiemRL();
			cout << " \n? Ban co muon quay lai MENU khong ? (Y/N)" << endl;
		    cout << " ! Lua chon cua ban : " ; cin >> LC;
		  	if (LC == 'Y' || LC == 'y') {
		 	cout << endl;
		 	system ("cls"); 
		 	goto nhaplai;
		 	} else {
		 		cout << " ! Cam on va hen gap lai ! Ket thuc !! ";
		    
		 	} 
		 	break;
		case 0 :
			cout << " ! Ket thuc chuong trinh! Tam biet !" << endl;
			break;
		default :
			cout << " [!] Vui long chon lua chon 1 / 2 / 0 ! Moi nhap lai sau giay lat!" << endl;
			Sleep(3000);
			system("cls");
			goto nhaplai;
	}
}

main(){
	int luachon;
	MENU(luachon);
}
