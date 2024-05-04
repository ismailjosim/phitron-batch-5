#include <stdio.h>

void serve_tea()
{
    printf("Put Tea into Cup ☕\n");
}

void add_sugar()
{
    printf("Sugar Added🍨\n");
}

void mix_ingredient()
{
    printf("Take All Ingredient and put them into a Teapot 🫖\n");
}

void make_coffee()
{
    printf("Start Stove 🔥\n");
    mix_ingredient();
    printf("Boiling Water 💧\n");
    add_sugar();
    printf("Wait 5 minutes ⏰\n");
    serve_tea();
}

int main()
{
    printf("Programme Start 👉\n");
    make_coffee();
    printf("Programme Stop 🛑\n");

    return 0;
}
