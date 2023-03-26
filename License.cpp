

class License {
public:
	string platenumber;
	string state;
	string make;
	string style;
	string color;
	string location;
	string violation;
	string fine;
	string year;
	string month;
	string day;
	string hour;
	string minute;
	License() {

	}
	License(string platenumber, string state, string location, string make, string style, string color, string violation, string fine, string year, string month, string day, string hour, string minute) {
		this->platenumber = platenumber;
		this->state = state;
		this->location = location;
		this->make = make;
		this->style = style;
		this->color = color;
		this->violation = violation;
		this->fine = fine;
		this->year = year;
		this->month = month;
		this->day = day;
		this->hour = hour;
		this->minute = minute;
	}
};
