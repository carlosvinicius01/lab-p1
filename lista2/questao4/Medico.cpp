
#include "Medico.h"

Medico::Medico() {}

void Medico::setNome(std::string n) { nome = n; }

void Medico::setCurso(std::string c) { curso = c; }

void Medico::setAltura(double h) { altura = h; }

void Medico::setPeso(double p) { peso = p; }

std::string Medico::getNome() { return nome; }

std::string Medico::getCurso() { return curso; }

double Medico::getAltura() { return altura; }

double Medico::getPeso() { return peso; }

Medico::~Medico() {}
