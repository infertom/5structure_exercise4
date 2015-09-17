#include "Listing.h"

Advertisement * Listing::operator[](const int &number)
{
	iterator it = objects.begin() + number;
	return *it;
}

void Listing::add(Advertisement* ptr)
{
	objects.push_back(ptr);
}

Listing::iterator Listing::begin()
{
	return objects.begin();
}

Listing::iterator Listing::end()
{
	return objects.end();
}