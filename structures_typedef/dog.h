# ifndef DOG_H
# define DOG_H

/**
 * struct dog - dog
 * @age: age
 * @name: name
 * @owner: owner
 */
struct dog
{
	float age;
	char *name;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

# endif
