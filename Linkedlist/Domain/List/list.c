#include "list.h"

void list_init(List *list, void (*destroy)(void *data))
{
    list->size = 0;
    list->destroy = destroy;
    list->match = NULL;
    list->head = NULL;
    list->tail = NULL;
}