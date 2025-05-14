#include <iostream>
#include <string>
#include <cmath>

using namespace std;

enum endays { Sunday = 1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

enum enmonth { January = 1, February, March, April, May, June, July, August, September, October, November, December };

enum enNumberType { odd, even };

enum enresult { fail, pass };

enum encalcu { add = '+', sub = '-', multiblay = '*', dvide = '/' };

enum enprime_state { not_prime, prime };

struct stcalcu
{
	float num[2];
	encalcu oprt;
};

struct ststudent
{
	float mark[3];
};

int read_number_masseg(string masseg)
{
	cout << masseg;
	int number;
	cin >> number;
	return number;
}

void swaper(float& num1, float& num2)
{
	float temp;
	temp = num2;
	num2 = num1;
	num1 = temp;
}

float area1(float a, float b)
{
	return a * b;
}

float area2(float a, float d)
{
	float area = a * sqrt((pow(d, 2) - pow(a, 2)));
	return area;
}

float area3(float r)
{
	const float pi = 3.14;
	float area = pi * pow(r, 2);
	return (area);
}

float area4(float diameter)
{
	const float pi = 3.14;
	float area = (pi * pow(diameter, 2)) / 4;
	return (area);
}

float area5(float a)
{
	const float pi = 3.14;
	float area = pi * pow((a / 2), 2);
	return (area);
}

float area6(float l)
{
	const float pi = 3.14;
	float area = pow(l, 2) / (4 * pi);
	return (area);
}

float area7(float a, float b)
{
	const float pi = 3.14;
	float area = pi * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
	return(area);
}

float area8(float a, float b, float c)
{
	const float pi = 3.14159265359;
	float p = (a + b + c) / 2;
	float area = pi * pow(((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)))), 2);
	return(area);

}

float area9(float a, float h)
{
	float area = (a / 2) * h;
	return area;
}

int power(int number, int m)
{
	if (m == 0)
		return 1;

	int result = 1;
	for (int i = 1; i <= m; i++)
	{
		result = result * number;
	}
	return result;
}

struct sttime
{
	const int second_in_minute = 60;
	const int second_in_hour = 60 * second_in_minute;
	const int second_in_day = 24 * second_in_hour;
	double weaks, days, hours, minutes, seconds;
};

double time_to_second(sttime time1)
{
	double total_seconds = time1.days * time1.second_in_day + time1.hours * time1.second_in_hour + time1.minutes * time1.second_in_minute + time1.seconds;

	return (total_seconds);
}

sttime second_to_time(int seconds_remaind)
{
	sttime time2;
	time2.days = seconds_remaind / time2.second_in_day;
	seconds_remaind = seconds_remaind % time2.second_in_day;
	time2.hours = seconds_remaind / time2.second_in_hour;
	seconds_remaind = seconds_remaind % time2.second_in_hour;
	time2.minutes = seconds_remaind / time2.second_in_minute;
	seconds_remaind = seconds_remaind % time2.second_in_minute;
	time2.seconds = seconds_remaind;
	return time2;
}

struct stdriver
{
	short age;
	bool dl;
	bool recommendation = 0;
};

stdriver get_driver_info()
{
	stdriver driver;

	cout << "please enter your age: ";
	cin >> driver.age;
	cout << "do you have driver license ? (1 or 0): ";
	cin >> driver.dl;

	return driver;
}

stdriver get_driver_info2()
{
	stdriver driver;

	cout << "do you have recommendation ? ";
	cin >> driver.recommendation;
	cout << "please enter your age: ";
	cin >> driver.age;
	cout << "do you have driver license ? (1 or 0): ";
	cin >> driver.dl;

	return driver;
}

bool is_accepted(stdriver driver)
{
	if (driver.recommendation)
		return true;
	else
		return (driver.age >= 21 and driver.dl == 1);
}

string driver_state(stdriver driver)
{
	if (is_accepted(driver))
	{
		return "hired";
	}
	else
	{
		return "rejected";
	}
}

enresult student_state(float mark)
{
	if (mark >= 50)
	{
		return enresult::pass;
	}
	else
	{
		return enresult::fail;
	}
}

string check_age(short age)
{
	if (age >= 18 && age <= 45)
		return "vald age.";
	else
		return "invalid age.";
}

char get_grade(int grade)
{
	if (grade >= 90)
		return 'A';
	else if (grade >= 80)
		return 'B';
	else if (grade >= 70)
		return 'C';
	else if (grade >= 60)
		return 'D';
	else if (grade >= 50)
		return 'E';
	else
		return 'F';
}

float get_percentage(double total_sale)
{
	if (total_sale > 1000000)
		return 0.01;
	else if (total_sale > 500000)
		return 0.02;
	else if (total_sale > 100000)
		return 0.03;
	else if (total_sale > 50000)
		return 0.05;
	else
		return 0.00;
}

float calculate(stcalcu calcu)
{
	switch (calcu.oprt)
	{
	case encalcu::add:
		return calcu.num[0] + calcu.num[1];

	case encalcu::sub:
		return calcu.num[0] - calcu.num[1];

	case encalcu::multiblay:
		return calcu.num[0] * calcu.num[1];

	case encalcu::dvide:
		return calcu.num[0] / calcu.num[1];

	default:
		return 0;
	}
}

string get_day(endays day)
{
	switch (day)
	{
	case endays::Sunday:
		return "Sunday";
	case endays::Monday:
		return "Monday";
	case endays::Tuesday:
		return "Tuesday";
	case endays::Wednesday:
		return "Wednesday";
	case endays::Thursday:
		return "Thursday";
	case endays::Friday:
		return "Friday";
	case endays::Saturday:
		return "Saturday";
	default: return "wrong";
	}
}

string get_month(enmonth month)
{
	switch (month)
	{
	case enmonth::January: return "January";
	case enmonth::February: return "February";
	case enmonth::March: return "March";
	case enmonth::April: return "April";
	case enmonth::May: return "May";
	case enmonth::June: return "June";
	case enmonth::July: return "July";
	case enmonth::August: return "August";
	case enmonth::September: return "September";
	case enmonth::October: return "October";
	case enmonth::November: return "November";
	case enmonth::December: return "December";
	default: return "wrong";
	}
}

void print_into(int number)
{
	for (int i = 1; i <= number; i++)
	{
		cout << i << endl;
	}
}

float read_number()
{
	cout << "please enter number: ";
	float number;
	cin >> number;
	return number;
}

void into_print(int number)
{
	for (int i = number; i >= 1; i--)
	{
		cout << i << endl;
	}
}

double n_factorial(int number)
{
	double result = 1;
	for (int i = 1; i <= number; i++)
	{
		result *= i;
	}
	return result;
}

void letters(int n)
{
	if (n == 1)
	{
		for (int i = 97; i <= 122; i++)
			cout << char(i) << endl;
	}
	else if (n == 2)
	{
		for (int i = 65; i <= 90; i++)
			cout << char(i) << endl;
	}
	else cout << "nothing";
}

int read_number_poz(string masseg)
{
	int number;
	do
	{
		cout << masseg;
		cin >> number;
		if (number <= 0)
			cout << "wrong number, please enter a pozitif number: \n";
	} while (number <= 0);
	return number;
}

int sum_99()
{
	int sum = 0;
	int number = 0;
	int i = 1;
	do
	{
		number = read_number_masseg("please enter number " + to_string(i) + " : ");
		if (number == -99)
			break;
		sum += number;
		i++;
	} while (number != -99);
	return sum;
}

int max_2(int num1, int num2)
{
	if (num1 > num2)
		return num1;
	else if (num1 < num2)
		return num2;
	else cout << num1 << " = " << num2;
	return 0;
}

int max_3(int num1, int num2, int num3)
{
	if (num1 > num2)
		return max_2(num1, num3);
	else if (num1 < num2)
		return max_2(num2, num3);
	else cout << num1 << " = " << num2 << " = " << num3;
	return 0;
}

enprime_state checke_prime(int x)
{
	int m = round(x / 2);
	for (int i = 2; i <= m; i++)
	{
		if (x % i == 0)
		{
			return enprime_state::not_prime;
		}
	}
	return enprime_state::prime;
}

void print_info(string info)
{
	cout << info << endl;
}

string read_info()
{
	string name;
	cout << "please enter your name: ";
	getline(cin, name);
	return name;
}

enNumberType check_even_odd(int number)
{
	if (number % 2 == 0)
		return enNumberType::even;
	else
		return enNumberType::odd;
}

void printNumberType(enNumberType numberType)
{
	if (numberType == even)
		cout << "number is even";
	else
		cout << "number is odd";
}

struct stfln {
	string first_name;
	string last_name;
};

stfln read_flname()
{
	stfln fln;
	cout << "please enter your first name: ";
	cin >> fln.first_name;
	cout << "please enter your last name: ";
	cin >> fln.last_name;
	return fln;
}

string to_fln(stfln fln)
{
	return fln.first_name + " " + fln.last_name;
}

float read_numbertohalf()
{
	float number;
	cout << "please input a number to print the half of it: ";
	cin >> number;
	return number;
}

float half_of(float number)
{
	return number / 2;
}

void print_half_ofnumber(float number)
{
	cout << "Half of " << number << " is " << half_of(number) << endl;
}

int read_mark()
{
	cout << "please enter mark: ";
	int mark;
	cin >> mark;
	return mark;
}

void print_result(int mark)
{
	if (student_state(mark) == enresult::pass)
		cout << "Pass";
	else cout << "Fail";
}

void sumof3(float number[])
{
	cout << "please enter 3 number to print the sum of it: \n";
	cin >> number[0] >> number[1] >> number[2];
}

void avgof3(float& mark1, float& mark2, float& mark3)
{
	cout << "please enter 3 mark to print the average of it: \n";
	cin >> mark1 >> mark2 >> mark3;
}

string calcu(float number[])
{
	return to_string(number[0] + number[1] + number[2]);
}

string calcuavg3(float mark1, float mark2, float mark3)
{
	return to_string((mark1 + mark2 + mark3) / 3);
}

ststudent read_student_marks()
{
	ststudent student;
	cout << "this is a program to calculate the avrage of 3 mark \n";
	for (int i = 0; i <= 2; i++)
	{
		cout << "please enter " << i + 1 << "th student mark: ";
		cin >> student.mark[i];
	}
	return student;
}

float calculate_sum_of_3(ststudent student)
{
	return (student.mark[0] + student.mark[1] + student.mark[2]);
}

float calculate_avg_of_3(ststudent student)
{
	return calculate_sum_of_3(student) / 3;
}

void print_student_mark_satate(float avgmark)
{
	print_info(to_string(avgmark));
	print_result(avgmark);
}

void read_numbers2(float& num1, float& num2)
{
	cout << "please enter number 1: ";
	cin >> num1;
	cout << "please enter number 2: ";
	cin >> num2;
}

void print_numbers2(int num1, int num2)
{
	cout << endl << "number1: " << num1 << endl;
	cout << "number2: " << num2 << endl;
}

float read_numberfor20()
{
	float a;
	cout << "please enter A to calculate ciricle area that inscribed in a square: ";
	cin >> a;
	return a;
}

void print_for_20(float area)
{
	cout << "the area of circle = " << area << endl;
}

void read_3_number(float num[])
{
	cout << "please enter a, b, c to calculate circle area: \n";
	cin >> num[0] >> num[1] >> num[2];
}

bool check_validtion_in_range(int num, int range1, int range2)
{
	return (num >= range1 && num <= range2);
}

short read_age()
{
	short age;

	cout << "please enter age between 18 and 45: \n";
	cin >> age;
	return age;
}

void print_age_result(short age)
{
	if (check_validtion_in_range(age, 18, 45))
		cout << age << " is valid age";
	else cout << age << " is invalid age";
}

short read_age_betwen(int from, int to)
{
	short age;

	do
	{
		age = read_age();

	} while (!check_validtion_in_range(age, from, to));

	return age;
}

void print_age_result2(short age)
{
	cout << "your age is " << age << endl;
}

int sum_of_odd(int number)
{
	int sum = 0;
	for (int i = 1; i <= number; i++)
	{
		if (check_even_odd(i) == enNumberType::odd)
			sum += i;
	}
	return sum;
}

int sum_of_even(int number)
{
	int sum = 0;
	for (int i = 1; i <= number; i++)
	{
		if (check_even_odd(i) == enNumberType::even)
			sum += i;
	}
	return sum;
}

void powerof_234(int num)
{
	int a, b, c;
	a = num * num;
	b = num * num * num;
	c = num * num * num * num;
	cout << "the result is: \n";
	cout << num << "^" << 2 << "=" << a << endl;
	cout << num << "^" << 3 << "=" << b << endl;
	cout << num << "^" << 4 << "=" << c << endl;
}

int read_power()
{
	cout << "please enter m: ";
	int m;
	cin >> m;
	return m;
}

void print_result_of_n_power_m(float n, int m)
{
	cout << n << "^" << m << " = " << power(n, m) << endl;
}

int read_number_in_range(int from, int to, string massege)
{
	int number = 0;
	do
	{
		cout << massege;
		cout << "please enter number betwen " << from << " and " << to << ": ";
		cin >> number;
	} while (number < from || number > to);
	return number;
}

float total_sale_commesion(double total_sale)
{
	return get_percentage(total_sale) * total_sale;
}

struct stmoney
{
	int penny, nickel, dime, quarter, dollar;
};

stmoney read_money()
{
	stmoney money;
	cout << "please enter how mush penny, nickel, dime, quarter, dollar you have \n";
	cout << "to calculate the total pennies and total dollars you have: \n";
	cin >> money.penny >> money.nickel >> money.dime >> money.quarter >> money.dollar;
	return money;
}

float calculate_money(stmoney money)
{
	float total_pennies = (money.penny * 1) + (money.nickel * 5) + (money.dime * 10) + (money.quarter * 25) + (money.dollar * 100);
	return total_pennies;
}

void print_money(stmoney money)
{
	float total_pennies = calculate_money(money);
	cout << "you have " << total_pennies << "  pennies\n";
	cout << "you have " << total_pennies / 100 << " dollars\n";
}

stcalcu read_calcu()
{

	stcalcu calcu;

	cout << "please enter num1: ";
	cin >> calcu.num[0];

	cout << "please enter num2: ";
	cin >> calcu.num[1];

	cout << "please enter op type: ";
	char c;
	cin >> c;

	calcu.oprt = (encalcu)c;

	return calcu;
}

void print_prime_result(int i)
{
	if (checke_prime(i) == enprime_state::prime)
		cout << i << " is prime number.\n";
	else
		cout << i << " is not prime number.\n";
}

int calculate_remainder(int cash_paid, int total_bill)
{
	return cash_paid - total_bill;
}

float calculate_billvalue(float billvalue)
{
	float totalbill = (billvalue * 1.1) * 1.16;
	return totalbill;
}

void time_calculate(sttime& time)
{
	time.days = time.hours / 24;
	time.weaks = time.days / 7;
}

sttime read_time()
{
	sttime time1;
	cout << "please enter time duration of task to calculate it in seconds: \n";
	cout << "days \nhours \nminuts \nseconds \n";
	cin >> time1.days >> time1.hours >> time1.minutes >> time1.seconds;
	return time1;
}

void print_time_result(sttime time2)
{
	cout << "the result = " << time2.days << ":" << time2.hours;
	cout << ":" << time2.minutes << ":" << time2.seconds << endl;
}

float calculate_total_mounth(int loan_amount, int mounthly_payment)
{
	return (float)loan_amount / mounthly_payment;
}

float mounthly_instulmant(int loan_amount, int how_many_mounth)
{
	return (float)loan_amount / how_many_mounth;
}

bool login49()
{
	string pin;
	do
	{
		pin = to_string(read_number_masseg("please enter the password\n"));
		if (pin == "1234")
			return 1;
		else
			cout << "\nwrong password!\n";
	} while (pin != "1234");
}

bool login()
{
	string pin;
	int trie = 3;
	do
	{
		if (trie == 0)
			return 0;
		pin = to_string(read_number_masseg("please enter the password\n"));
		trie--;
		if (pin == "1234")
			return 1;
		else
			cout << "\nwrong password! you have " << trie << " trie left\n";
	} while (pin != "1234");
}

void fun1()
{
	print_info("ahmad alsaleh");
}

void fun2()
{
	print_info(read_info());
}

void fun3()
{
	printNumberType(check_even_odd(read_number()));
}

void fun4()
{
	print_info(driver_state(get_driver_info()));
}

void fun5()
{
	print_info(driver_state(get_driver_info2()));

}

void fun6()
{
	print_info(to_fln(read_flname()));
}

void fun7()
{
	print_half_ofnumber(read_numbertohalf());
}

void fun8()
{
	print_result(read_mark());
}

void fun9()
{
	float number[3];
	sumof3(number);
	print_info(calcu(number));
}

void fun10()
{
	float mark_1, mark_2, mark_3;
	avgof3(mark_1, mark_2, mark_3);
	print_info(calcuavg3(mark_1, mark_2, mark_3));
}

void fun11()
{
	ststudent student;
	student = read_student_marks();
	print_student_mark_satate(calculate_avg_of_3(student));
}

void fun12()
{
	print_info(to_string(max_2(read_number(), read_number())));
}

void fun13()
{
	print_info(to_string(max_3(read_number(), read_number(), read_number())));
}

void fun14()
{
	float num1, num2;
	read_numbers2(num1, num2);
	print_numbers2(num1, num2);
	swaper(num1, num2);
	print_numbers2(num1, num2);
}

void fun15()
{
	cout << "please enter a and b to calculate the area of the rectangle: \n";
	print_info(to_string(area1(read_number(), read_number())));
}

void fun16()
{
	float a = read_number(), d = read_number();

	print_info(to_string(area2(a, d)));
}

void fun17()
{
	cout << "please enter a and h to calculate the area of the triangle: \n";
	float a, h;
	read_numbers2(a, h);
	print_info(to_string(area9(a, h)));
}

void fun18()
{
	cout << "please enter r to calculate circle area: \n";
	cout << "the area of circle = " << area3(read_number()) << endl;
}

void fun19()
{
	cout << "please enter d to calculate the circle area using diameter: \n";
	cout << "the area of circle = " << area4(read_number()) << endl;
}

void fun20()
{
	print_for_20(area5(read_numberfor20()));
}

void fun21()
{
	cout << "please enter A to calculate circle area using circumference: \n";
	cout << "the area of circle = " << area6(read_number()) << endl;
}

void fun22()
{
	float a, b;
	cout << "please enter a and b to calculate the area of circle that in a isosceles triangle: \n";
	read_numbers2(a, b);
	cout << "the area of circle = " << area7(a, b) << endl;
}

void fun23()
{
	float num[3];
	read_3_number(num);
	cout << "the area of circle = " << area8(num[0], num[1], num[2]) << endl;
}

void fun24()
{
	print_age_result(read_age());
}

void fun25()
{
	print_age_result2(read_age_betwen(18, 45));
}

void fun26()
{
	print_into(read_number());
}

void fun27()
{
	into_print(read_number());
}

void fun28()
{
	print_info(to_string(sum_of_odd(read_number())));
}

void fun29()
{
	print_info(to_string(sum_of_even(read_number())));
}

void fun30()
{
	cout << n_factorial(read_number_poz("plese enter n as pozitif number: ")) << endl;
}

void fun31()
{
	powerof_234(read_number());
}

void fun32()
{
	float n = read_number();
	int m = read_power();
	print_result_of_n_power_m(n, m);
}

void fun33()
{
	cout << "you get: " << get_grade(read_number_in_range(0, 100, "\n")) << endl;
}

void fun34()
{
	double total_sale;

	cout << "enter yor total sale amount: ";
	cin >> total_sale;
	cout << "your persantage: " << get_percentage(total_sale);
	cout << ".\nyour total sale commusion: " << total_sale_commesion(total_sale) << ".\n";
}

void fun35()
{
	print_money(read_money());
}

void fun36()
{
	cout << calculate(read_calcu());
}

void fun37()
{
	cout << "sum = " << sum_99();
}

void fun38()
{
	int t = read_number();
	cout << "----------------------\n";
	if (t >= 2)
	{
		cout << "2 is prime number.\n";
		for (int i = 3; i <= t; i++)
			print_prime_result(i);
	}
	cout << "----------------------";
}

void fun39()
{

	float total_bill = read_number_masseg("please enter total bill: ");
	float cash_paid = read_number_masseg("please enter cash paid: ");
	cout << "the reamainder = " << calculate_remainder(cash_paid, total_bill) << endl;
}

void fun40()
{
	cout << "your totalbill = " << calculate_billvalue(read_number_masseg("please enter billvalue: ")) << endl;
}

void fun41()
{
	sttime time;
	time.hours = read_number_masseg("please enter number of hours: ");
	time_calculate(time);
	cout << time.weaks << " weeks\n" << time.days << " days\n";
}

void fun42()
{
	cout << "time duration in seconds = " << time_to_second(read_time()) << " seconds" << endl;
}

void fun43()
{
	print_time_result(second_to_time(read_number_masseg("please enter the number of seconds: ")));
}

void fun44()
{
	cout << "its " << get_day((endays)(read_number_in_range(1, 7, "please enter day number, "))) << endl;
}

void fun45()
{
	cout << "its: " << get_month((enmonth)(read_number_in_range(1, 12, "please enter mounth number , ")));
}

void fun46()
{
	letters(read_number_masseg("enter 1 to print small letters, enter 2 to print big letters, enter anything else to skip: "));
}

void fun47()
{
	int loan_amount = read_number_masseg("please enter loan amount: ");
	int mounthly_payment = read_number_masseg("please enter monthly payment: ");
	cout << "you need " << calculate_total_mounth(loan_amount, mounthly_payment) << " mounth to complet the loan\n";
}

void fun48()
{
	int loan_amount = read_number_masseg("please enter loan amount: ");
	int how_many_mounth = read_number_masseg("please enter how many mounth: ");
	cout << "you need to pay " << mounthly_instulmant(loan_amount, how_many_mounth) << " liras evrey mounth to complet the loan\n";
}

void fun49()
{
	if (login49())
		cout << "\nyour balance is: 7500" << endl;
}

void fun50()
{
	if (login())
		cout << "\nyour balance is: 7500" << endl;
	else
		cout << "\nyour card has been blocked\n";
}

int main()
{

	return 0;
}
