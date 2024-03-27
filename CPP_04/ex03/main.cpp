#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int	main() {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Cure());
	Ice* ice1 = new Ice();
	Ice* ice2(ice1);
	src->learnMateria(ice2);

	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->unequip(1);
	bob->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);

	me->use(0, *bob);
	me->use(1, *bob);
	bob->use(0, *me);

	delete bob;
	delete me;
	delete src;
	return 0;
}