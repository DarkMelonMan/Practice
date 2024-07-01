#define BASE L"base.txt"

using namespace System;
using namespace System::Collections;
using namespace System::IO;


bool ValidText(String^ text) {
	return text->Length <= 30 && text->Length > 1;
}

bool ValidTime(String^ text) {
	int hours, minutes;
	if (text->Length == 4 && text[1] == ':') {
		if (Int32::TryParse(text[0].ToString(), hours) && Int32::TryParse(String::Concat(text[2], text[3]), minutes)) {
			if (minutes < 60)
				return true;
		}
	}
	else if (text->Length == 5 && text[2] == ':') {
		if (Int32::TryParse(String::Concat(text[0], text[1]), hours) && Int32::TryParse(String::Concat(text[3], text[4]), minutes)) {
			if (minutes < 60 && hours < 24)
				return true;
		}
	}
	return false;
}

bool ValidCost(String^ text) {
	int fractionalCost;
	int intCost;
	if (text->Contains(",") && !text->Contains(".")) {
		if (text->IndexOf(',') == text->LastIndexOf(',') && Int32::TryParse(text->Split(',')[0], intCost)
			&& Int32::TryParse(text->Split(',')[1], fractionalCost)) {
			return (intCost + fractionalCost) > 0 && intCost < 10000000;
		}
	}
	else if (text->Contains(".") && !text->Contains(",")) {
		if (text->IndexOf('.') == text->LastIndexOf('.') && Int32::TryParse(text->Split('.')[0], intCost)
			&& Int32::TryParse(text->Split('.')[1], fractionalCost)) {
			return (intCost + fractionalCost > 0) && intCost < 10000000;
		}
	}
	else if (Int32::TryParse(text, intCost))
		return intCost > 0 && intCost < 10000000;
	return false;
}

bool ValidCost(String^ text1, String^ text2) {
	if (ValidCost(text1) && ValidCost(text2)) {
		double cost1, cost2;
		if (text1->Contains(".")) {
			cost1 = Double::Parse(text1->Replace(".", ","));
		}
		else cost1 = Double::Parse(text1);
		if (text2->Contains(".")) {
			cost2 = Double::Parse(text2->Replace(".", ","));
		}
		else cost2 = Double::Parse(text2);
		return cost1 < cost2;
	}
	return true;
}

int GetTimeInMinutes(String^ time) {
	if (ValidTime(time)) {
		int hours, minutes;
		if (time->Length == 4 && time[1] == ':') {
			hours = Int32::Parse(time[0].ToString());
			minutes = Int32::Parse(String::Concat(time[2], time[3]));
		}
		else if (time->Length == 5 && time[2] == ':') {
			hours = Int32::Parse(String::Concat(time[0], time[1]));
			minutes = Int32::Parse(String::Concat(time[3], time[4]));
		}
		return hours * 60 + minutes;
	}
	return 0;
}

bool ValidTime(String^ departureTime, String^ arrivalTime) {
	if (ValidTime(departureTime) && ValidTime(arrivalTime)) {
		int intDepTime = GetTimeInMinutes(departureTime);
		int intArrTime = GetTimeInMinutes(arrivalTime);
		if (intArrTime < intDepTime)
			intArrTime += 1440;
		return (intArrTime - intDepTime) <= 1160;
	}
	return true;
}

bool ValidID(String^ text) {
	int ID;
	array<String^>^ lines = File::ReadAllLines(BASE);
	return (Int32::TryParse(text, ID) && ID > 0 && ID <= lines->Length);
}

bool ValidID(String^ text1, String^ text2) {
	if (ValidID(text1) && ValidID(text2)) {
		int min = Int32::Parse(text1), max = Int32::Parse(text2);
		return min <= max;
	}
	return true;
}