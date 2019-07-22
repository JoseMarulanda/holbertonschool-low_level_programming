#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog information
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: name of owner
 *
 * Description: information  about the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
