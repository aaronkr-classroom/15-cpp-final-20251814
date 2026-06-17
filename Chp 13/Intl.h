#pragma once
#ifndef GUARD_Intl_h
#define GUARD_Intl_h

#include <iostream>
#include "Core.h"

using namespace std;

class Intl : public Core {
public:
	Intl() : toeic(0) {};
	Intl(istream& is) { read(is); };
	double grade() const;
	istream& read(istream&);

private:
	double toeic; // 국제 학생 전용 어학 성적 등 (Grad의 thesis와 같은 역할)
	Intl* clone() const { return new Intl(*this); }
};

#endif#pragma once

