#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

//class Point
//{
//	int x;
//	int y;
//public:
//	Point() { x = y = 0; };
//	void SetPoint(int iX, int iY)
//	{
//		x = iX;
//		y = iY;
//	}
//	void Show()
//	{
//		cout << "[" << x << ";" << y << "]";
//	}
//};
//
//class Figura
//{
//	Point* obj;
//	int count;
//	int color;
//public:
//	Figura()
//	{
//		count = color = 0;
//		obj = NULL;
//	}
//
//	void CreateFigura(int cr, int ct)
//	{
//		if (ct < 3)
//		{
//			exit(0);
//		}
//		count = ct;
//		color = cr;
//		obj = new Point[count];
//		if (!obj)
//		{
//			exit(0);
//		}
//		int tempX, tempY;
//		for (int i = 0; i < count; i++)
//		{
//			cout << "Set X\n";
//			cin >> tempX;
//			cout << "Set Y\n";
//			cin >> tempY;
//			obj[i].SetPoint(tempX, tempY);
//		}
//	}
//
//	void ShowFigura()
//	{
//		cout << "Color " << color << "\n\nPoints " << count << "\n\n";
//		for (int i = 0; i < count; i++)
//		{
//			obj[i].Show();
//		}
//	}
//	~Figura()
//	{
//		if (obj != NULL)
//		{
//			delete[] obj;
//		}
//	}
//
//};


/*
* По умолчанию идет private
* Приоритеты private,protected,public;
* Конструктор базового класса вызывается раньше производного
* Деструктор 
*/

//class A
//{
//
//};
//
//class B :protected A
//{
//
//};

/*
	Потомок можен наследовать несколько Базовых

	class A
	{...};
	class B
	{...};
	class C:public A, public B;
	{...}
*/

//class Point
//{
//
//protected:
//	int x;
//	int y;
//public:
//	Point()
//	{
//		x = 0;
//		y = 0;
//	}
//
//	int& GetX()
//	{
//		return x;
//	}
//
//	int& GetY()
//	{
//		return y;
//	}
//
//};
//
//class MyWindows :public Point
//{
//	int Width;
//	int Height;
//public:
//	MyWindows(int width, int height)
//	{
//		Width = width;
//		Height = height;
//	}
//
//	int& GetWidth()
//	{
//		return Width;
//	}
//
//	int& GetHeight()
//	{
//		return Height;
//	}
//
//	void MoveX(int Dx)
//	{
//		x += Dx;
//	}
//
//	void MoveY(int Dy)
//	{
//		y += Dy;
//	}
//
//	void Show()
//	{
//		cout << "X= " << x << "\nY= " << y << "\n\n";
//		cout << "Width= " << Width << "\nHeight= " << Height << "\n\n";
//	}
//};

//class Roga
//{
//protected:
//
//	char Color[25];
//	int Wes;
//public:
//	Roga()
//	{
//		strcpy(Color, "Dirty");
//		Wes = 20;
//	}
//	
//	Roga(const char* color, int wes)
//	{
//		strcpy(Color, color);
//		Wes = wes;
//	}
//
//	void SetColor(const char* color)
//	{
//		strcpy(Color, color);
//	}
//
//};
//
//class Kopyta
//{
//protected:
//
//	char Forma[25];
//	int Razmer;
//public:
//
//	Kopyta()
//	{
//		strcpy(Forma, "Big");
//		Razmer = 10;
//	}
//
//	Kopyta(const char* forma,int razmer)
//	{
//		strcpy(Forma, forma);
//		razmer = Razmer;
//	}
//
//};
//
//
//
//class Los :public Roga, public Kopyta
//{
//public:
//	 char Name[255];
//	Los(const char* name)
//	{
//		strcpy(Name, name);
//	}
//
//	void DisplayInfo()
//	{
//		cout << "Name " << Name << "\n";
//		cout << "Forma " << Forma << "\n";
//		cout << "Color " << Color << "\n";
//		cout << "Wes Rogov " << Wes << "\n";
//		cout << "Razmer kopyt" << Razmer << "\n";
//	}
//
//
//};
//

/*
	template<class T>
	class Pair
	{
		T a;
		T b;
		public:
		Pair()
	}


*/


class Point
{
	int x;
	int y;
public:
	Point() { x = y = 0; };
	void SetPoint(int iX, int iY)
	{
		x = iX;
		y = iY;
	}
	void Show()
	{
		cout << "[" << x << ";" << y << "]";
	}
};

class Figura
{
	Point* obj;
	int count;
	int color;
public:
	Figura()
	{
		count = color = 0;
		obj = NULL;
	}

	void CreateFigura(int cr, int ct)
	{
		if (ct < 3)
		{
			exit(0);
		}
		cout << "\nВведите цвет фигуры в системе RGB\n";
		cin >> cr;

		count = ct;
		color = cr;
		obj = new Point[count];
		if (!obj)
		{
			exit(0);
		}
		int tempX, tempY;
		for (int i = 0; i < count; i++)
		{
			cout << "Set X\n";
			cin >> tempX;
			cout << "Set Y\n";
			cin >> tempY;
			obj[i].SetPoint(tempX, tempY);
		}

	}

	void ShowFigura()
	{
		cout << "Color " << color << "\n\nPoints " << count << "\n\n";
		for (int i = 0; i < count; i++)
		{
			obj[i].Show();
		}
	}
	~Figura()
	{
		if (obj != NULL)
		{
			delete[] obj;
		}
	}

};

class Kompozicia
{
	Figura* obj1;
	Figura* obj2;
	int count = 0;
public:
	Kompozicia()
	{
		obj1 = NULL;
		obj2 = NULL;
		count = 0;
	}

	void CreateKompozicia()
	{
		obj1 = new Figura;
		obj2 = new Figura;
		if (!obj1 && !obj2)
		{
			exit(0);
		}

		obj1->CreateFigura(255,3);
		obj2->CreateFigura(341, 4);
		count++;
	}

	void ShowKompozicia()
	{
		cout << "Фигура1 \n";
		obj1->ShowFigura();
		cout <<"Фигура2 \n";
		obj2->ShowFigura();

	}
	
	~Kompozicia()
	{
		delete[] obj1;
		delete[] obj2;
	}

};




class Passport
{
	int Series;
	int Number;
	int Day;
	int Mounth;
	int Year;
	char Name[255];
	char Surname[255];
	char Patronymic[255];
public:

	Passport()
	{
		Series = 0;
		Number = 0;
		Day = 0;
		Mounth = 0;
		Year = 0;
		strcpy(Name, "None");
		strcpy(Surname, "None");
		strcpy(Patronymic, "None");
	}

	Passport(int series, int number, int day, int mounth, int year, const char* name, const char* surname, const char* patronymic)
	{
		Series = series;
		Number = number;
		Day = day;
		Mounth = mounth;
		Year = year;
		strcpy(Name, name);
		strcpy(Surname, surname);
		strcpy(Patronymic, patronymic);
	}

	void Add_info()
	{
		cout << "\nВведите данные паспорта\n";
		cout << "\nВведтие имя\n";
		cin >> Name;
		cout << "\nВведите фамилию\n";
		cin >> Surname;
		cout << "\nВведите отчество\n";
		cin >> Patronymic;
		cout << "\nВведите серию паспорта\n";
		cin >> Series;
		cout << "\nВведите номер паспорта\n";
		cin >> Number;

		cout << "\nВведите дату рождения\n";
		cout << "\nВведите год рождения\n";
		cin >> Year;
		cout << "\nВведите месяц рождения\n";
		cin >> Mounth;
		cout << "\nВведите день рождения\n";
		cin >> Day;

	}

	void SetSeries(int series)
	{
		Series = series;
	}

	void SetNumber(int number)
	{
		Number = number;
	}

	void SetDay(int day)
	{
		Day = day;
	}

	void SetMounth(int mounth)
	{
		Mounth = mounth;
	}

	void SetYear(int year)
	{
		Year = year;
	}

	void SetName(const char* name)
	{
		strcpy(Name, name);
	}

	void SetSurname(const char* surname)
	{
		strcpy(Surname, surname);
	}

	void SetPatronymic(const char* patronymic)
	{
		strcpy(Patronymic, patronymic);
	}

	void ShowPasport()
	{
		cout << "\nПаспорт\n";
		Series /= 100;
		cout << "****************" << "   Фамилия   " << Surname << "    " << Series << "\n";
		cout << "*              *" << "   Имя       " << Name << "     " << Series%100 << "\n";
		cout << "*              *" << "   Отчество  " << Patronymic << "\n";
		cout << "*   Ваше фото  *" << "   Дата рождения " << Day << "." << Mounth << "." << Year << "\n";
		cout << "*              *" << "\n";
		cout << "*              *" << "\n";
		cout << "*              *" << "\n";
		cout << "*              *" << "\n";
		cout << "****************" << "\n";

	}

};





int main()
{
	//MyWindows A(10,10);
	//A.Show();
	//A.GetX() = 5;
	//A.GetY() = 3;
	//A.GetWidth() = 40;
	//A.GetHeight() = 50;
	//A.Show();
	//A.MoveX(2);
	//A.MoveY(7);
	//A.Show();

	setlocale(LC_ALL, "Rus");
	//Los los("Losyash");

	//los:Roga r("Read",20);

	//los.SetColor("Read");

	//los.DisplayInfo();

	//Kompozicia kompozicia;

	//kompozicia.CreateKompozicia();
	//kompozicia.ShowKompozicia();

	Passport Human;

	Human.Add_info();
	Human.ShowPasport();



	return 0;
}