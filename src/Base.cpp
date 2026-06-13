#include <godot_cpp/core/print_string.hpp>
#include "Base.hpp"
using namespace godot;
void Base::Message()
{
  print_line("Hello");
}

void Base::_bind_methods()
{
  ClassDB::bind_method(D_METHOD("Message"), &Base::Message);
}
