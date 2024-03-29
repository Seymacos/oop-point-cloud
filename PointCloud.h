#pragma once
/*
* @file PointCloud.h
* @Author Me beyza uygur (beyzauygur989@gmail.com)
* @date January,2023
* @brief : Sahip olduğu noktaları, dinamik olarak yaratılan bir Point dizisinde tutan bir sınıf.
*/
/*!
  Point nesnelerini bir dizide tutar. PointCloud'lari toplama ve iki PointCloud'i esitleme ozellikleri vardir.
*/
#include "Point.h"
//private uyeler tanimlandi.
using namespace std;
class PointCloud {
private:
	list<Point> points;
public:
	//! Point sinifi icin constructor.
	PointCloud();
	//! points dizisinin boyutunu dondurur.
	int getpointNumber() const;
	//! points dizisinden bir Point vector dondurur.
	list<Point> getPoints() const;
	//! PointCloud'a bir Point ekler.
	void setPoints(list<Point>);
	//! point vektorunu set eder.
	void setPointsvector(list<Point>);
	//! pointleri print eder.
	void Print_points(list<Point> p);
	//! PointCloud'lari birlestirir.
	PointCloud operator+(const PointCloud& pc);//point cloud ları toplar.
	const PointCloud& operator=(const PointCloud& pc);//point cloudların eşitliğini kontrol eder.
	void ınsertPoints(Point p);//!nokta ekler.
};
