extends Node2D

func _ready() -> void:
	Test()

func Test()->void:
	var BC:Base=Base.new()
	BC.Message()
	print(BC.my_data)
	BC.my_data="MEOW"
	print(BC.my_data)
