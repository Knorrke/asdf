#include <iostream>

bool istPrim(int n)
{
	for(int i=2; i*i<=n; i++)
	{
		if(n%i==0)
		return false;
	}
	return true;
}

void istPrimPaar(int n)
{
	if(istPrim(n))
	{
		std::cout<<"\n"<<n<<" ist Primzahl. ";
		if(istPrim(n-2))
		{
			std::cout<<n-2<<" bildet mit "<<n<<" ein Primpaar.";
		}else if(istPrim(n+2)){
			std::cout<<n+2<<" bildet mit "<<n<<" ein Primpaar.";
		}
	}else{
		std::cout<<"\n"<<n<<" ist keine Primzahl.";
	}
}

void suchePrimPaar(int n)
{
	for(int i=3;n>0;n--)
	{
		while(!(istPrim(i))||!(istPrim(i+2)))
		{
			i++;
		}
		std::cout<<"\n"<<i<<"  "<<i+2;
		i++;
	}
}

int main()
{
//	//Test Primzahlprüfung
//	for(int i=0;i<=5;i++)
//	{
//		int n;
//		std::cin>>n;
//		std::cout<<"\n"<<istPrim(n);
//	}

//	//Test Primpaarprüfung
//	for(int i=0;i<5;i++)
//	{
//		int n;
//		std::cin>>n;
//		istPrimPaar(n);
//	}

	//Test Primpaarsuche
	int n;
	std::cin>>n;
	suchePrimPaar(n);
return 0;
}
