#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_l;

/**
 * struct dog - struct that stores some information of a dog
 * @name: the dogs name
 * @age: the dogs age 
 * @owner: the dogs owner
 *
 * Description: struct called "dog" that stores its name, its age
 * and the name of its owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_l *new_dog(char *name, float age, char *owner);
void free_dog(dog_l *d);

#endif
