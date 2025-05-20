#pragma once
class Token
{
public:

	char m_kind;
	double m_value;
	Token(char kind) : m_kind(kind), m_value(0.0) {};
	Token(char kind, double value) : m_kind(kind), m_value(value) {};
};