#include<iostream>
using namespace std;

#define offset "\t\t\t\t\t\t"
//#define - определить
//макроопределение (макрос)
//имя значение

//#define ЧТО_ЗАМЕНИТЬ ЧЕМ_ЗАМЕНИТЬ
#if defined MACRO

#endif

#define ELOCHKA

void main()
{
	setlocale(LC_ALL, "Russian");
#if defined ELOCHKA
	//если определено ELOCHKA, то нижеследующий код, до директивы #endif
	//будет виден компилятору
	std::cout << "//Студент группы СБД 211 Агаджанян Варужан//" << endl;

	cout << offset << "В лесу родилась елочка,\n";
	cout << offset << "В лесу она росла,\n";
	cout << offset << "Зимой и летом стройная,\n";
	cout << offset << "Зеленая была.\n" << endl;

	cout << offset << "Метель ей пела песенку:\n";
	cout << offset << "\"Спи, елочка, бай-бай!\"\n";
	cout << offset << "Мороз снежком укутывал:\n";
	cout << offset << "\"Смотри, не замерзай!\".\n" << endl;

	cout << offset << "Трусишка зайка серенький\n";
	cout << offset << "Под елочкой скакал.\n";
	cout << offset << "Порою волк, сердитый волк\n";
	cout << offset << "Рысцою пробегал.\n" << endl;

	cout << offset << "Чу! Снег по лесу частому\n";
	cout << offset << "Под полозом скрипит,\n";
	cout << offset << "Лошадка мохноногая\n";
	cout << offset << "Торопится, бежит.\n" << endl;

	cout << offset << "Везет лошадка дровенки,\n";
	cout << offset << "А в дровнях старичок,\n";
	cout << offset << "Срубил он нашу елочку\n";
	cout << offset << "Под самый корешок.\n" << endl;

	cout << offset << "Теперь она, нарядная,\n";
	cout << offset << "Hа праздник к нам пришла\n";
	cout << offset << "И много, много радости\n";
	cout << offset << "Детишкам принесла!\n" << endl;
#endif
}