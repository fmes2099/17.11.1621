#include <iostream>
#include <string>
using namespace std;
class rumus//kelas rumus
{
    protected :
    float a;//deklarasi alas
    float t;//deklarasi tinggi
	float p;//deklarasi panjang
	float l;//deklarasi lebar
	float s;//deklarasi sisi
    float L;//deklarasi luas
    float K;//deklarasi keliling
};
class rumus_segitiga : public rumus//kelas rumus segitiga
{
	private:
		float A;//deklarasi sisi miring 1
		float B;//deklarasi sisi miring 2
    public :
    void input()//fungsi input
    {
        cout<<"Rumus segitiga"<<endl;//tampilan untuk input data
        cout<<"Masukkan alas : "; cin>>a;//inisiasi alas
        cout<<"Masukkan tinggi : "; cin>>t;//inisiasi tinggi
		cout<<"Masukkan sisi miring 1 : "; cin>>A;//inisiasi sisi miring 1
		cout<<"Masukkan sisi miring 2 : "; cin>>B;//inisiasi sisi miring 2
    }
    void output()//fungsi output
    {
		L=0.5*a*t;//rumus luas segitiga
        cout<<"Luas Segitiga : "<<L<<endl;//tampilan hasil luas
		K=A+B+a;//rumus keliling segitiga
        cout<<"Keliling Segitiga : " <<K<<endl;//tampilan hasil keliling
    }
};

class rumus_persegi: public rumus//kelas rumus persegi
{
    public:
        void input()//fungsi input
        {
            cout<<"Masukkan sisi : "; cin>>s;//inisiasi sisi
        }
        void output()//fungsi output
        {
            L=s*s;//rumus luas persegi
			cout<<"Luas Persegi : "<<L<<endl;//tampilan hasil luas
			K=4*s;//rumus keliling persegi
			cout<<"Keliling Persegi : " <<K<<endl;//tampilan hasil keliling
        }
};
class rumus_persegipanjang: public rumus//kelas rumus persegi panjang
{
    public:
        void input()//fungsi input
        {
            cout<<"Masukkan panjang : "; cin>>p;//inisiasi panjang
			cout<<"Masukkan lebar : "; cin>>l;//inisiasi lebar
        }
        void output()//fungsi output
        {
            L=p*l;//rumus luas
			cout<<"Luas Persegi Panjang : "<<L<<endl;//tampilan hasil luas
			K=2*p+2*l;//rumus keliling
			cout<<"Keliling Persegi Panjang : " <<K<<endl;//tampilan hasil keliling
        }
};
class rumus_jajargenjang: public rumus//kelas jajargenjang
{
	private:
		float sm;//deklarasi sisi miring
    public:
        void input()//fungsi input
        {
            cout<<"Masukkan alas : "; cin>>a;//inisiasi alas
			cout<<"Masukkan tinggi : "; cin>>t;//inisiasi tinggi
			cout<<"Masukkan sisi miring : "; cin>>sm;//inisiasi sisi miring
        }
        void output()//fungsi output
        {
            L=a*t;//rumus luas
			cout<<"Luas Jajar Genjang : "<<L<<endl;//tampilan luas jajargenjang
			K=2*a+2*sm;//rumus keliling
			cout<<"Keliling Jajar Genjang : " <<K<<endl;//tampilan hasil keliling
        }
};
    int main()//fungsi utama
{
        rumus_segitiga rs;
        rumus_persegi rp;
		rumus_persegipanjang rpp;
		rumus_jajargenjang rj;
        int pilihan;
  do
  {
    cout<<"RUMUS BANGUN DATAR"<<endl;//tampilan untuk pilihan
    cout<<"=================\n"<<endl;
    cout<<"\n[1] Segitiga \n[2] Persegi \n[3] Persegi Panjang \n[4] Jajar Genjang \n[5] Keluar"<<endl;
    cout<<"\n================"<<endl;
    cout<<"Masukkan Pilihan : "; cin>>pilihan;//inisiasi pilihan
	
    switch(pilihan)
    {
      case 1://pilihan 1
			rs.input();//ke fungsi input rumus segitiga
			rs.output();//ke fungsi output rumus segitiga
			break;
      case 2://pilihan 2
			rp.input();//ke fungsi input rumus persegi
			rp.output();//ke fungsi output rumus persegi
			break;
	  case 3://pilihan 3
			rpp.input();//ke fungsi input rumus persegi panjang
			rpp.output();//ke fungsi output rumus persegi panjang
			break;
	  case 4://pilihan 4
			rj.input();//ke fungsi input rumus jajargenjang
			rj.output();//ke fungsi output rumus jajargenjang
			break;
	  case 5://pilihan 5
			cout<<"\n\nTerima Kasih"<<endl;//tampilan terimakasih
			break;
    }
  }
  while(pilihan!=5);//maksimal pilihan
}
