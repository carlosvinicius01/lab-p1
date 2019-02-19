#include <iostream>
#include <string>
#include <vector>

class Invoice
{
	int numero, quantComprada;
	float preco;
	std::string descricao;

	public:
		Invoice(int n, int q, float p, std::string desc)
		{
			numero = n;
			quantComprada = q;
			preco = p;
			descricao = desc;
		}
		
		void setNumero(int n)
		{
			numero = n;
		}
		void setQuantComprada(int q)
		{
			quantComprada = q;
		}
		void setDescricao(std::string desc)
		{
			descricao = desc;
		}
		void setPreco(float p)
		{
			preco = p;
		}

		int getNumero()
		{
			return numero;
		}
		int getQuantComprada()
		{
			return quantComprada;
		}
		std::string getDescricao()
		{
			return descricao;
		}
		float getPreco()
		{
			return preco;
		}

};

class Empregado
{
	std::string nome, sobrenome;
	float salario;
	
	public:
		Empregado(std::string n, std::string sn, float s)
		{
			setNome(n);
			setSobrenome(sn);
			setSalario(s);
		}
		
		void setSalario(float s)
		{
			salario = s < 0 ? 0:s;
		}
		void setNome(std::string n)
		{
			nome = n;
		}
		void setSobrenome(std::string sn)
		{
			sobrenome = sn;
		}
		
		float getSalario() {return salario;}

		std::string getNome() {return nome;}

		std::string getSobrenome() {return sobrenome;}
		
};

class Pessoa
{
	std::string nome, telefone;
	int idade;
	
	public:
		Pessoa(std::string n)
		{
			setNome(n);
		}
		Pessoa(std::string n, int i, std::string t)
		{
			setNome(n);
			setTelefone(t);
			setIdade(i);
		}

		void setIdade(int i)
		{
			idade = i;
		}
		void setNome(std::string n)
		{
			nome = n;
		}
		void setTelefone(std::string t)
		{
			telefone = t;
		}

		int getIdade() {return idade;}
		std::string getNome() {return nome;}
		std::string getTelefone() {return telefone;}

};



class Despesa
{
	double valor;
	std::string tipoDeGasto;
	public:
		void setTipoDeGasto(std::string t) {tipoDeGasto = t;}
		void setValor(double v) {valor = v;}
		std::string getTipoDeGasto() {return tipoDeGasto;}
		double getValor() {return valor;}
};

class ControleDeGastos 
{
	std::vector<Despesa> despesas;
	public:
	void setDespesa(Despesa d) {despesas.push_back(d);}
	double calculaTotalDespesas()
	{
		double soma = 0;
		for(Despesa d : despesas)
		{
			soma += d.getValor();
		}
	}

	bool existeDespesaDoTipo(std::string t)
	{
		int soma = 0;
		for(Despesa d : despesas)
		{
			if(d.getTipoDeGasto() == t)
				return true;
		}
		return false;
	}

};



class Pagamento
{
	double valorPagamento;
	std::string nomeDoFuncionario;

	public:
		void setValorPagamento(double v) {valorPagamento = v;}
		void setNomeDoFuncionario(std::string n) {nomeDoFuncionario = n;}
		double getValorPagamento() {return valorPagamento;}
		std::string getNomeDoFuncionario() {return nomeDoFuncionario;}
};

class ControleDePagamentos
{
	std::vector<Pagamento> pagamentos;
	public:
		void setPagamento(Pagamento p) {pagamentos.push_back(p);}
		double calculaTotalDePagamentos()
		{
			double soma = 0;
			for(Pagamento p : pagamentos)
			{
				soma += p.getValorPagamento();
			}
		}

		bool existePagamentoParaFuncionario(std::string n)
		{
			for(Pagamento p : pagamentos)
			{
				if(p.getNomeDoFuncionario() == n)
					return true;
			}
			return false;
		}
		
};

int main()
{
	std::cout << "Aa??\n\n\n";
}
