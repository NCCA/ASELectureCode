#include "Colour.h"
#include <iostream>
#include <cassert>


void Colour::clamp(float _min,	float _max)
{

	m_r<_min ? m_r = _min : m_r;
	m_r>_max ? m_r = _max : m_r;

	m_g<_min ? m_g = _min : m_g;
	m_g>_max ? m_g = _max : m_g;

	m_b<_min ? m_b = _min : m_b;
	m_b>_max ? m_b = _max : m_b;

	m_a<_min ? m_a = _min : m_a;
	m_a>_max ? m_a = _max : m_a;
}

void Colour::mix(const Colour &_in,float _amount		)
{
  assert(_amount >=0 && _amount <=1);
	m_r=m_r+(_in.m_r-m_r)*_amount;
	m_g=m_g+(_in.m_g-m_g)*_amount;
	m_b=m_b+(_in.m_b-m_b)*_amount;

}

void Colour::print() const
{
	std::cout<<"["<<m_r<<","<<m_g<<" "<<m_b<<" "<<m_a<<"]\n";
}

Colour::~Colour()
{
	std::cout <<m_name<<" dtor called \n";
}

