/**
 * Kostra pro cviceni operaci nad jednosmerne vazanym seznamem.
 * IZP, 2017
 */

#include "struct.h"
#include "list.h"


/**
 * Inicializace seznamu. Vytvori prazdny seznam.
 */
List list_ctor()
{
	/* TODO */
}
 

/**
 * Inicializace polozky seznamu. Z objektu vytvori polozku bez naslednika.
 */
Item *item_ctor(Object data)
{
	/* TODO */
}
 
 
/**
 * Vlozi polozku na zacatek seznamu.
 */
void list_insert_first(List *list, Item *i)
{
	/* TODO */
}
 
/**
 * Vrati true, pokud je seznam prazdny.
 */
bool list_empty(List *list)
{
	/* TODO */
}
 
/**
 * Odstrani prvni prvek seznamu, pokud je.
 */
void list_delete_first(List *list)
{
	/* TODO */
}
 
/**
 * Vrati pocet polozek seznamu.
 */
unsigned list_count(List *list)
{
	/* TODO */
}
 
 
/**
 * Najde polozku seznamu s nejmensim identifikatorem. Vraci NULL, pokud je
 * seznam prazdny.
 */
Item *list_find_minid(List *list)
{
	/* TODO */
}
 
/**
 * Najde polozku seznamu s odpovidajicim jmenem objektu. Vraci NULL, pokud
 * takova polozka v seznamu neni.
 */
Item *list_find_name(List *list, char *name)
{
	/* TODO */
}
 
/**
 * Uvolneni seznamu.
 */
void list_dtor(List *list)
{
	/* TODO */
}
