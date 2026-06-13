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
  ClassDB::bind_method(D_METHOD("get_my_data"), &Base::get_my_data);
  ClassDB::bind_method(D_METHOD("set_my_data", "new_data"), &Base::set_my_data);
  ADD_PROPERTY(PropertyInfo(Variant::STRING, "my_data"), "set_my_data", "get_my_data");

}
String Base::get_my_data() const
{
  return my_data;
}

void Base::set_my_data(const String &new_data)
{
  my_data = new_data;
}
