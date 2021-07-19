#ifndef POPPY_H
#define POPPY_H
/**
 *struct dog - the structure
 *@name: the dogs name
 *@age: its age
 *@owner: dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

#endif /* POPPY_H */
