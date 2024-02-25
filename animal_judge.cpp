#include <stdio.h>

enum ANIMAL_NAME {
	ANIMAL_NAME_RABBIT = 0,
	ANIMAL_NAME_TURTLE,
	ANIMAL_NAME_ELEPHANT,
	ANIMAL_NAME_GIRAFFE,
	ANIMAL_NAME_CAT,
	ANIMAL_NAME_DOG,
	ANIMAL_NAME_MAX,
};


class Animal {
	Animal(){};
	~Animal(){};

    ANIMAL_NAME name;
    unsigned int size;
};


Animal choiceLikeAnimal(Animal* animals, int animal_num) {
	constexpr int INVALID_NUM = 0xFFFF;
	int rabbit_number = INVALID_NUM;
	int turtle_number = INVALID_NUM;
	int elephant_number = INVALID_NUM;
	int giraffe_number = INVALID_NUM;
	int max_size_number = INVALID_NUM;
	int max_size = 0;
	for(int i = 0 ; i < animal_num; ++i) {
		switch(animals[i].name) {
		case ANIMAL_NAME_RABBIT:
			rabbit_number = i;
			break;
		case ANIMAL_NAME_TURTLE:
			turtle_number = i;
			break;
		case ANIMAL_NAME_ELEPHANT:
			elephant_number = i;
			break;
		case ANIMAL_NAME_GIRAFFE:
			giraffe_number = i;
			break;
		default:
			if(max_size < animals[i].size) {
				max_size = animals[i].size;
				max_size_number = i;
			}
			break;
		}
	}
	if(rabbit_number != INVALID_NUM) {
		return animals[rabbit_number];
	}
	else if(turtle_number != INVALID_NUM) {
		return animals[turtle_number];
	}
	else if(elephant_number != INVALID_NUM) {
		return animals[elephant_number];
	}
	else if(giraffe_number != INVALID_NUM) {
		return animals[giraffe_number);
	}
	else {
		return animals[max_size_number];
	}
	
	return animals[0];

}

Animal choiceDislikeAnimal(Animal* animals, int animal_num) {
	constexpr int INVALID_NUM = 0xFFFF;
	int rabbit_number = INVALID_NUM;
	int turtle_number = INVALID_NUM;
	int elephant_number = INVALID_NUM;
	int giraffe_number = INVALID_NUM;
	int min_size_number = INVALID_NUM;
	int min_size = 0xFFFF;
	for(int i = 0 ; i < animal_num; ++i) {
		switch(animals[i].name) {
		case ANIMAL_NAME_RABBIT:
			rabbit_number = i;
			break;
		case ANIMAL_NAME_TURTLE:
			turtle_number = i;
			break;
		case ANIMAL_NAME_ELEPHANT:
			elephant_number = i;
			break;
		case ANIMAL_NAME_GIRAFFE:
			giraffe_number = i;
			break;
		default:
			if(min_size > animals[i].size) {
				min_size = animals[i].size;
				min_size_number = i;
			}
			break;
		}
	}
	if(giraffe_number != INVALID_NUM) {
		return animals[giraffe_number);
	}
	else if(elephant_number != INVALID_NUM) {
		return animals[elephant_number];
	}
	else if(turtle_number != INVALID_NUM) {
		return animals[turtle_number];
	}
	else if(rabbit_number != INVALID_NUM) {
		return animals[rabbit_number];
	}
	else {
		return animals[min_size_number];
	}
	
	return animals[0];

}