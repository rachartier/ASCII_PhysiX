#ifndef __LIGHTBLOCK_H__
#define __LIGHTBLOCK_H__

#include "linkedlist.h"
#include "def.h"

void	lightblock(linkedlist_t *, point_t *, __uint, int *);
void	reverseblock(linkedlist_t *, point_t *, __uint, int *);
void	heavyblock(linkedlist_t *, point_t *, __uint, int *);
void	water(linkedlist_t *, point_t *, __uint, int *);

#endif /* __LIGHTBLOCK_H__ */