#include "Land.h"

Land::Land(Point lokasi)
{
	this->lokasi.setX(lokasi.getX());
	this->lokasi.setY(lokasi.getY());
	this->adaRumputnya = true;
}

Point Land::getLokasi() const
{
	return (this->lokasi);
}

bool Land::getAdaRumputnya() const
{
	return (this->adaRumputnya);
}

void Land::setLokasi(Point P)
{
	this->lokasi.setY(P.getX());
	this->lokasi.setY(P.getY());
}

void Land::setAdaRumputnya(bool cek)
{
	this->adaRumputnya = cek;
}
