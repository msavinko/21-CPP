#include "contact.hpp"

Contact::Contact(){} //constructor

Contact::~Contact(){} //distructor

void Contact::setName(string name)
{	m_name = name;}

string Contact::getName()
{	return this->m_name;}