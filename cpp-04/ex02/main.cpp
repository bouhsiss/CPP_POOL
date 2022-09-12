#include "Dog.hpp"
#include "Cat.hpp"

# define ANIMALS_NB 10

int main(){
	Animal *animals[ANIMALS_NB];

	for(int i = 0; i < ANIMALS_NB; i++) {
		if (i < ANIMALS_NB/2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
				std::cout << std::endl;
		animals[i]->makeSound();
	}	
	for(int i = 0; i < ANIMALS_NB; i++)
		delete(animals[i]);

	// {
	// 	Cat *smolkat = new Cat();
	// 	Brain *smolkatBrain;
	// 	smolkat->makeSound();
	// 	smolkat->setBrain("[AM A SMOOOOOOOLKAT]");
	// 	smolkatBrain = smolkat->getBrain();
	// 	std::cout << smolkatBrain->getIdeas()[0] << std::endl;
	// 	delete(smolkat);
	// }

	// Dog basic;
	// {
	// 	Dog tmp = basic;
	// 	tmp.setBrain("idk");
	// 	basic.setBrain("hh");
	// 	Brain *hehe = tmp.getBrain();
	// 	std::cout << hehe->getIdeas()[0] << std::endl;
	// }
}