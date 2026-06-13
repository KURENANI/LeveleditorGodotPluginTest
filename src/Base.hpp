
#pragma once
#include <godot_cpp/classes/node.hpp>

class Base:public godot::Node {
  GDCLASS(Base, Node);

  protected:
  static void _bind_methods();
  private:
  //Default data -code place
  void Message();
  // hpp-header
  //cpp- implementation

};
