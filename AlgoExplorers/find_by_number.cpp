#include "find_by_number.h"

int findBookNumberByNum(int num) {
    for (size_t i = 0; i < books.size(); i++) {
        if (books[i].num == num) {
            return static_cast<int>(i);
        }
    }
    return -1;
}