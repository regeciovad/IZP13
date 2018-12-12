#include "struct.h"
#include "list.h"

int main()
{
    printf("list_ctor...\n");
    List list = list_ctor();
 
    printf("list_empty...\n");
    printf("Seznam prazdny: %s\n", list_empty(&list) ? "ano" : "ne");
 
    Item *item;
 
    Object o1;
    object_ctor(&o1, 42, "Honza");
    printf("Vytvoren objekt: ");
    print_object(&o1);
    printf("item_ctor...\n");
    item = item_ctor(o1);
    printf("list_insert_first...\n");
    list_insert_first(&list, item);
 
    printf("Seznam prazdny: %s\n", list_empty(&list) ? "ano" : "ne");
    printf("list_count...\n");
    printf("Pocet prvku v seznamu: %d\n", list_count(&list));
 
    Object o2;
    object_ctor(&o2, 2, "Malem");
    printf("Vytvoren objekt: ");
    print_object(&o2);
    item = item_ctor(o2);
    printf("list_insert_first...\n");
    list_insert_first(&list, item);
 
    Object o3;
    object_ctor(&o3, 0, "Kralem");
    printf("Vytvoren objekt: ");
    print_object(&o3);
    item = item_ctor(o3);
    printf("list_insert_first...\n");
    list_insert_first(&list, item);
 
    printf("Pocet prvku v seznamu: %d\n", list_count(&list));
 
    printf("Odstraneni prvniho prvku ze seznamu \n");
    list_delete_first(&list);
    printf("Pocet prvku v seznamu: %d\n", list_count(&list));
 
 
    // opetovne vlozeni objektu o1		
    item = item_ctor(o3);
    printf("list_insert_first...\n");
    list_insert_first(&list, item);
    printf("Pocet prvku v seznamu: %d\n", list_count(&list));

    printf("list_find_minid...\n");
    item = list_find_minid(&list);
    if (item != NULL) {
        printf("Polozka s nejmensim identifikatorem: {%d, \"%s\"}\n",
            item->data.id, item->data.name);
	}
	else
        printf("Polozka s nejmensim identifikatorem nenalezena\n");
 
    printf("list_find_name...\n");
    char* name = "Honza";
    item = list_find_name(&list, name);
    if (item != NULL) {
        printf("Polozka s daty %s nalezena\n", name);
	}
	else
        printf("Polozka s daty %s nenalezena.\n",name);
 
    printf("list_dtor...\n");
    list_dtor(&list);
    object_dtor(&o1);
    object_dtor(&o2);
    object_dtor(&o3);
    printf("Seznam prazdny: %s\n", list_empty(&list) ? "ano" : "ne");
 
    return 0;
}
