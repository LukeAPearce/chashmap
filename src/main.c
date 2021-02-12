#include "hash_table.h"
#include <stdio.h>

int main() {
	ht_hash_table* ht = ht_new();
	ht_insert(ht, "k", "v");
	printf("%s", ht_search(ht, "k"));
}

