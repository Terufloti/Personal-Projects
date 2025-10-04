#include <iostream>
#include <vector>
#include <algorithm>


void item_2();
void item_3();

int main() {

    





    return 0;
}

void item_2(){
    /// Item 2: Prefer to use consts to defines
    // This is worse -> multiple copies seen by preprocessor (this may not be in symbol table)
    #define ASPECT_RATIO 1.44
    // That's better -> only one copy seen by compiler (sure in symbol table)
    const float AspectRatio = 1.44;
    // In addition to that, pointing to const involves creating const pointer
    // with special char* constant pointer e.g.
    const char * const authorName = "Kacper Farion"; // Twice const
    // It's also same as:
    const std::string authorName("Kacper Farion");

    // Second special case is scope of const only in class -> in that case, num must be a static
    /*
        class Author {
            private:
                static const int num = 5;
                static const int num;
                int scores[num];
        };
        const int Author::num = 1.35;
    */

    // There's way around: enum
    /*
        class GamePlayer{
            private:
                enum { num = 5 };
                int scores[num]; // fine
        };
    */
    // this shit behaves more like #define than const, sometimes prevents from unnecessary memory allocation
    // Also inline functions and templates are more better than defines (shit behaves crazy)
}

void item_3() {
    /// Item 3: Use consts
    char greeting[] = "Hello world";
    char *p = greeting; // non-const pointer, non-const data
    const char *p = greeting; // non-const pointer, const-data
    char * const p = greeting; // const pointer, non-const data
    const char * const p = greeting; // const pointer, const data
    // Syntax above: *->const = pointer is const, const<-* = data is const

    // When talking about iterators, we may have const iterators -> iterator isn't allowed to point to different element,
    // but from STL const_iterator can be changed to different element, but that element cannot be changed, e.g.
    std::vector<int> vec;
    const std::vector<int>::iterator iter = vec.begin();
    *iter = 10; // it's okay, we can modify data
    //++iter; // error cause iter is const

    std::vector<int>::const_iterator cIter = vec.begin();
    ++cIter; // it's okay, we can move iterator
    //*cIter = 10; // error cause *cIter is const

    // Next are const member functions, e.g. operator overloading:
    /*
        class TextBlock {
            public:
                const char& operator[](std::size_t position) const { return text[position]; } // that's operator [] for const objects
                char& operator[](std::size_t position) { return text[position]; } // that's operator [] for non-const objects
            private:
                std::string text;
            ...
            public:
                void print(const TextBlock& ctb){
                    std::cout<< ctb[0]; // This calls TextBlock::operator[]
                }

            // All of the above gives different handling to different types, e.g.
            TextBlock tb("Hello"); // Non-const object
            const TextBlock ctb("Hello"); // Const object
            std::cout << tb[0];     // fine - reading a non-const TextBlock
            tb[0] = 'x';            // fine - writing a non-const TextBlock
            std::cout<<ctb[0];      // fine - reading a const TextBlock
            ctb[0] = 'x';           // error - writing a const TextBlock
            
        };

    */
}