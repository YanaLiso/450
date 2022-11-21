#include <iostream>
using namespace std;


	/*Proc16.Описать функцию Sign(X) целого типа,
	возвращающую для вещественного числа X следующие значения :
     если X < 0 то -1;
	 если X = 0 то 0;
	 если X > 0 то 1.
	С помощью этой функции найти значение выражения
	Sign(A) + Sign(B) для данных вещественных чисел A и B.*//*int sign(double x) {	if (x < 0) {		return -1;	}	if (x == 0) {		return 0;	}	if (x > 0) {		return 1;	}}int main() {	double a, b;	cin >> a >> b;	cout << sign(a) + sign(b) << endl;}*//*Proc17. Описать функцию RootsCount(A, B, C) целого типа, определяющую
количество корней квадратного уравнения A·x^2 + B·x + C = 0 (A, B, C —
вещественные параметры, A != 0). С ее помощью найти количество корней
для каждого из трех квадратных уравнений с данными коэффициентами.
Количество корней определять по значению дискриминанта:
D = B2 − 4·A·C.*//*int RootsCount(double A, double B, double C) {	double D = B * B - 4 * A * C;	if (D < 0) {		return 0;	}	if (D > 0) {		return 2;	}	if (D == 0) {		return 1;	}}int main() {	double A, B, C;	for (int i = 1; i <= 3; i++) {		cin >> A >> B >> C;		cout << RootsCount(A, B, C) << endl;		}		}*//*Proc18.Описать функцию CircleS(R) вещественного типа, находящую площадь круга радиуса R(R — вещественное).С помощью этой функции
найти площади трех кругов с данными радиусами.Площадь круга радиуса R вычисляется по формуле S = π·R
2.В качестве значения π использовать 3.14.*//*double CircleS(double R){	double S = 3.14 * R;	return S;}int main() {	double R;	for (int i = 1; i <= 3; i++) {		cin >> R;		cout << CircleS(R) << endl;	}}*//*Proc19.Описать функцию RingS(R1, R2) вещественного типа, находящую площадь кольца, заключенного между двумя окружностями с общим центром
и радиусами R1 и R2(R1 и R2 — вещественные, R1 > R2).С ее помощью найти площади трех колец, для которых даны внешние
и внутренние радиусы.Воспользоваться формулой площади круга радиуса R : S = π·R2.
В качестве значения π использовать 3.14.*//*double RingS(double R1, double R2) {	double S1 = 3.14 * R1 * R1;	double S2 = 3.14 * R2 * R2;	double S3 = S1 - S2;	return S3;}int main() {	double R1, R2;	for (int i = 1; i <= 3; i++) {		cin >> R1 >> R2;		cout << RingS(R1, R2) << endl;	}}*//*Proc20.Описать функцию TriangleP(a, h), находящую периметр равнобедренного треугольника по его основанию a и высоте h, проведенной к
основанию(a и h — вещественные).С помощью этой функции найти
периметры трех треугольников, для которых даны основания и высоты.
Для нахождения боковой стороны b треугольника использовать теорему
Пифагора :
b2 = (a / 2)2 + h2.*//*double TriangleP(double a, double h) {	double B = sqrt((a / 2)*(a / 2) +h * h);	double P = B + B + a;	return P;}int main() {	double a, h;	for (int i = 1; i <= 3; i++) {		cin >> a >> h;		cout << TriangleP(a, h) << endl;	}}*//*Proc21◦.Описать функцию SumRange(A, B) целого типа, находящую сумму
всех целых чисел от A до B включительно(A и B — целые).Если A > B,то функция возвращает 0. С помощью этой функции найти суммы чисел
от A до B и от B до C, если даны числа A, B, C.*/int SumRange(int A, int B) {	double sum = 0;	if (A < B) {		for (int i = A; A <= B; i++) {			sum += i;			return sum;		}	}	else {		return 0;	}}int main() {	double A, B, C, sum1, sum2;	cin >> A, B, C;	for (int i = A; i <= B; i++) {		sum1 += i;	}	cout << sum1 << endl;	for (int i = B; i <= C; i++) {		sum2 += i;	}	cout << sum2 << endl;}	
