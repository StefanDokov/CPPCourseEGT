
#include <iostream>
using namespace std;
#include "Administration.h"
#include "Team.h"
#include "Graphic.h"
#include "Usera.h"
#include "Ref.h"

int main()
{
   

	Adminstration a2("Ivan", "123");
	Team t1("YWLA", "London");
	Team t2("Buba", "Huba");
	Team t3("Dodo", "Todo");


	t1.updatePoints(4);
	t2.updatePoints(6);
	t3.updatePoints(8);

	a2.addTeam(t1);
	a2.addTeam(t2);
	a2.addTeam(t3);

	
	a2.listRanking();


}
