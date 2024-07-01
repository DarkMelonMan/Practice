#pragma once
using namespace System;
using namespace System::Collections;
using namespace System::IO;

bool ValidText(String^ text);

bool ValidTime(String^ text);

bool ValidCost(String^ text);

bool ValidCost(String^ text1, String^ text2);

int GetTimeInMinutes(String^ time);

bool ValidTime(String^ departureTime, String^ arrivalTime);

bool ValidID(String^ text);

bool ValidID(String^ text1, String^ text2);
