#include<iostream>
using namespace std;
class khachhang {
private:
	char ht[30];
	struct  ns{
		int ngay, thang, nam;
	}ns;
	char cmt[50];
	char hk[50];
public:
	void nhap() {
				
			cin. ignore();
			cout << "Ho ten khach hang la : ";
			cin.getline(ht, 30);
			
			
			do{
				cout << "Nhap vao ngay sinh : ";
				cin >> ns.ngay;
			}while(ns.ngay <= 0 || ns.ngay > 31);
				do{
				cout << "Nhap vao thang sinh : ";
				cin >> ns.thang;
			}while(ns.thang <= 0 || ns.ngay > 12);
				do{
				cout << "Nhap vao nam sinh : ";
				cin >> ns.nam;
			}while(ns.nam <= 0 );
			cin.ignore();
			cout << "Moi nhap so chung minh thu :";
			cin.getline(cmt, 50);
			cout << "Ho khau cua khach hang :";
			cin.getline(hk, 50);
	}	
	void in() {
		cout << "Ho ten :" << ht << endl;
		cout << "Ngay sinh : " << ns.ngay << "|" << ns.thang << "|" << ns.nam << endl;
		cout << "Chung minh thu : " << cmt << endl;
		cout << "Ho khau : " << hk << endl;
	}
	void kt() {
		if (ns.thang == 12) {
			kh[i].in();
		}
	}

};

int main() {
	khachhang kh[30];
	int n;
	cout << "So luong khach hang : "; 
	cin >> n;
	for (int i = 0; i < n; i++){
		cout << "Nhap vao thong tin cua khach hang thu " << i + 1 << ": \n";
		kh[i].nhap();
	}
	for (int i = 0; i < n; i++){
		cout << "Thong tin cua khach hang thu " << i + 1 << ": \n";
		kh[i].in();
	}
	for (int i = 0; i < n; i++){
		kh[i].ht();
	}
}
