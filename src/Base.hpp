
#pragma once
#include <godot_cpp/classes/node.hpp>

using namespace godot;
class Base:public Node {
  GDCLASS(Base, Node);
  protected:
  static void _bind_methods();
  private:
  //Default data -code place
  String my_data="";
  String get_my_data() const;
  void set_my_data(const String &new_data);
  void Message();

};
